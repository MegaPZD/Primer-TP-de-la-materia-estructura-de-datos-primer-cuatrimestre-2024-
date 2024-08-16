#ifndef TP1_1C2024_BUSCADOR_HPP
#define TP1_1C2024_BUSCADOR_HPP

//mensaje 1
const std::string KURU = "KURU";
const std::string KURURIN = "KURURIN";
const std::string VECTOR_MENSAJES_UNO[2] = {KURU,KURURIN};
//mensaje 2
const std::string HOLA = "HOLA";
//mensaje 3
const std::string PROBLEMA = "PROBLEMA";
//mensaje 4
const std::string PREOCUPADO = "PREOCUPADO";
const std::string PREOCUPADA = "PREOCUPADA";
const std::string VECTOR_MENSAJES_CUATRO[2] = {PREOCUPADO,PREOCUPADA};
//mensaje 5
const std::string SIMULADO = "SIMULADO";
//mensaje 6
const std::string PREGUNTA_ERES_PREDETERMINADO = "ERES HERTA?";
//mensaje 7
const std::string PREGUNTA_MARIONETA_PREDETERMINADO = "Y TU MARIONETA?";

class Buscador {

public:

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una (determinada por un vector de constantes,
        - VECTOR_MENSAJES_KURU) coincidencia en el mensaje
        - y devuelve a la función invocante un booleano; 
        - Si se encontro true, sino, false.
    */
    static bool buscar_mensaje_kuru(std::string mensaje);

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una (determinada por una constante, HOLA)
        - coincidencia en el mensaje y devuelve a la función
        - invocante un booleano; Si se encontro true, sino, false.
    */
    static bool buscar_mensaje_hola(std::string mensaje);

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una (determinada por una constante, PROBLEMA)
        - coincidencia en el mensaje y devuelve a la función
        - invocante un booleano; Si se encontro true, sino, false.
    */
    static bool buscar_mensaje_problema(std::string mensaje);

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una (determinada por un vector de constantes,
        - VECTOR_MENSAJES_PREOCUPACION) coincidencia en el mensaje
        - y devuelve a la función invocante un booleano; 
        - Si se encontro true, sino, false.
    */
    static bool buscar_mensaje_preocupacion(std::string mensaje);

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una (determinada por una constante, SIMULADO)
        - coincidencia en el mensaje y devuelve a la función
        - invocante un booleano; Si se encontro true, sino, false.
    */
    static bool buscar_mensaje_simulado(std::string mensaje);

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una el mensaje determinado por
        - PREGUNTA_ERES_PREDETERMINADO y devuelve
        - a la función invocante un booleano; Si se encontro
        - true, sino, false.
    */
    static bool buscar_mensaje_eres(std::string mensaje);

    /*
        - Pre: Requiere que los mensajes recibidos (string)
        - esten escritos completamente en mayuscula.
        - Post: Busca una el mensaje determinado por
        - PREGUNTA_MARIONETA_PREDETERMINADO y devuelve
        - a la función invocante un booleano; Si se encontro
        - true, sino, false.
    */
    static bool buscar_mensaje_marioneta(std::string mensaje);

};

#endif