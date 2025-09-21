//
// Created by Dan Gerchcovich on 21/9/2025.
//

#include "BaseScreen.h"

#include <format>

#include "../../core/extensions/LoggingExtensions.hpp"

// base lifecycle methods
void BaseScreen::onAppeared() {
    LoggingExtensions::logInfo(std::format("On Appeared ViewModel -- {}", this));
}

void BaseScreen::onAppearing() {
    LoggingExtensions::logInfo(std::format("On Appearing ViewModel -- {}", this));
}

void BaseScreen::onDisappeared() {
    LoggingExtensions::logInfo(std::format("On Disappeared ViewModel -- {}", this));
}

void BaseScreen::onCleared() {
    LoggingExtensions::logInfo(std::format("On Cleared ViewModel -- {}", this));
}

void BaseScreen::onDestroyed() {
    LoggingExtensions::logInfo(std::format("On Destroyed ViewModel -- {}", this));
}

void BaseScreen::onDisappearing() {
    LoggingExtensions::logInfo(std::format("On Disappearing ViewModel -- {}", this));
}




