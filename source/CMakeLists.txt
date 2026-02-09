# Source Layer: Business Logic Library
# Automatically includes all .cpp files from subdirectories

file(GLOB_RECURSE PLAYBOOK_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

if(PLAYBOOK_SOURCES)
    add_library(playbook_lib STATIC ${PLAYBOOK_SOURCES})
    target_include_directories(playbook_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)
    
    list(LENGTH PLAYBOOK_SOURCES SOURCE_COUNT)
    message(STATUS "Library 'playbook_lib' created with ${SOURCE_COUNT} source file(s)")
else()
    message(WARNING "No source files found in source/")
endif()
