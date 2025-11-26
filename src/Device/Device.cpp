#include "Device.h"
#include <iostream>

Device::Device(const std::string& deviceId, const std::string& deviceName) 
    : id(deviceId), name(deviceName), status(false) {
}

void Device::turnOn() {
    status = true;
    std::cout << "Device " << name << " is ON" << std::endl;
}

void Device::turnOff() {
    status = false;
    std::cout << "Device " << name << " is OFF" << std::endl;
}
