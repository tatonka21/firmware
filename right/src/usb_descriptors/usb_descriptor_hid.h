#ifndef __USB_DESCRIPTOR_HID_H__
#define __USB_DESCRIPTOR_HID_H__

// Includes:

    #include "usb_interface_keyboard.h"
    #include "usb_interface_mouse.h"
    #include "usb_interface_generic_hid.h"

// Functions:

    extern usb_status_t USB_DeviceGetHidDescriptor(
        usb_device_handle handle, usb_device_get_hid_descriptor_struct_t *hidDescriptor);

    extern usb_status_t USB_DeviceGetHidReportDescriptor(
        usb_device_handle handle, usb_device_get_hid_report_descriptor_struct_t *hidReportDescriptor);

    extern usb_status_t USB_DeviceGetHidPhysicalDescriptor(
        usb_device_handle handle, usb_device_get_hid_physical_descriptor_struct_t *hidPhysicalDescriptor);

#endif
