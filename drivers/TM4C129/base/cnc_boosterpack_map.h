/*

  cnc_boosterpack_map.h - pin mapping configuration file for CNC BoosterPack

  - on Texas Instruments MSP432P401R LaunchPad

  Part of GrblHAL

  Copyright (c) 2017-2020 Terje Io

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.

*/

#define BOARD_NAME "CNC MBL 6040";

#ifdef CNC_BOOSTERPACK
#undef CNC_BOOSTERPACK
#endif

#ifdef CNC_BOOSTERPACK2
#undef CNC_BOOSTERPACK2
#endif

#define CNC_BOOSTERPACK         1
#define CNC_BOOSTERPACK_SHORTS  0 // do not change!

#define CNC_BOOSTERPACK2 0 // do not change!

// Define step pulse output pins.
#define STEP_OUTMODE    GPIO_SHIFT0
#define STEP_PORT_ID    E
#define STEP_PORT       GPIOBase(STEP_PORT_ID)
#define X_STEP_BIT      0
#define Y_STEP_BIT      1
#define Z_STEP_BIT      2
#define A_STEP_BIT      3
#define X_STEP_PIN      (1 << X_STEP_BIT)
#define Y_STEP_PIN      (1 << Y_STEP_BIT)
#define Z_STEP_PIN      (1 << Z_STEP_BIT)
#define A_STEP_PIN      (1 << A_STEP_BIT)
#define HWSTEP_MASK     (X_STEP_PIN|Y_STEP_PIN|Z_STEP_PIN|A_STEP_PIN) // All step bits
#if STEP_OUTMODE == GPIO_BITBAND
#define STEP_OUT_X      GPIOPort(STEP_PORT_ID)
#define STEP_OUT_Y      GPIOPort(STEP_PORT_ID)
#define STEP_OUT_Z      GPIOPort(STEP_PORT_ID)
#endif

// Define step direction output pins.
#define DIRECTION_OUTMODE   GPIO_SHIFT0
#define DIRECTION_PORT_ID   K
#define DIRECTION_PORT      GPIOBase(DIRECTION_PORT_ID)
#define DIRECTION_OUT_X     GPIOPort(DIRECTION_PORT_ID)
#define DIRECTION_OUT_Y     GPIOPort(DIRECTION_PORT_ID)
#define DIRECTION_OUT_Z     GPIOPort(DIRECTION_PORT_ID)
#define X_DIRECTION_BIT     0
#define Y_DIRECTION_BIT     1
#define Z_DIRECTION_BIT     2
#define A_DIRECTION_BIT     3
#define X_DIRECTION_PIN     (1 << X_DIRECTION_BIT)
#define Y_DIRECTION_PIN     (1 << Y_DIRECTION_BIT)
#define Z_DIRECTION_PIN     (1 << Z_DIRECTION_BIT)
#define A_DIRECTION_PIN     (1 << A_DIRECTION_BIT)
#define HWDIRECTION_MASK    (X_DIRECTION_PIN|Y_DIRECTION_PIN|Z_DIRECTION_PIN|A_DIRECTION_PIN) // All direction bits

// Define stepper driver enable/disable output pin(s).
#define STEPPERS_DISABLE_XY_PORT    GPIO_PORTC_BASE
#define STEPPERS_DISABLE_XY_PIN     GPIO_PIN_7
#define STEPPERS_DISABLE_Z_PORT     GPIO_PORTC_BASE
#define STEPPERS_DISABLE_Z_PIN      GPIO_PIN_3

// Define homing/hard limit switch input pins and limit interrupt vectors.
#define LIMIT_PORT_X    GPIO_PORTA_BASE
#define LIMIT_PORT_YZ   GPIO_PORTA_BASE
#define X_LIMIT_PIN     GPIO_PIN_2
#define Y_LIMIT_PIN     GPIO_PIN_3
#define Z_LIMIT_PIN     GPIO_PIN_3
#define HWLIMIT_MASK_YZ (Y_LIMIT_PIN|Z_LIMIT_PIN) // All limit bits

// Define spindle enable and spindle direction output pins.
#define SPINDLE_ENABLE_PORT     GPIO_PORTH_BASE
#define SPINDLE_ENABLE_PIN      GPIO_PIN_1

#define SPINDLE_DIRECTION_PORT  GPIO_PORTC_BASE
#define SPINDLE_DIRECTION_PIN   GPIO_PIN_4

// Define flood and mist coolant enable output pins.
#define COOLANT_FLOOD_PORT  GPIO_PORTN_BASE
#define COOLANT_FLOOD_PIN   GPIO_PIN_0

#define COOLANT_MIST_PORT   GPIO_PORTN_BASE
#define COOLANT_MIST_PIN    GPIO_PIN_1

// Define user-control CONTROLs (cycle start, reset, feed hold) input pins.
#define CONTROL_PORT_FH_CS GPIO_PORTL_BASE
#define CONTROL_PORT_RST   GPIO_PORTA_BASE
#define CONTROL_PORT_SD    GPIO_PORTA_BASE
#define RESET_PIN          GPIO_PIN_4
#define FEED_HOLD_PIN      GPIO_PIN_4
#define CYCLE_START_PIN    GPIO_PIN_5
#define SAFETY_DOOR_PIN    GPIO_PIN_5
#define HWCONTROL_MASK     (RESET_PIN|FEED_HOLD_PIN|CYCLE_START_PIN|SAFETY_DOOR_PIN)

// Define probe switch input pin.
#define PROBE_PORT      GPIO_PORTC_BASE
#define PROBE_PIN       GPIO_PIN_7

// Start of PWM & Stepper Enabled Spindle
#define SPINDLEPPORT    GPIO_PORTA_BASE
#define SPINDLEPPIN     GPIO_PIN_7
#define SPINDLEPWM_MAP  GPIO_PA7_T3CCP1

/*
 * CNC Boosterpack GPIO assignments
 */
//// Normally used as MPG mode input
#define GPIO2_PORT           GPIO_PORTN_BASE
#define GPIO2_PIN            GPIO_PIN_3

//
//// Define MPG mode input (for selecting secondary UART input)
//
#define MODE_PORT           GPIO2_PORT
#define MODE_GPIO           GPIO2_GPIO
#define MODE_INT            GPIO2_INT
#define MODE_SWITCH_PIN     GPIO2_PIN

#if KEYPAD_ENABLE
#define KEYINTR_PIN   GPIO_PIN_6
#define KEYINTR_PORT  GPIO_PORTC_BASE
#endif

/**/

