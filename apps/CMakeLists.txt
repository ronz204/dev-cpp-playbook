# Apps Layer: Main Executable

add_executable(playbook main.cpp)

# Link with core library
if(TARGET playbook_lib)
    target_link_libraries(playbook PRIVATE playbook_lib)
else()
    target_include_directories(playbook PRIVATE ${PROJECT_SOURCE_DIR}/include)
endif()
