cmake_minimum_required(VERSION 3.20)
project(Proiect_POO)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proiect_POO
        main.cpp
        src/Client.cpp
        src/Ceas.cpp
        src/Magazin.cpp
        src/Logare.cpp
        headers/Client.h
        headers/Ceas.h
        headers/Magazin.h
        ../headers/Logare.h
        src/erori.cpp
        ../headers/erori.h
        "src/Modele_ceas.cpp"
        "headers/Modele_ceas.h"
        parola_Encryption/digestpp.hpp src/aplicatie.cpp headers/aplicatie.h)
