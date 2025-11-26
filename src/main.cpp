#include <iostream>
#include "Device/Device.h"
#include "Logger/Logger.h"

int main() {
    std::cout << "Telemetry System Starting..." << std::endl;
    
    Device tv("TV-001", "Living Room TV");
    tv.turnOn();
    
    Logger logger;
    logger.info("Application started successfully");
    
    std::cout << "Telemetry System Stopped." << std::endl;
    return 0;
}
