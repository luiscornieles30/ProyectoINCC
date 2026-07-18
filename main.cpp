#include <iostream>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaezs
int main() {
    char pregunta; float sueldoantes; float sueldodespues;  float promedio1; float promedio2; float promedio3; float prom_aumento1; float prom_aumento2; float prom_aumento3; int empleados; std::string nombre; int codigo; float sueldo; float aumento1; float aumento2; float aumento3; float m_aumento; float m_aumento2; float m_aumento3; std::string nombrem_aumento3; std::string nombrem_aumento2; std::string nombrem_aumento; float empleado1; float empleado2; float empleado3;
m_aumento = 0;
m_aumento2 = 0;
m_aumento3 = 0;
empleados = 0;
empleado1 = 0;
empleado2 = 0;
empleado3 = 0;
sueldoantes = 0;
sueldodespues = 0;




std::cout << "Programa para calcular el aumento de sueldo de los empleados" << std::endl;
 do
    {
        std::cout << "Ingrese su nombre:";
        std::cin >> nombre;
        std::cout << "Ingrese su codigo:";
        std::cin >> codigo;
        std::cout <<"Ingrese su sueldo:";
        std::cin >> sueldo;
    if (sueldo <= 100000 && sueldo > 0) {
        aumento1 = sueldo * 1.30;
        empleado1 = empleado1 + 1;
        if (aumento1 > m_aumento) {
            m_aumento = aumento1;
            nombrem_aumento = nombre;
            } 
        prom_aumento1 = prom_aumento1 + aumento1;
        promedio1 = prom_aumento1 / empleado1;
        sueldodespues = sueldodespues + aumento1;

        }
    if (sueldo > 100000 && sueldo <= 200000) {
        aumento2 = sueldo + 50000;
        if (aumento2 > m_aumento2) {
            m_aumento2 = aumento2;
            nombrem_aumento2 = nombre;
            }   
        empleado2 = empleado2 + 1;
        prom_aumento2 = prom_aumento2 + aumento2;
        promedio2 = prom_aumento2 / empleado2;
        sueldodespues = sueldodespues + aumento2;
        }
    if (sueldo > 200000) {  
        aumento3 = sueldo * 1.20;
        if (aumento3 > m_aumento3) {
            m_aumento3 = aumento3;
            nombrem_aumento3 = nombre;
            }
        empleado3 = empleado3 + 1;
        prom_aumento3 = prom_aumento3 + aumento3;
        promedio3 = prom_aumento3 / empleado3;
        sueldodespues = sueldodespues + aumento3;
        }
    empleados = empleados + 1;
    sueldoantes = sueldoantes + sueldo;

        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> pregunta;
        std::cin.ignore(100000000, '\n');
    } while (pregunta != 'n' && pregunta != 'N');
    return 0;
}