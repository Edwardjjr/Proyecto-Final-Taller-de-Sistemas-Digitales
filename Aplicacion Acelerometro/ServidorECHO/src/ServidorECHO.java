import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;





public class ServidorECHO {
 
  public static void main(String args[]) {
   try {
          ServerSocket sk = new ServerSocket(5010);
          while (true) {
        	  	 System.out.println("Esperando");
        	     Socket incoming = sk.accept();

        	     Thread t = new ThreadServerHandler(incoming);
        	     t.start();
        	   }
   } catch (IOException e) {
          System.out.println(e);
   }
  } 

}


class ThreadServerHandler extends Thread {
	private Socket socket = null;

    public ThreadServerHandler(Socket socket) {
	super("ThreadServerHandler");
	this.socket = socket;
    }
    public void run() {
    	
    	try {
    		BufferedReader entrada = new BufferedReader(
                    new InputStreamReader(socket.getInputStream()));
            while(true)
            {
            	if(entrada !=null)
            	{
		            String datos = entrada.readLine();
		            System.out.println(datos);
            	}
            }

    	} catch (IOException e) {
    	    e.printStackTrace();
    	}
    }
  }


