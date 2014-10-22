`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:50 10/21/2014 
// Design Name: 
// Module Name:    DivisorFrecuencias 
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
module DivisorFrecuencias(
	input clk,
	output clk_25Mhz,//para VGA
	output clk_1s	//Para los botones
	
    );
	
	 reg clk_25Temp = 0 ;
	 reg [24:0] contador = 25'h0;
	 reg clk_1sTemp = 0;
	 
	 
	 always@(posedge clk)begin
		clk_25Temp <= ~clk_25Temp;
		contador <= contador + 1;
		
		if (contador == 25'h249f0)begin
			contador <= 11'd0;
			clk_1sTemp <= ~clk_1sTemp;
		end 
	end
		
	
	
	assign clk_25Mhz = clk_25Temp;
	assign clk_1s = clk_1sTemp;
	
endmodule
