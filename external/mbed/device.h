
#ifndef MBED_DEVICE_H
#define MBED_DEVICE_H

#if defined(TARGET_LPC1768) || defined(TARGET_LPC2368)

#define DEVICE_PORTIN 1
#define DEVICE_PORTOUT 1
#define DEVICE_PORTINOUT 1

#define DEVICE_INTERRUPTIN 1

#define DEVICE_ANALOGIN 1
#define DEVICE_ANALOGOUT 1

#define DEVICE_SERIAL 1

#define DEVICE_I2C 1
#define DEVICE_I2CSLAVE 1

#define DEVICE_SPI 1
#define DEVICE_SPISLAVE 1

#define DEVICE_CAN 1

#define DEVICE_RTC 1

#define DEVICE_ETHERNET 1

#define DEVICE_PWMOUT 1

#elif defined(TARGET_LPC11U24)

#define DEVICE_PORTIN 1
#define DEVICE_PORTOUT 1
#define DEVICE_PORTINOUT 1

#define DEVICE_INTERRUPTIN 1

#define DEVICE_ANALOGIN 1
#define DEVICE_ANALOGOUT 0

#define DEVICE_SERIAL 1

#define DEVICE_I2C 1
#define DEVICE_I2CSLAVE 1

#define DEVICE_SPI 1
#define DEVICE_SPISLAVE 1

#define DEVICE_CAN 0

#define DEVICE_RTC 0

#define DEVICE_ETHERNET 0

#define DEVICE_PWMOUT 1

#endif

#endif

