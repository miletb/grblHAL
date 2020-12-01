/*
  generic_map.h - driver code for ESP32

  Part of GrblHAL

  Copyright (c) 2020 Terje Io

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

// timer definitions
#define STEP_TIMER_GROUP TIMER_GROUP_0
#define STEP_TIMER_INDEX TIMER_0

// Define step pulse output pins.
#define X_STEP_PIN      GPIO_NUM_18
#define Y_STEP_PIN      GPIO_NUM_22
#define Z_STEP_PIN      GPIO_NUM_27
#define STEP_MASK       (1ULL << X_STEP_PIN|1ULL << Y_STEP_PIN|1ULL << Z_STEP_PIN) // All step bits

// Define step direction output pins. NOTE: All direction pins must be on the same port.
#define X_DIRECTION_PIN     GPIO_NUM_19
#define Y_DIRECTION_PIN     GPIO_NUM_23
#define Z_DIRECTION_PIN     GPIO_NUM_26
#define DIRECTION_MASK      (1ULL << X_DIRECTION_PIN|1ULL << Y_DIRECTION_PIN|1ULL << Z_DIRECTION_PIN) // All direction bits

// Define stepper driver enable/disable output pin(s).
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13
#define STEPPERS_DISABLE_MASK   (1ULL << STEPPERS_DISABLE_PIN)

// Define homing/hard limit switch input pins and limit interrupt vectors.
#define X_LIMIT_PIN     GPIO_NUM_32
#define Y_LIMIT_PIN     GPIO_NUM_33
//#define Z_LIMIT_PIN     GPIO_NUM_15
//#define LIMIT_MASK      (1ULL << X_LIMIT_PIN|1ULL << Y_LIMIT_PIN|1ULL << Z_LIMIT_PIN) // All limit bits
#define LIMIT_MASK      (1ULL << X_LIMIT_PIN|1ULL << Y_LIMIT_PIN)
#define Z_LIMIT_PIN     0xFF

// Define spindle enable and spindle direction output pins.
#define SPINDLE_ENABLE_PIN      GPIO_NUM_15
//#define SPINDLE_DIRECTION_PIN   GPIO_NUM_5
//#define SPINDLE_MASK            (1ULL << SPINDLE_ENABLE_PIN|1ULL << SPINDLE_DIRECTION_PIN)
#define SPINDLE_MASK            (1ULL << SPINDLE_ENABLE_PIN)
#define SPINDLEPWMPIN           GPIO_NUM_21

// Define flood and mist coolant enable output pins.

#define COOLANT_FLOOD_PIN   GPIO_NUM_2
//#define COOLANT_MIST_PIN    GPIO_NUM_5
//#define COOLANT_MASK        (1UL << COOLANT_FLOOD_PIN|1ULL << COOLANT_MIST_PIN)
#define COOLANT_MASK        (1ULL << COOLANT_FLOOD_PIN)

// Define user-control CONTROLs (cycle start, reset, feed hold) input pins.
//#define RESET_PIN           GPIO_NUM_34
//#define FEED_HOLD_PIN       GPIO_NUM_36
//#define CYCLE_START_PIN     GPIO_NUM_39
//#define SAFETY_DOOR_PIN     GPIO_NUM_35
//#define CONTROL_MASK        (1UL << RESET_PIN|1UL << FEED_HOLD_PIN|1UL << CYCLE_START_PIN|1UL << SAFETY_DOOR_PIN)

// Define probe switch input pin.
#if PROBE_ENABLE
#define PROBE_PIN       GPIO_NUM_32
#else
#define PROBE_PIN       0xFF
#endif
