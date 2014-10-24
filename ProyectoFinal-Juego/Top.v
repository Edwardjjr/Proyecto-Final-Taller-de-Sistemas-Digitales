`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:09:10 10/21/2014 
// Design Name: 
// Module Name:    Top 
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
module Top(
    input iReset,
    input iStart,
	 input iClk,
    input iPosicionY1,
    input iPosicionY2,
	 output sincH,
    output sincV,
    output colorR,
    output colorG,
    output colorB,
	 output [3:0] conectorAn,
	 output [0:6] display
	  
	 
	 
    );
	 

//activadores de los registros
wire EnableResta;
wire EnableSalto;
wire EnableRegistrosPintar;
wire EnableRegistrosPintarY;
wire EnableConectorCero;

// indica el choque 
wire EnableChoque;

wire EnableResetPintar;

//senales para las contadores
wire EnableConectorLFSM;



wire EnablePintar;
wire EnablePintarMonitor;
	
	
//salidas de los Contadores	
wire[8:0] SalidaContadorLFSM;




//Conectores de las tubos a pintar
wire[9:0] ConectorPosicionX1;
wire[8:0] ConectorPosicionY1;
wire[9:0] ConectorPosicionX2;
wire[8:0] ConectorPosicionY2;
wire[9:0] ConectorPosicionX3;
wire[8:0] ConectorPosicionY3;



//Conectores puntos de pintar

wire [10:0] ConectorPixelX;
wire [9:0] ConectorPixelY;

//wire display
wire[3:0] conectorInversorAux;
wire[0:6] conectorDisplay;


//conectores de numero 

wire [15:0] ConectorNumero;

//conectores de modulo de pintar

wire [2:0] colorRGB; //activar para conectar el generador
wire video, synH, synV; 

//DivisoresDe reloj

wire wireClk25;
wire wireClk1s;


//Conectores del birds

wire wireSubir;
wire wireBajar;
wire sepuedesubir;
wire sepuedebajar;
wire[8:0] wireCuadroX;
wire wirePintarBirds;

//conectores sumador

wire conectorEnableSumador;

// Instantiate the module
DivisorFrecuencias 	Divisor (
    .clk(iClk), 
    .clk_25Mhz(wireClk25), 
    .clk_1s(wireClk1s)
    );
 
// Instantiate the module
MaquinaMaster FSMMaster (
    .iClk(wireClk1s),  
    .oEnableLFSR(EnableConectorLFSM), 
    .oPintar(EnablePintar), 
	 .oResetPintar(EnableResetPintar),
    .iStop(EnableChoque),
    .iStart(iStart), 
    .iReset(iReset)
    );
	 
LFSR RegistroLFSM(
    .clk(wireClk1s), 
    .rst_n(EnableConectorLFSM), 
    .data(SalidaContadorLFSM)
    );



 



// Instantiate the module
MaquinaCarros FSMMaquina (
    .iClk(wireClk1s), 
    .iEnable(EnablePintar), 
    .iReset(iReset),
	 .iResetPintar(EnableResetPintar),	 
    .iEnableCero(EnableConectorCero), 
    .pintar(EnablePintarMonitor), 
    .EnableX(EnableRegistrosPintar), 
    .EnableY(EnableRegistrosPintarY), 
    .Suma(EnableResta), 
    .Salta(EnableSalto)
    );

// Instantiate the module
CarroX RegistroPintarX1 (
    .iClk(wireClk1s), 
    .iPosicionX(10'd330), 
    .iPosicionY(9'd240), 
    .iPosicionAuxX(ConectorPosicionX2), 
    .iPosicionAuxY(ConectorPosicionY2), 
    .iEnable(EnableRegistrosPintar), 
    .iSuma(EnableResta), 
    .iSalto(EnableSalto), 
    .oPosicionSalidaX(ConectorPosicionX1), 
    .oPosicionSalidaY(ConectorPosicionY1), 
    .oEnableCero(EnableConectorCero),
	 .oEnableCuenta(conectorEnableSumador)
    );

// Instantiate the module
Carro2 RegistroPintarX2 (
    .iClk(wireClk1s), 
    .iPosicionX(10'd225), 
    .iPosicionY(9'd0), 
    .iPosicionAuxX(ConectorPosicionX3), 
    .iPosicionAuxY(ConectorPosicionY3), 
    .iEnable(EnableRegistrosPintar), 
    .iSuma(EnableResta), 
    .iSalto(EnableSalto), 
    .oPosicionSalidaX(ConectorPosicionX2), 
    .oPosicionSalidaY(ConectorPosicionY2)
    );
	 
// Instantiate the module RegistroPintarY
CarroY RegistroPintarY (
    .iClk(wireClk1s), 
    .iPosicionX(SalidaContadorLFSM), 
    .iPosicionY(9'd0), 
    .iEnable(EnableRegistrosPintarY), 
    .iSuma(EnableResta), 
    .iSalto(EnableSalto), 
    .oPosicionX(ConectorPosicionX3), 
    .oPosicionY(ConectorPosicionY3)
    );

	 
	 
// Instantiate the module
vga_sync VGA (
    .clkP(wireClk25), 
    .sincH(synH), 
    .sincV(synV), 
    .video(video), 
    .pixelX(ConectorPixelX), 
    .pixelY(ConectorPixelY)
    );
	 
// Instantiate the module
Pintar PintarMonitor (
    .clk(wireClk25), 
    .pixelX(ConectorPixelX), 
    .pixelY(ConectorPixelY), 
    .iPintarCarros(EnablePintarMonitor), 
    .iPintarJugador(wirePintarBirds), 
    .iPosicionX1(ConectorPosicionX1), 
    .iPosicionX2(ConectorPosicionX2),
    .iPosicionX3(ConectorPosicionX3),	 
    .iPosicionY1(ConectorPosicionY1), 
    .iPosicionY2(ConectorPosicionY2),	
    .iPosicionJugador(wireCuadroX), 
    .ColorRGB(colorRGB)
    );
	 
	 
	 
	//Modulos del birds
	
// Instantiate the module
Jugador Cuadro (
    .clk(wireClk1s), 
    .reset(iReset), 
    .der(wireSubir), 
    .izq(wireBajar), 
    .espacioAr(sepuedesubir), 
    .espacioAb(sepuedebajar), 
    .posicionX(wireCuadroX)
    );
	 
// Instantiate the module
MaquinaJugador MaquinaBicho (
    .clk(wireClk1s), 
    .reset(iReset),
	 .iResetPintar(EnableResetPintar),
    .pintarEnable(EnablePintar), 
    .izquierda(iPosicionY1), 
    .derecha(iPosicionY2), 
    .spaceizq(sepuedesubir), 
    .spaceder(sepuedebajar),  
    .incremente(wireSubir), 
    .decremente(wireBajar), 
	 .oEnablePintar(wirePintarBirds)
    );
	 
	 
	 
// Instantiate the module choque
Choque Choque (
    .iPosicionXT(ConectorPosicionX1), 
    .iPosicionYT(ConectorPosicionY1), 
    .iPosicionXC(wireCuadroX), 
    .oStop(EnableChoque)
    );	 	 
	

// Instantiate the module 	Sumador
CuentaPuntos Sumador (
	 .iClk(wireClk1s),
    .iEnableContar(conectorEnableSumador), 
    .iReset(iReset), 
    .Numero(ConectorNumero)
    );
	 
	 
//Instantiate the module Display
Display Display (
    .iClk(wireClk1s), 
    .inputs(ConectorNumero), 
    .outputs(conectorDisplay), 
    .an(conectorInversorAux)
    );



	assign conectorAn = ~conectorInversorAux;
	assign display = ~conectorDisplay;
	//Asiganacion de salidas 
	assign sincH = synH;
   assign sincV = synV;
	assign colorR = (video & colorRGB[2]);
	assign colorG = (video & colorRGB[1]);
	assign colorB = (video & colorRGB[0]);


endmodule
