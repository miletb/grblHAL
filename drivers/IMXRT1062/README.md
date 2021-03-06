## iMXRT1062 Driver

A GrblHAL driver for the NXP iMXRT1062 processor on a [Teensy 4.x board](https://www.pjrc.com/store/teensy40.html).

This driver compiles and uploads from the Arduino IDE and is partially dependent on the Arduino framework. [Teensyduino](https://www.pjrc.com/teensy/td_download.html) is required and must be added to the Arduino IDE.

See the Wiki-page for [compiling grblHAL](https://github.com/terjeio/grblHAL/wiki/Compiling-GrblHAL) for instructions for how to import the project, configure the driver and compile.

Available driver options can be found [here](main/my_machine.h).

---

2020-08-11 : added [plugin support](../../plugins) for networking, SD card and I2C keypad.

---

Initial default pin assignments can be found in [driver.h](main/driver.h).

#### Networking plugin

The networking plugin is for Teensy 4.1 and needs the [teensy41_ethernet lwIP library](https://github.com/ddrown/teensy41_ethernet) forked by ddrown.

Telnet and websocket protocols are currently supported, http is on the long term roadmap.

#### SD card plugin

The SD card plugin needs the [uSDFS library](https://github.com/WMXZ-EU/uSDFS) by WMXZ-EU.

Important: edit the [utility/sd_config.h](https://github.com/WMXZ-EU/uSDFS/blob/master/src/utility/sd_config.h) file and change

`#define USE_MSC 1	// will be used in sd_msc.cpp`

to

`#define USE_MSC 0	// will be used in sd_msc.cpp`

or add the MSC library as well \(not needed\).

---

Download the libraries above as zip files and add to your Arduino installation with _Sketch > Include Library > Add .ZIP Library..._

---

CNC breakout boards:

[GRBL Header for a Teensy 4](https://github.com/phil-barrett/grbl-teensy-4) by Phil Barrett.

---
2020-08-23
