## Driver capabilities at a glance:

| Processor ->                         | iMXRT1062       | STM32F4xx       |STM32F1xx<sup>11</sup>| SAM3X8E         | SAMD21          | ESP32           |MSP432           |LPC1768/1769       | TMC123        | TMC129x       | MSP432E401Y   | PSoC&nbsp;5 |MSP430F5529   |
|--------------------------------------|-----------------|-----------------|----------------------|-----------------|-----------------|-----------------|-----------------|-------------------|---------------|---------------|---------------|-------------|--------------|
| Board                                |Teensy 4.x       |Blackpill / Nucleo-F411RE / Nucleo-F446RE| Bluepill   | Due             | MKRZERO         |                 | LaunchPad       | Re-Arm / BTT SKR 1.4| LaunchPad     | LaunchPad     | LaunchPad     | CY8CKIT-059 | LaunchPad    |
| MCU speed \(MHz\)                    | 600             | 84/100/180      | 72                   | 84              | 48              | 2x240           | 48              | 100/120           | 80            | 120           | 120           | 80          | 25 \(16 bit\)|
| Floating point unit                  | yes             | yes             | no                   | no              | no              | yes             | yes             | no                | yes           | yes           | yes           | no          | no           |
| Non-volatile storage                 |Flash<sup>1</sup>|Flash<sup>1</sup>| Flash<sup>1</sup>    |Flash<sup>1</sup>|Flash<sup>1</sup>|Flash<sup>1</sup>|Flash<sup>1</sup>| Flash<sup>1</sup> | EEPROM        | EEPROM        | EEPROM        | EEPROM      |no<sup>1</sup>|
| Number of axes                       | up to 5         | up to 6         | up to 6              | up to 6         | 3               | 3               | 3               | up to 5           | 3             | up to 6       | up to 6       |3<sup>2</sup>| 3            |
| Variable spindle                     | yes             | yes             | yes                  | yes             | yes             | yes             | yes             | yes               | yes           | yes           | yes           | yes         | yes          |
| Ramped spindle                       | no              | no              | no                   | no              | no              | yes             | no              | no                | yes           | yes           | yes           | no          | no           |
| Inverted spindle PWM                 | no              | no              | yes                  | no              | no              | yes             | yes             | no                | yes           | yes           | yes           | no          | yes          |
| RC Servo/ESC for spindle<sup>13</sup>|                 | yes             | yes                  | yes             | yes             | yes             | yes             | yes               | yes           | yes           | yes           | no          | yes          |
| ModBus spindle<sup>14</sup>          | yes             | no              | no                   | no              | no              | no              | yes             | no                | no            | no            | no            | no          | no           |
| Spindle at speed                     | yes             | no              | no                   | no              | no              | no              | yes<sup>3</sup> | no                | no            | no            | no            | no          | no           |
| Spindle sync                         | no              | no              | no                   | no              | no              | no              | no              | no                | no            | no            | no            | no          | no           |
| Closed loop spindle RPM              | no              | no              | no                   | no              | no              | no              | no              | no                | no            | no            | no            | no          | no           |
| Native USB streaming                 | yes             | yes             | yes                  | yes             | yes             | no              | no              | yes?              | no            | no            | no            | no          | no           |
| Bluetooth streaming                  | no              | no              | no                   | no              | no              | yes             | no              | no                | no            | no            | no            | no          | no           |
| Telnet streaming \(raw\)             | ethernet        | no              | no                   | no              | no              | wifi            | no              | no                | no            | ethernet      | ethernet      | no          | no           |
| Websocket streaming                  | ethernet        | no              | no                   | no              | no              | wifi            | no              | no                | no            | ethernet      | ethernet      | no          | no           |
| SD Card streaming                    | yes             | TBC             | yes                  | no              | yes             | yes             | no              | yes               | yes           | no            | no            | no          | no           |
| I2C Keypad                           | yes             | no              | yes                  | no              | yes             | yes             | yes             | no                | yes           | no            | no            | yes         | no           |
| I2C IO Expander                      | no              | no              | no                   | no              | yes             | yes             | no              | no                | no            | no            | no            | no          | no           |
| MPG stream input                     | TBC             | no              | no                   | no              | no              | no              | yes             | no                | yes           | yes           | yes           | no          | no           |
| Manual tool change<sup>5</sup>       | yes             | yes             | yes                  | yes             | yes             | yes             | yes             | yes               | yes           | yes           | yes           | yes         | no           |
| Automatic tool change<sup>6</sup>    | no              | no              | no                   | no              | no              | no              | planned         | no                | no            | no            | no            | no          | no           |
| Laser PPI mode<sup>7</sup>           | yes             | yes             | no                   | no              | no              | no              | no              | no                | yes           | no            | no            | no          | no           |
| Trinamic support<sup>8</sup>         | TBC<sup>9</sup> | TBC<sup>9</sup> | TBC<sup>9</sup>      | TBC<sup>9</sup> | TBC<sup>9</sup> | TBC<sup>9</sup> | TBC<sup>9</sup> | no                |TBC<sup>9</sup>|TBC<sup>9</sup>|TBC<sup>9</sup>| no          | no           |
| Runs as FreeRTOS task                | no              | no              | no                   | no              | no              | yes             | no              | no                | no            | no            | option        | no          | no           |
| CNC BoosterPack support              | yes<sup>10</sup>| no              | yes<sup>10</sup>     | no              | yes<sup>10</sup>| yes<sup>10</sup>| 1               | no                | 1             | 2             | 2             | no          | 1            |
| WebUI support                        | no              | no              | no                   | no              | no              | yes<sup>12</sup>| no              | no                | no            | no            | no            | no          | no           |
| Compiler/IDE                         | Arduino         | STMCubeIDE      | STMCubeIDE           | Arduino         | Arduino         | ESP IDF         | CCS             | MCUExpresso       | CCS           | CCS           | CCS           | PSOC Creator| CCS          |

