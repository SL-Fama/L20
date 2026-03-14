# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/L20_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/L20_autogen.dir/ParseCache.txt"
  "L20_autogen"
  "math/src/dynamic/CMakeFiles/dmath_autogen.dir/AutogenUsed.txt"
  "math/src/dynamic/CMakeFiles/dmath_autogen.dir/ParseCache.txt"
  "math/src/dynamic/dmath_autogen"
  "math/src/static/CMakeFiles/smath_autogen.dir/AutogenUsed.txt"
  "math/src/static/CMakeFiles/smath_autogen.dir/ParseCache.txt"
  "math/src/static/smath_autogen"
  )
endif()
