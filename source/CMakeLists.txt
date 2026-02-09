# Source Layer: Business Logic Library
# Automatically includes all .cpp files from subdirectories

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

if(SOURCES)
  add_library(code STATIC ${SOURCES})

  list(LENGTH SOURCES SOURCE_COUNT)
  message(STATUS "Library 'code' created with ${SOURCE_COUNT} source file(s)")
else()
  message(STATUS "No source files found for library 'code'")
endif()
