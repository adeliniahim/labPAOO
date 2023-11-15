add_library(EchipaLibrary Echipa.cpp Echipa.hpp) #am creat biblioteca care contine clasa Echipa si care va fi folosita in main

target_include_directories(EchipaLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})