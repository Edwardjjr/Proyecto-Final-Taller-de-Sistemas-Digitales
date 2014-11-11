setMode -bs
setMode -bs
setMode -bs
setCable -port auto
Identify -inferir 
identifyMPM 
assignFile -p 1 -file "D:/Users/iReal/Desktop/Proyecto-Final-Taller-de-Sistemas-Digitales-master/Proyecto-Final-Taller-de-Sistemas-Digitales-master/ProyectoFinal-Juego/top.bit"
Program -p 1 
setMode -bs
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
