add_library(JucatorLibrary JucatorFotbal.cpp JucatorFotbal.hpp) #am creat libraria care contine clasa JucatorFotbal si care va fi folosita in main

target_include_directories(JucatorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(JucatorLibrary PUBLIC PortarLibrary)  #Clasa Jucator mosteneste clasa Portar

target_include_directories(JucatorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Portar)