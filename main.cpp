#include <iostream>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaez
int main() {
    char pregunta; std::string nombre; int codigo; float sueldo;
 do
    {
        std::cout << "Ingrese su nombre:";
        std::cin >> nombre;
        std::cout << "Ingrese su codigo:";
        std::cin >> codigo;
        std::cout <<"Ingrese su sueldo:";
        std::cin >> sueldo;

        
        
        
        
        
        
        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> pregunta;
        std::cin.ignore(100000000, '\n');
    } while (pregunta != 'n' && pregunta != 'N');


    return 0;
}