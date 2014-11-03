`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:45:48 10/30/2014 
// Design Name: 
// Module Name:    selectorControles 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module selectorControles(
		input selectorControles,
		input [0:5] mouse,
		input botonDerecha,
		input botonIzquierda,
		output salidaDerecha,
		output salidaIzquierda
    );
	 
	 reg controlDer  = 0;
	 reg controlIzq  = 0;
	 
	always@(selectorControles or mouse or botonDerecha or botonIzquierda )
	 begin		
		
		case(selectorControles)
			0:begin				
				controlDer <= botonDerecha;
				controlIzq <= botonIzquierda;
			end
			1:begin
				controlDer <= mouse[0] ^ !mouse[5];
				controlIzq <= mouse[0] ^ mouse[5];
			end
			//default: poner botones en caso q no se escoga ni mouse ni acelerometro
		endcase
		
	 end
	 
	 assign salidaDerecha 	= controlDer;
	 assign salidaIzquierda = controlIzq;

endmodule
