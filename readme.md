Examples and tests for GUI library MakiseGUI. 

https://github.com/SL-RU/MakiseGUI

MakiseGUI - graphical library for embed applications. It's fully written on C and can be ported anywhere. This test developed for stm32 mcu and display based on ili9341.

Video:

https://www.youtube.com/watch?v=PjL4AB-iLRY

# Platform
*  MCU: STM32F437
*  DISPLAY: ILI9341 based 2.2inch 320x240
*  CONTROL: throw uart

You can see pinout in cubeMX project

# Build

```
git clone https://github.com/SL-RU/MakiseSDLTest
cd MakiseSDLTest/
git submodule init
git submodule update
mkdir build; cd build
cmake ..
make
#flash to mcu
```

# Info

Tests located in MakiseTests. For each test - own source file. Almost everything is commented.

# Controls

Keyboard over uart:
* WASD - arrows
* SPACE - OK button
* Tab - switch tabs
* ESC - exit test
* Minus/Equals - focus next/back
* BACKSPACE - print relationships tree
