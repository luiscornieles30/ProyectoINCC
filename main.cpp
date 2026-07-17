#include <iostream>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaez
int main() {
    char pregunta; int empleados; std::string nombre; int codigo; float sueldo; float aumento1; float aumento2; float aumento3; float m_aumento; float m_aumento2; float m_aumento3; std::string nombrem_aumento3; std::string nombrem_aumento2; std::string nombrem_aumento; 
m_aumento = 0;
m_aumento2 = 0;
m_aumento3 = 0;
empleados = 0;


std::cout << "Programa para calcular el aumento de sueldo de los empleados" << std::endl;
 do
    {
        std::cout << "Ingrese su nombre:";
        std::cin >> nombre;
        std::cout << "Ingrese su codigo:";
        std::cin >> codigo;
        std::cout <<"Ingrese su sueldo:";
        std::cin >> sueldo;
    if (sueldo <= 100000) {
        aumento1 = sueldo * 1.30;
        if (aumento1 > m_aumento) {
            m_aumento = aumento1;
            nombrem_aumento = nombre;
            } 
        }
    if (sueldo > 100000 && sueldo <= 200000) {
        aumento2 = sueldo + 50000;
        if (aumento2 > m_aumento2) {
            m_aumento2 = aumento2;
            nombrem_aumento2 = nombre;
            }   
        }
    if (sueldo > 200000) {  
        aumento3 = sueldo * 1.20;
        if (aumento3 > m_aumento3) {
            m_aumento3 = aumento3;
            nombrem_aumento3 = nombre;
            }
        }
    empleados = empleados + 1;

        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> pregunta;
        std::cin.ignore(100000000, '\n');
    } while (pregunta != 'n' && pregunta != 'N');
    return 0;
}