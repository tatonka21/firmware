#ifndef __I2C_H__
#define __I2C_H__

// Macros:

    // Main bus

    #define I2C_MAIN_BUS_BASEADDR  I2C0
    #define I2C_MASTER_BUS_CLK_SRC I2C0_CLK_SRC
    #define I2C_MAIN_BUS_BAUD_RATE 100000 // 100 kHz works even with a 20 meter long bridge cable.
    #define I2C_MAIN_BUS_MUX       kPORT_MuxAlt7

    #define I2C_MAIN_BUS_SDA_PORT  PORTD
    #define I2C_MAIN_BUS_SDA_CLOCK kCLOCK_PortD
    #define I2C_MAIN_BUS_SDA_PIN   3

    #define I2C_MAIN_BUS_SCL_PORT  PORTD
    #define I2C_MAIN_BUS_SCL_CLOCK kCLOCK_PortD
    #define I2C_MAIN_BUS_SCL_PIN   2

    // EEPROM bus

    #define I2C_EEPROM_BUS_BASEADDR  I2C1
    #define I2C_EEPROM_BUS_CLK_SRC   I2C1_CLK_SRC
    #define I2C_EEPROM_BUS_BAUD_RATE 1000000 // 1 Mhz is the maximum speed of the EEPROM.
    #define I2C_EEPROM_BUS_MUX       kPORT_MuxAlt2

    #define I2C_EEPROM_BUS_SDA_PORT  PORTC
    #define I2C_EEPROM_BUS_SDA_CLOCK kCLOCK_PortC
    #define I2C_EEPROM_BUS_SDA_PIN   11

    #define I2C_EEPROM_BUS_SCL_PORT  PORTC
    #define I2C_EEPROM_BUS_SCL_CLOCK kCLOCK_PortC
    #define I2C_EEPROM_BUS_SCL_PIN   10

#endif
