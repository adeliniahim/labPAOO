add_library(IstoricLibrary Istoric.cpp Istoric.hpp) #am creat biblioteca care contine clasa JucatorFotbal si care va fi folosita in main

target_include_directories(IstoricLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(IstoricLibrary PUBLIC JucatorLibrary PortarLibrary)  #Clasa Istoric mosteneste clasa Jucator

target_include_directories(IstoricLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Jucator)
target_include_directories(IstoricLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Portar)