<br><sup>1</sup> Plugin for I2C EEPROM or FRAM available. FRAM is faster and can sustain more write cycles than EEPROM.
<br><sup>2</sup> Should be fairly easy to extend.
<br><sup>3</sup> In combination with ramped spindle, signals end of ramp - not programmed speed obtained.
<br><sup>4</sup> To be completed \(TBC\), work in good progress.
<br><sup>5</sup> Protocol extension, requires compatible GCode sender.
<br><sup>6</sup> Grbl core has functionality and HAL driver entry points are provided, needs verification!
<br><sup>7</sup> Driver specific M codes added for control. PPI = Pulses Per Inch.
<br><sup>8</sup> Initial version ready for TMC2130 drivers, new [CNC BoosterPack](https://github.com/terjeio/CNC_Boosterpack) design for Texas Instrument LaunchPads ready and initial testing ok.
<br><sup>9</sup> Implementation provided for TMC2130, with initial focus on [I2C](https://github.com/terjeio/Trinamic_TMC2130_I2C_SPI_Bridge) interfaces. Work in good progress - code published.
<br><sup>10</sup> Via "motherboard" that accommodates [CNC BoosterPack](https://github.com/terjeio/CNC_Boosterpack) and processor board. Prototypes made, includes 8-bit I2C GPIO expander \(not available/needed for STM32F1xx or IMXRT1062\). "motherboards" has option for isolated level-shifted spindle PWM or DC output.  BoosterPack has an onboard EEPROM and an I2C level shifter.
<br><sup>11</sup> Requires 128KB of flash \(STM32F103CB\), many STM32F1038B based Blue Pill boards has that too?
<br><sup>12</sup> Luc's [ESP3D-WEBUI](https://github.com/luc-github/ESP3D-webui), backend partially implemented. Work in progress. 
<br><sup>13</sup> Set `$33=50` (PWM frequency), `$34=5`, `$35=5` and `$36=10` to generate a "standard" PWM signal: 20ms repetition rate, 1 - 2ms pulse length range. 
<br><sup>14</sup> Currently only for Huanyang VFDs. Defaults to 19200 baud, implicit spindle at speed. Not supported for all alternative board map files. 

Please note that some of the capabilities should be fairly easy to port from one driver to another, but be aware some are dependent on MCU peripheral availability and thus not possible, or hard, to port.

The fastest and most deterministic MCUs seems to be iMRXT1062, MSP432E401Y and TMC129x, ESP32 is not bad but it is a bit unstable - maybe due to outstanding [bugs](https://github.com/espressif/esp-idf/issues) in the [ESP-IDF](https://github.com/espressif/esp-idf) and the system architecture - program code is stored off chip in external serial flash.

---
2020-11-21
