add_library(PortarLibrary Portar.cpp Portar.hpp) #am creat libraria care contine clasa Portar si care va fi folosita in main

target_include_directories(PortarLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})