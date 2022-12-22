# KnowYourBoardSPI-I2CPins
a code that tells you which pins are related SPI and I2C through UART/Serial Interface

# Installation
Copy this code in Main.ino to you Arduino IDE, but make sure that you have selected your board at **Tool>Board**

# Explaination 
The output will the GPIO pins which may not be the same as the silkscreen descrption.

e.g: D8 is not as pin 8 or GPIO8, so you have to look into your board pinout diagram.

if it happens you want to relate the pins that you get from this code to your diagram

(if it ESP32)
FSPID = MOSI = data out
FSPIQ = MISO = data in
FSPICLK = CLOCK
CS = Could be any chosen pin by the programmer

# Credit
ShiroKlein
