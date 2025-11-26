#pragma once
#include <string>

class Device {
private:
    std::string id;
    std::string name;
    bool status;

public:
    Device(const std::string& deviceId, const std::string& deviceName);
    
    void turnOn();
    void turnOff();
    
    std::string getId() const { return id; }
    std::string getName() const { return name; }
    bool getStatus() const { return status; }
};
