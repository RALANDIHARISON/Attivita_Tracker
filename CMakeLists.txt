cmake_minimum_required(VERSION 3.28)
project(Attivita_Tracker)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

add_subdirectory(test/lib/googletest)


add_library(core
        AttivitaFisica.cpp
        Partecipante.cpp
        TrackerAttivita.cpp)

add_executable(Attivita_Tracker main.cpp)
target_link_libraries(Attivita_Tracker core)




