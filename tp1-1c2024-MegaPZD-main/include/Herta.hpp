#ifndef TP1_1C2024_HERTA_HPP
#define TP1_1C2024_HERTA_HPP

#include <string>
#include <iostream>

const std::string NO_ENCONTRADO_RESPUESTA[2] = {"...\n", "Oh.\n"};
const std::string RESPUESTA_AUTOMATICA = "[Respuesta automatica] Hola. En este momento no estoy disponible, y no me pondre en contacto contigo mas tarde.\n";
//mensaje 1
const std::string RESPUESTAS_KURU[3] = {"KURU\n", "KURURIN\n", "KURU KURU\n"};
//mensaje 2
const std::string HOLA_RESPUESTA = "Hola.\n";
//mensaje 3
 const std::string RESPUESTA_PROBLEMA = "No te preocupes. Ya esta solucionado.\n";
//mensaje 4
const std::string RESPUESTA_PREOCUPADO = "De que te preocupas si yo estoy aqui?\n";
//mensaje 5
const std::string RESPUESTA_SIMULADO = "La actualizacion del Universo Simulado ya esta lista, ven a probarla.\n";
//mensaje 6
const std::string RESPUESTA_ERES_HERTA = "Quieres una selfie para demostrartelo o que?\n";
//mensaje 7
const std::string RESPUESTA_MARIONETA = "Vaya, parece que la perdi. No me extrania que no la encuentre.\n";

class Herta {
private:
    bool respuesta_manual;
    int contador;

    /*
        - Post: Se encarga de llevar registro y actualización del atributo
        - contador de la clase. Dependiendo de este será que el
        - objeto de la clase Herta ejecute o no una respuesta manual
        - actualizando el parametro respuesta_manual. 
    */
    void contador_mensajes();

public:

    /*
        - Constructor de la clase Herta con parametros; Se asignan los valores iniciales de:
        - respuesta_manual y contador.
    */
    Herta(bool respuesta_manual, int contador);

    /*
        - Constructor de la clase Herta sin parametros; Se asignan los valores iniciales de:
        - respuesta_manual y contador.
    */
    Herta();

    /*
        - (Extracto sacado del enunciado) Este metodo recibirá el
        - mensaje que el jugador le quiera enviar a Herta e
        - imprimirá por pantalla su respuesta.
    */
    void responder(std::string mensaje);
};

#endif