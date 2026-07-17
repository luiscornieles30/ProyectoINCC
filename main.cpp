#include <iostream>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaez
int main() {
    char pregunta; std::string nombre; int codigo; float sueldo; float aumento1; float aumento2; float aumento3;
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
if (sueldo <= 100000) {
    aumento1 = sueldo * 1.30;   
    }
if (sueldo > 100000 && sueldo <= 200000) {
   aumento2 = sueldo + 50000;   
    }
if (sueldo > 200000) {  
    aumento3 = sueldo * 1.20;   
    }
    return 0;
}