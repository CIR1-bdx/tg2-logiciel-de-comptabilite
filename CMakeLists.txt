cmake_minimum_required(VERSION 3.26)
project(tg2_logiciel_de_comptabilite C)

set(CMAKE_C_STANDARD 11)

add_executable(tg2_logiciel_de_comptabilite main.c
        "Calcul montant gagné ou perdue.c")
