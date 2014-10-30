package com.example.clienteecho;


import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.net.Socket;
import java.util.List;


import android.app.Activity;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Bundle;
import android.os.StrictMode;

import android.widget.TextView;


public class ClienteECHO extends Activity implements SensorEventListener {
	  private TextView output;
	  private float prevX = 0,curX = 0;
	 
	  @Override public void onCreate(Bundle savedInstanceState) {
	 super.onCreate(savedInstanceState);
	 setContentView(R.layout.activity_cliente_echo);
	 output = (TextView) findViewById(R.id.TextView01);
	    StrictMode.setThreadPolicy(new StrictMode.ThreadPolicy.
	           Builder().permitNetwork().build());

	 ejecutaCliente();
	  }
	 
	  
	  
	  public class ClientThread implements Runnable {

		@Override
		public void run() {
			 String ip="10.10.0.50";
			 int puerto=5010;
			 log(" socket " + ip + " " + puerto);
			 try {
			 Socket sk = new Socket(ip,puerto);
			 PrintWriter salida = new PrintWriter(
			new OutputStreamWriter(sk.getOutputStream()),true);
			 while(true){
				 salida.println(curX);
				 Thread.sleep(2);
			 }
			 } catch (Exception e) {
			 log("error: " + e.toString());
			 }
			
		}
		  
	  }
	  private void ejecutaCliente() {
		  Thread cThread = new Thread(new ClientThread());
          cThread.start();
	 
	  }
	 
	  private void log(String string) {
	     output.append(string + "\n");
	  }

	@Override
	public void onSensorChanged(SensorEvent event) {
		 synchronized (this) {
	            
	            curX = event.values[2];

	            prevX = curX;
		 }
		
	}

	@Override
	public void onAccuracyChanged(Sensor sensor, int accuracy) {}
	
	@Override
    protected void onResume() {
        super.onResume();
        SensorManager sm = (SensorManager) getSystemService(SENSOR_SERVICE);
        List<Sensor> sensors = sm.getSensorList(Sensor.TYPE_GYROSCOPE);        
        if (sensors.size() > 0) {
        	sm.registerListener(this, sensors.get(0), SensorManager.SENSOR_DELAY_GAME);
        }
    }
    
    @Override
    protected void onStop() {
    	SensorManager sm = (SensorManager) getSystemService(SENSOR_SERVICE);    	
        sm.unregisterListener(this);
        super.onStop();
    }
    
	}
