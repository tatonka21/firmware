#ifndef __USB_INTERFACE_KEYBOARD_H__
#define __USB_INTERFACE_KEYBOARD_H__

// Includes:

    #include "usb_api.h"
    #include "usb_descriptor_keyboard_report.h"

// Macros:

    #define USB_KEYBOARD_INTERFACE_INDEX 1

    #define USB_KEYBOARD_ENDPOINT_INDEX 3
    #define USB_KEYBOARD_ENDPOINT_COUNT 1

    #define USB_KEYBOARD_INTERRUPT_IN_PACKET_SIZE 8
    #define USB_KEYBOARD_INTERRUPT_IN_INTERVAL 4

    #define USB_KEYBOARD_REPORT_LENGTH 8

// Typedefs:

    typedef struct {
        uint8_t modifiers;
        uint8_t reserved; // Always must be 0
        uint8_t scancodes[USB_KEYBOARD_MAX_KEYS];
    } __attribute__ ((packed)) usb_keyboard_report_t;

// Variables:

    extern usb_device_class_struct_t UsbKeyboardClass;

// Functions:

    extern usb_status_t UsbKeyboardCallback(class_handle_t handle, uint32_t event, void *param);
    extern usb_status_t UsbKeyboardSetConfiguration(class_handle_t handle, uint8_t configuration);
    extern usb_status_t UsbKeyboardSetInterface(class_handle_t handle, uint8_t interface, uint8_t alternateSetting);

#endif
