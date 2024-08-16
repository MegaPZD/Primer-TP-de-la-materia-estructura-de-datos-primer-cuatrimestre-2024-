#include "Herta.hpp"
#include "Randomizer.hpp"
#include "TransformadorTexto.hpp"
#include "Buscador.hpp"

Herta::Herta(bool respuesta_manual, int contador){

    this->respuesta_manual = false;
    this->contador = 0;

}

Herta::Herta(){

    respuesta_manual = false;
    contador = 0;

}

void Herta::contador_mensajes(){

    if(contador > 0 && contador < 6){
        respuesta_manual = true;
    }else if(contador == 6){
        respuesta_manual = false;
        contador -= 6;  
    } else{
        respuesta_manual = false;
    }

    contador++;

}

void Herta::responder(std::string mensaje) {
    
    contador_mensajes();
    mensaje = TransformadorTexto::transformador_minuscula_mayuscula(mensaje);

    if(!(respuesta_manual)){

        std::cout << RESPUESTA_AUTOMATICA; 

    } else{
        if(Buscador::buscar_mensaje_kuru(mensaje)){

            std::cout << RESPUESTAS_KURU[Randomizer::generador_numero_aleatorio(NUMERO_GENERADOR_UNO)];

        } else if(Buscador::buscar_mensaje_hola(mensaje)){

            std::cout << HOLA_RESPUESTA;

        } else if(Buscador::buscar_mensaje_problema(mensaje)){

            std::cout << RESPUESTA_PROBLEMA;

        } else if(Buscador::buscar_mensaje_preocupacion(mensaje)){

            std::cout << RESPUESTA_PREOCUPADO;

        } else if(Buscador::buscar_mensaje_simulado(mensaje)){

            std::cout << RESPUESTA_SIMULADO;

        } else if(Buscador::buscar_mensaje_eres(mensaje)){

            std::cout << RESPUESTA_ERES_HERTA;

        } else if (Buscador::buscar_mensaje_marioneta(mensaje)){

            std::cout << RESPUESTA_MARIONETA;

        } else{
            std::cout << NO_ENCONTRADO_RESPUESTA[Randomizer::generador_numero_aleatorio(NUMERO_GENERADOR_DOS)];
        }
    }

}