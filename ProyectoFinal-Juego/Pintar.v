`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:24:36 10/21/2014 
// Design Name: 
// Module Name:    Pintar 
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
module Pintar(
	input clk,
	input [10:0] pixelX,
	input [9:0] pixelY,
	input iPintarCarros,
	input iPintarJugador,
	input[9:0] iPosicionX1,
	input[9:0] iPosicionX2,
	input[9:0] iPosicionX3,
	input[8:0] iPosicionY1,
	input[8:0] iPosicionY2,
	input[8:0] iPosicionY3,
	input[8:0] iPosicionJugador,	
	output [2:0] ColorRGB
    );
	 
	 reg [2:0] rColorRGB;//revisar si estos bits funca si no pasarlos a  [24:0]
	 
	 localparam cFondo = 0;	 //es para asignarle el color negro al fondo de la pantalla.
	 localparam gap = 105;
	 localparam lengthCuadro = 85; //Carros de tama�o 85x85 pixeles.
	 localparam heigthCuadro = 90;
	 localparam YJugador = 340; 
	 
	 always@(posedge clk)
		begin
			rColorRGB <= cFondo;
			
			//Aqui se pintan los bordes y los obstaculos. La se�al iPintarCarros llega de la m�quina de estados master. 
			if(iPintarCarros)
			begin
				//Pintar borde verde izquierdo
				if ((pixelY > 0) &&(pixelY < 480) &&(pixelX > 0)&&(pixelX < 215))begin
					rColorRGB <= 2'd3; 
				end
				//Pintar borde verde derecho
				if ((pixelY > 0) &&(pixelY < 480) &&(pixelX > 425)&&(pixelX < 640))begin
					rColorRGB <= 2'd3; 
				end
			
	
				///Estos son los ifs de los carros obstaculos. 
				if ((pixelY > iPosicionY1) &&(pixelY < iPosicionY1+heigthCuadro) &&(pixelX > iPosicionX1)&&(pixelX < (iPosicionX1+lengthCuadro)))begin
					rColorRGB <= 2'd1;//cTubo; 
				end
				
				if ((pixelY > iPosicionY2) &&(pixelY < iPosicionY2+heigthCuadro) &&(pixelX > iPosicionX2)&&(pixelX < (iPosicionX2+lengthCuadro)))begin
					rColorRGB <= 2'd1;//cTubo; 
				end
				
				if(iPosicionY1 > 390)begin 
					if ((pixelY > iPosicionY3) &&(pixelY < iPosicionY1-390) &&(pixelX > iPosicionX3)&&(pixelX < (iPosicionX3+lengthCuadro)))begin
					rColorRGB <= 2'd1;//cTubo; 
					end				
				end				
			end
			
			//Aqui se pinta el carro del Jugador. La se�al iPintarJugador llega de la m�quina de estados master. 
			if(iPintarJugador)
			begin
			if ((pixelY > (YJugador) ) &&(pixelY < ((YJugador+heigthCuadro))) &&(pixelX > iPosicionJugador)&&(pixelX < (iPosicionJugador+ lengthCuadro)))
					rColorRGB <= 3'd7; // color del cuadro

				
			end				
		end
	 
	 
		assign ColorRGB = rColorRGB;

endmodule
