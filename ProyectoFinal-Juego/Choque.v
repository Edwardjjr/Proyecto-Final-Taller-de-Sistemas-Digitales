`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:05:44 10/21/2014 
// Design Name: 
// Module Name:    Choque 
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
module Choque(
    input [9:0] iPosicionXT,
    input [8:0] iPosicionYT,
    input [8:0] iPosicionYC,
    output reg oStop
    );
	 
	 always@(iPosicionXT or iPosicionYC or iPosicionYT)
	 begin
		oStop = 0;
		if((iPosicionYC<= iPosicionYT) && (iPosicionXT <160) &&(iPosicionXT> 63))
			oStop = 1;
		if((iPosicionYC>= iPosicionYT+96) &&(iPosicionXT <160) &&(iPosicionXT> 63))
			oStop = 1;
	 end


endmodule

