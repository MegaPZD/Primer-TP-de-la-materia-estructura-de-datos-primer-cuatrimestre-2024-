#ifndef TP1_1C2024_RANDOMIZER_HPP
#define TP1_1C2024_RANDOMIZER_HPP

#include <random>

const int NUMERO_GENERADOR_UNO = 1;
const int NUMERO_GENERADOR_DOS = 8;

class Randomizer {
public:

    /*
        - Post: Genera un numero aleatorio del 0 al 2 o del 0 al 1
        - (inclusive) dependiendo que numero de generador (CONSTANTES)
        - le llegue y lo retornará a la función invocante.
       */
    static int generador_numero_aleatorio(int numero_respuesta);
};

#endif