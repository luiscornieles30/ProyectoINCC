#include <iostream>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaez
int main() {
    char pregunta;
    do
    {
        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> pregunta;
        std::cin.ignore(100000000, '\n');
    } while (pregunta != 'n' && pregunta != 'N');

    
    return 0;
}