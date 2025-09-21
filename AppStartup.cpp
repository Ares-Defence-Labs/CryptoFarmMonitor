#include "AppStartup.hpp"
#include <stdexcept>

namespace {
    bool isInitialized = false;
    void ensureAppNotInitialized() {
        if (isInitialized) {
            throw std::runtime_error("Application has already been initialized");
        }

        isInitialized = true;
    }

    void initializeHttpServices() {

    }
    void initializeViewModels() {

    }
     void initializeLoggingServices() {

    }
    void initializeStorageServices() {

    }
}

// public
void AppStartup::initializeAppStartup() {
    ensureAppNotInitialized(); // will throw an error if called again
    initializeHttpServices();
    initializeViewModels();
    initializeLoggingServices();
    initializeStorageServices();
}



