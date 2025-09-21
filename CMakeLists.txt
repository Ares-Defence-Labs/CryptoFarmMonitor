cmake_minimum_required(VERSION 3.31)
project(CryptoFarmMonitor)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

include_directories(${VCPKG_ROOT}/installed/${VCPKG_TARGET_TRIPLET}/include)
link_directories(${VCPKG_ROOT}/installed/${VCPKG_TARGET_TRIPLET}/lib)

add_executable(CryptoFarmMonitor main.cpp
        AppStartup.cpp
        AppStartup.hpp
        presentation/screens/security/LoginScreen.cpp
        presentation/screens/security/LoginScreen.hpp
        presentation/screens/manager/AppDashboard.cpp
        presentation/screens/manager/AppDashboard.hpp
        presentation/screens/manager/nodes/AppNodesViewer.cpp
        presentation/screens/manager/nodes/AppNodesViewer.hpp
        core/viewModels/security/LoginScreenViewModel.cpp
        core/viewModels/security/LoginScreenViewModel.hpp
        core/viewModels/manager/nodes/AppNodesViewerViewModel.cpp
        core/viewModels/manager/nodes/AppNodesViewerViewModel.h
        core/viewModels/manager/AppDashboardViewModel.cpp
        core/viewModels/manager/AppDashboardViewModel.hpp
        core/services/logging/AppInsightsLogger.cpp
        core/services/logging/AppInsightsLogger.hpp
        core/extensions/LoggingExtensions.cpp
        core/extensions/LoggingExtensions.hpp
        core/extensions/StringExtensions.cpp
        core/extensions/StringExtensions.hpp
        presentation/viewComponents/buttons/PrimaryColorButton.cpp
        presentation/viewComponents/buttons/PrimaryColorButton.h
        presentation/viewComponents/buttons/SecondaryColorButton.cpp
        presentation/viewComponents/buttons/SecondaryColorButton.h
        presentation/viewComponents/buttons/IconButton.cpp
        presentation/viewComponents/buttons/IconButton.h
        presentation/viewComponents/textFields/PrimaryTextField.cpp
        presentation/viewComponents/textFields/PrimaryTextField.h
        presentation/viewComponents/textFields/SecondaryTextField.cpp
        presentation/viewComponents/textFields/SecondaryTextField.h
        presentation/viewComponents/buttons/BaseColorButton.h
        presentation/screens/BaseScreen.cpp
        presentation/screens/BaseScreen.h
        core/enums/Environment.h
        core/services/retrofit/CoinmarketCapClient.cpp
        core/services/retrofit/CoinmarketCapClient.h
        core/services/crypto/Bech32.cpp
        core/services/crypto/Bitcoin.cpp
        core/services/crypto/Bitcoin.h)

#include fruit for iOC
find_path(FRUIT_INCLUDE_DIR NAMES fruit/fruit.h REQUIRED)
find_library(FRUIT_LIBRARY NAMES fruit REQUIRED)

target_include_directories(CryptoFarmMonitor PRIVATE ${FRUIT_INCLUDE_DIR})
target_link_libraries(CryptoFarmMonitor
        Qt::Core
        Qt::Gui
        Qt::Widgets
        ${FRUIT_LIBRARY}
)

