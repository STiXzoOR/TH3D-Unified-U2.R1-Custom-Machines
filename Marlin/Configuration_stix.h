#ifndef CONFIGURATION_STIX_H
  #define CONFIGURATION_STIX_H
  #define CONFIGURATION_STIX_H_VERSION 020000

  // STIX Machines
  #define STIX_A8

  #if ENABLED(STIX_A8)
    #define PRINTER_ENABLED_CHECK
    #define USER_PRINTER_NAME "STiX's A8"
    #define BTTSKRE3MINIV2_0

    #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V2_0
    #define SERIAL_PORT 2
    #define SERIAL_PORT_2 -1
    #define BAUDRATE 115200

    #define EXTRUDERS 1
    #define NO_COLD_PREVENT
    #define PIDBED_ENABLE

    #define DUAL_Z_MOTORS
    #define CUSTOM_DRIVERS
    #define SENSORLESS_HOMING
    #define X_DRIVER_TYPE  TMC2209
    #define Y_DRIVER_TYPE  TMC2209
    #define Z_DRIVER_TYPE  TMC2209
    #define E0_DRIVER_TYPE TMC2209
    
    // #define EZOUTV2_ENABLE
    // #define MOUNTED_FILAMENT_SENSOR
    
    #undef EZABL_POINTS
    #undef EZABL_PROBE_EDGE
    #define BLTOUCH
    #define CUSTOM_PROBE
    #define NOZZLE_TO_PROBE_OFFSET { 30, 0, 0 }
    #define EZABL_POINTS 5
    #define EZABL_PROBE_EDGE 20
    #define HEATERS_ON_DURING_PROBING
    #define FINE_BABYSTEPPING

    #define PRINTER_VOLTAGE_12
    #define KNOWN_HOTEND_THERMISTOR
    #define KNOWN_HOTEND_THERMISTOR_VALUE 13
    #define KNOWN_BED_THERMISTOR
    #define KNOWN_BED_THERMISTOR_VALUE 5

    #define USE_XMIN_PLUG
    #define USE_YMIN_PLUG
    #define USE_ZMIN_PLUG
    
    #define ENDSTOPPULLUPS
    
    #define X_MIN_ENDSTOP_INVERTING false
    #define Y_MIN_ENDSTOP_INVERTING false
    #define Z_MIN_ENDSTOP_INVERTING true
    #define X_MAX_ENDSTOP_INVERTING false
    #define Y_MAX_ENDSTOP_INVERTING false
    #define Z_MAX_ENDSTOP_INVERTING false
    #define Z_MIN_PROBE_ENDSTOP_INVERTING true

    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 98 }
    #define DEFAULT_MAX_FEEDRATE          { 500, 500, 8, 50 }
    #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }
    
    #define DEFAULT_ACCELERATION          500   
    #define DEFAULT_RETRACT_ACCELERATION  1000  
    #define DEFAULT_TRAVEL_ACCELERATION   500   
    
    #define DEFAULT_XJERK                 10.0
    #define DEFAULT_YJERK                 10.0
    #define DEFAULT_ZJERK                  0.4
    #define DEFAULT_EJERK                  5.0
    
    #define INVERT_X_DIR true
    #define INVERT_Y_DIR true
    #define INVERT_Z_DIR false
    #define INVERT_E0_DIR true

    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220

    #define X_MIN_POS -16
    #define Y_MIN_POS -4
    #define Z_MAX_POS 240
    
    #define ENCODER_PULSES_PER_STEP 4
    #define ENCODER_STEPS_PER_MENU_ITEM 1

    #define REVERSE_ENCODER_DIRECTION
    #define CR10_STOCKDISPLAY
  #endif

#endif // CONFIGURATION_STIX_H
