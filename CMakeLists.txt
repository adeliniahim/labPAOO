cmake_minimum_required(VERSION 3.27.7)
project(proiect)

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)  # we request C++14
    set(CMAKE_CXX_STANDARD_REQUIRED ON) # we request that CMake verifies the compiler
    set(CMAKE_CXX_EXTENSIONS OFF)  #we request -std=c++14 in the compiler  flags instead of –std=gnu++14
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()    



add_subdirectory(Jucator)

# Define the executable
add_executable(proiect main.cpp)   

target_link_libraries(proiect PRIVATE JucatorLib)

target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Jucator")