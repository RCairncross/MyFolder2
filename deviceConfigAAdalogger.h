// ************************************************************
// * this file includes static variables that define the 
// * current device configuration
// ************************************************************

// name for the device
char deviceName[] = "A Adafruit Sense with Adalogger SD";
// deleted "Generic" from previous line
char deviceShort[] = "KiteA";
// code is single-character letter (capital) used as brief identification of device (e.g. in file names)
char deviceCode[] = "A";

// use compiler macros to turn on various sensors and peripherals
#define USE_SD
// USE_SD: enable to allow writing information to the SD card

// if there is a real-time clock available
#define USE_RTC
char dataFolder[] = "210118"; // this is the string to use for the folder storing data if the RTC is not present

#define SERIAL_OUTPUT_INTERVAL 2000
#define SAMPLING_PERIOD 500
#define SLOW_DATA_INTERVAL 100
#define ENABLE_RANDOM_DELAY
//#define LOOP_DELAY 100

// control start of code by waiting for Serial port to open or for user button press
//#define WAIT_FOR_SERIAL
//#define WAIT_FOR_BUTTON
#define WAIT_FOR_SERIAL_OR_BUTTON

// *************** DATA_1: DEFINE PINS AND DEVICE PARAMETERS ********************************************
// * DEFINE any needed I/O pins or devide parameters and macro definitions as needed      *
// * ***********************************************************************************

// use data simulator to test analytics
//#define ENABLE_SIMULATED_DATA

// ADAFRUIT FEATHER BLUEFRUIT SENSE Pins -------------------------------------------
#define ENABLE_BLUEFRUIT

#define SENSE_BUTTON 7
// LED's
#define SENSE_NEO 8
#define ENABLE_NEOPIXEL
#define SENSE_RED 13
#define SENSE_BLUE 4
// other Digital pins 11, 12, 13
//        NOTE 5, 6, 9, 10, used for CS with Featherwing
// Analog pins A0-A5 available
// battery sensor on A6
#define SENSE_BAT A6
// AREF on A7

#define ENABLE_SENSE_ACCEL
// note: to use the gyro, accel must also be enabled
#define ENABLE_SENSE_GYRO
#define ENABLE_SENSE_MAG
#define ENABLE_SENSE_ALTIM
// uncomment following line to print out barometric pressure and temperature
#define ENABLE_SENSE_BAROMTEMP
// uncomment following line to print out humidity and temperature
#define ENABLE_SENSE_HUMID

// END OF ADAFRUIT FEATHER BLUEFRUIT SENSE info

// ---------------------- 
// - LINE CLIMBER SETUP -
// ---------------------- 
//#define ENABLE_LINE_CLIMBER
// Pins used with line climber
#define SENSE_MOTOR 11
#define SENSE_TOPSWITCH 12
#define SENSE_BOTSWITCH 13

// servo parameters
#define SERVO_MAX 150
#define SERVO_CLIMB 130
#define SERVO_IDLE 85
#define SERVO_DESCENT 40
#define SERVO_MIN 20
#define SERVO_WIGGLE 10
#define SERVO_INCREMENT 5

//#define SET_HOME_TEST
#define SET_FIELD_TEST

// control parameters for flight controller
float altitudeMax = 60.96; // 60.96 m equals 200 feet
float altitudeMin = 30.48; // 30.48 m equals 100 feet
float verticalSpeedGoal = 0.5; // m/s
float servoVelocityGain = 28.; // percentage change in servo per (m/s) velocity deviation from setpoint
float servoUpdateMax = 10.; // max percentage change in servo per time increment to throttle the response time
unsigned long soarDuration = 30000; // milliseconds to spend at zero velocity

// E-INK FEATHERWING
//#define EPD_RESET   -1 // can set to -1 and share with microcontroller Reset!
//#define EPD_BUSY    -1 // can set to -1 to not use a pin (will wait a fixed delay)
//#define EPD_CS     9
//#define EPD_DC     10
//#define SRAM_CS     6
//#define SD_CS     5

// ADALOGGER FEATHERWING 
// SD chip select is pin 10 on adalogger featherwing!
#define SD_CS 10

// to enable recording chunks of raw data uncomment the following line
//#define ENABLE_DATA_CHUNKS
