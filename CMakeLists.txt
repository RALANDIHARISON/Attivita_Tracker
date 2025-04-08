cmake_minimum_required(VERSION 3.28)
project(Attivita_Tracker)

set(CMAKE_CXX_STANDARD 11)

add_executable(Attivita_Tracker main.cpp
        AttivitaFisica.h
        AttivitaFisica.cpp
        Partecipante.h
        Partecipante.cpp
        TrackerAttivita.h
        TrackerAttivita.cpp)
