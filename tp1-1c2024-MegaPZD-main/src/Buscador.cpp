#include <string>
#include <cctype>
#include "Buscador.hpp"

bool Buscador::buscar_mensaje_kuru(std::string mensaje){

    bool encontrado = false;
    
    int i = 0;
    
    while(encontrado == false && i < 2){
        size_t posicion = mensaje.find(VECTOR_MENSAJES_UNO[i]);
        if(posicion != std::string::npos){
            encontrado = true;
        }
        i++;
    }
    
    return encontrado;
}

bool Buscador::buscar_mensaje_hola(std::string mensaje){

    bool encontrado = false;

    size_t posicion = mensaje.find(HOLA);
    if(posicion != std::string::npos){
        encontrado = true;
    }
    
    return encontrado;
}

bool Buscador::buscar_mensaje_problema(std::string mensaje){

    bool encontrado = false;

    size_t posicion = mensaje.find(PROBLEMA);
    if(posicion != std::string::npos){
        encontrado = true;
    }
    
    return encontrado;
}

bool Buscador::buscar_mensaje_preocupacion(std::string mensaje){

    bool encontrado = false;
    
    int i = 0;
    
    while(encontrado == false && i < 2){
        size_t posicion = mensaje.find(VECTOR_MENSAJES_CUATRO[i]);
        if(posicion != std::string::npos){
            encontrado = true;
        }
        i++;
    }
    
    return encontrado;
}

bool Buscador::buscar_mensaje_simulado(std::string mensaje){

    bool encontrado = false;
    
    size_t posicion = mensaje.find(SIMULADO);
    if(posicion != std::string::npos){
        encontrado = true;
    }
    
    return encontrado;
}

bool Buscador::buscar_mensaje_eres(std::string mensaje){

    bool encontrado = false;

    if(mensaje == PREGUNTA_ERES_PREDETERMINADO){
        encontrado = true;
    }
    
    return encontrado;
}

bool Buscador::buscar_mensaje_marioneta(std::string mensaje){

    bool encontrado = false;

    if(mensaje == PREGUNTA_MARIONETA_PREDETERMINADO){
        encontrado = true;
    }
    
    return encontrado;

}