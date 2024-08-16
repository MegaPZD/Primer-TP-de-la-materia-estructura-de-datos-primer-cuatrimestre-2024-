#include "Randomizer.hpp"

int Randomizer::generador_numero_aleatorio(int numero_respuesta){

    std::random_device rd;
    std::mt19937 gen(rd());

    int numero_aleatorio;

    if(numero_respuesta == NUMERO_GENERADOR_UNO){

        std::uniform_int_distribution<int> numero_aleatorio_uno(0, 2);
        numero_aleatorio = numero_aleatorio_uno(gen);

    } else if(numero_respuesta == NUMERO_GENERADOR_DOS){

        std::uniform_int_distribution<int> numero_aleatorio_dos(0, 1);
        numero_aleatorio = numero_aleatorio_dos(gen);

    }

    return numero_aleatorio;
    
}
