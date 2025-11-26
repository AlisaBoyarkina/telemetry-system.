#include "Logger.h"
#include <iostream>

std::string Logger::getCurrentTime() {
    auto now = std::chrono::system_clock::now();
    auto time_t = std::chrono::system_clock::to_time_t(now);
    
    std::stringstream ss;
    ss << std::put_time(std::localtime(&time_t), "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

Logger::Logger() {
    logFile.open("logs.txt", std::ios::app);
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::info(const std::string& message) {
    std::string logEntry = "[" + getCurrentTime() + "][INFO] " + message + "\n";
    
    std::cout << logEntry;
    
    if (logFile.is_open()) {
        logFile << logEntry;
        logFile.flush();
    }
}
