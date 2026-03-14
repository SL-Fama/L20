#Get all .cpp files in src folder
file(GLOB D_MATH_SOURCES "*.cpp")

#Flag to compile math library as shared
add_library(dmath SHARED ${D_MATH_SOURCES})

set_target_properties(dmath PROPERTIES PREFIX "dmath")

#Connect .hpp files
target_include_directories(dmath
    PUBLIC
    ${CMAKE_SOURCE_DIR}/math/include)