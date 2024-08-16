#ifndef TP1_1C2024_TRANSFORMADOR_HPP
#define TP1_1C2024_TRANSFORMADOR_TEXTO_HPP

#include <string>

class TransformadorTexto {

public:

    /*
        - Post: Tranforma cualquier texto (string) en uno completamente
        - escrito en mayusculas (independientemente de si este
        - tuviera ya algunas) y lo devuelve el resultado a la 
        - función invocante.
    */
    static std::string transformador_minuscula_mayuscula(std::string mensaje);

};

#endif