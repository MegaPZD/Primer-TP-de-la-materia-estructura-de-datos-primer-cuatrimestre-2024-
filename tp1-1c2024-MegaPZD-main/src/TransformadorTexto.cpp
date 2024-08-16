#include "TransformadorTexto.hpp"

std::string TransformadorTexto::transformador_minuscula_mayuscula(std::string mensaje){

    int longitud = (int)mensaje.length();
    std::string aux_cadena = "";

    for(int i = 0; i < longitud; i++){
        aux_cadena += (char)(std::toupper(mensaje[i]));
    }

    mensaje = aux_cadena;

    return mensaje;

}