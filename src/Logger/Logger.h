#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <chrono>

class Logger {
private:
    std::ofstream logFile;
    std::string getCurrentTime();

public:
    Logger();
    ~Logger();
    void info(const std::string& message);
};
