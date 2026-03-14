#Get all .cpp files in src folder
file(GLOB S_MATH_SOURCES "*.cpp")

#Flag to compile math library as static
add_library(smath STATIC ${S_MATH_SOURCES})
add_library(SMath::EasyMath ALIAS smath)

set_target_properties(smath PROPERTIES SUFFIX ".easymath")

#Connect .hpp files
target_include_directories(smath
    PUBLIC
    ${CMAKE_SOURCE_DIR}/math/include)