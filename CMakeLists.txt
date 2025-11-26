cmake_minimum_required(VERSION 3.15)
project(TelemetrySystem VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(telemetry_system
    src/main.cpp
    src/Device/Device.cpp
    src/Logger/Logger.cpp
)

set_target_properties(telemetry_system PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
