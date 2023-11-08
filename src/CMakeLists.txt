add_subdirectory(Jucator)
add_subdirectory(Portar)


set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}) #specifica folderul în care fișierele executabile generate de compilator vor fi plasate

# Define the executable
add_executable(proiect main.cpp)   

target_link_libraries(proiect PRIVATE JucatorLibrary)
target_link_libraries(proiect PRIVATE PortarLibrary)

# specifica fisierele care ar trebui incluse în procesul de compilare 
target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Jucator")
target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Portar")