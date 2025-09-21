#pragma once
#include <string>

struct LoggingExtensions {
    void logRequests(std::string message);
    void logInfo(std::string message);
    void logError(std::exception& exc);
    void logTrace(std::string message);
};
