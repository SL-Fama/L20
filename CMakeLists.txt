cmake_minimum_required(VERSION 3.19)
project(L20 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(L20
    WIN32 MACOSX_BUNDLE
    main.cpp
    calc.cpp
    calc.h
    calc.ui
)

#Add subdirectory for math library
add_subdirectory(math/src/dynamic)
add_subdirectory(math/src/static)

target_link_libraries(L20
    PRIVATE
        Qt::Core
        Qt::Widgets
        SMath::EasyMath
        dmath
)

install(TARGETS L20
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET L20
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
