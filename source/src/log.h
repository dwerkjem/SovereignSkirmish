#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <chrono>
#include <thread>

enum class LogLevel {
    INFO,
    WARNING,
    ERROR
};

class Logger {
public:
    static void log(LogLevel level, const std::string& message) {
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

#endif // LOG_H
