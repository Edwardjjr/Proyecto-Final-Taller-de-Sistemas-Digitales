`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:46 10/21/2014 
// Design Name: 
// Module Name:    CarroY 
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
module CarroY(
	 input iClk,
    input[8:0] iPosicionX,
    input[8:0] iPosicionY,
    input iEnable,
    input iSuma,
    input iSalto,
    output[9:0] oPosicionX,
    output[8:0] oPosicionY
    );
	 
	 reg[9:0] RegistroX;
	 reg[8:0] RegistroY;
	 
	 always@(posedge iClk)
	 begin
		if(iEnable)begin
			RegistroY = iPosicionY;
			if(iPosicionX < 200)
			begin
				RegistroX = 225;
			end
			else begin
				RegistroX = 330;
			end
		end
		if(iSuma)begin
			RegistroX = RegistroX + 9'd1;
		end
		if(iSalto)begin
			RegistroY = -105;
			if(iPosicionX < 200)
			begin
				RegistroX = 225;
			end
			else begin
				RegistroX = 330;
			end
			
		end
				
	 end
	 
	 assign oPosicionX = RegistroX;
	 assign oPosicionY = RegistroY;


endmodule
