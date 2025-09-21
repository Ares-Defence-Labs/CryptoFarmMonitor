#pragma once
#include <string>

struct LoggingExtensions {
  static void logRequests(std::string message);
  static void logInfo(std::string message);
  static void logError(std::exception& exc);
  static void logTrace(std::string message);
};
