#include <iostream>
#include "Herta.hpp"
#include "Randomizer.hpp"
#include "TransformadorTexto.hpp"
#include "Buscador.hpp"

const std::string FIN = "END";

/*

    - Post: Por enunciado, se requiere que main lea y registre 
    - los mensajes que usuario escriba y lo envie a un objeto Herta.
    - Con la palabra clave "END" se terminará este ciclo de envios,
    - se resalta que con esto tambien se le da la oportunidad al
    - usuario de nunca empezar el ciclo.
    
*/
int main() {
    
    std::string texto;

    std::cout << "[MENSAJE AUTOMATICO] Ingrese un mensaje para empezar el chat con Herta,\npara finalizar ingrese END ('END')" << std::endl;
    
    std::getline (std::cin,texto);

    Herta chat;

    while (texto != FIN){
    
        chat.responder(texto);

        std::getline (std::cin,texto);

    }
    
    return 0;

}
