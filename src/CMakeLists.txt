add_subdirectory(Jucator)
add_subdirectory(Portar)
add_subdirectory(Istoric)
add_subdirectory(Echipa)


set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}) #specifica folderul în care fișierele executabile generate de compilator vor fi plasate

# Define the executable
add_executable(proiect main.cpp)   

target_link_libraries(proiect PRIVATE JucatorLibrary)
target_link_libraries(proiect PRIVATE PortarLibrary)
target_link_libraries(proiect PRIVATE IstoricLibrary)
target_link_libraries(proiect PRIVATE EchipaLibrary)

# specifica fisierele care ar trebui incluse în procesul de compilare 
target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Jucator")
target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Portar")
target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Istoric")
target_include_directories(proiect PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Echipa")