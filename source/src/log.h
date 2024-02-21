#pragma once

#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

enum class LogLevel {
    INFO,
    WARNING,
    ERROR
};

class Logger {
public:
    // Log a message with a given log level to the console along with a timestamp
    static void log(LogLevel level, const std::string& message) {
        auto now = std::chrono::system_clock::now();
        std::time_t timestamp = std::chrono::system_clock::to_time_t(now);
        std::cout << "[" << std::put_time(std::localtime(&timestamp), "%Y-%m-%d %H:%M:%S") << "] ";

        switch (level) {
            case LogLevel::INFO:
                std::cout << "\033[1;32m[INFO] " << message << "\033[0m" << std::endl;
                break;
            case LogLevel::WARNING:
                std::cout << "\033[1;33m[WARNING] " << message << "\033[0m" << std::endl;
                break;
            case LogLevel::ERROR:
                std::cout << "\033[1;31m[ERROR] " << message << "\033[0m" << std::endl;
                break;
        }
    }
};