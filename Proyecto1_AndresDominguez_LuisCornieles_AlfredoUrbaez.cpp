#include <iostream>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaez, estudiantes de ingeniería de la Universidad Fermin Toro, Nucleo Lara-Cabudare.
//Cambio de Nombre.
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
promedio1 = 0;
promedio2 = 0;
promedio3 = 0;
prom_aumento1 = 0;
prom_aumento2 = 0;  
prom_aumento3 = 0;





std::cout << "<<<<<<<<<<<<<<<<<<<<   Programa para calcular el aumento de sueldo de los empleados   >>>>>>>>>>>>>>>>>>>>" << std::endl;
 do
    {   std::cout << "<<< Escriba 'Cancelar' o 'cancelar' cuando le pida su nombre y/o '0' cuando le pida algún dato numerico para finalizar el programa >>>" << std::endl;
        std::cout << "Ingrese su nombre:";
        std::cin >> nombre;
        if (nombre =="Cancelar" || nombre =="cancelar") {
          std::cout << "<<<< El programa ha sido cancelado por el usuario >>>>" << std::endl;
          break;
        }
        std::cout << "Ingrese su codigo:";
        std::cin >> codigo;
        if (std::cin.fail()) {
            std::cout << "<<<< Porfavor ingresa un valor númerico >>>>" << std::endl;
            std::cin.clear();
            std::cin.ignore(100000000, '\n');
            continue;
        }
        if (codigo == 0) {
          std::cout << "<<<< El programa ha sido cancelado por el usuario >>>>" << std::endl;
          break;
        }
        std::cout <<"Ingrese su sueldo:";
        std::cin >> sueldo;
        if (std::cin.fail()) {
            std::cout << "<<<< Porfavor ingresa un valor númerico >>>>" << std::endl;
            std::cin.clear();
            std::cin.ignore(100000000, '\n');
            continue;
        }
        if (sueldo ==  0) {
          std::cout << "<<<< El programa ha sido cancelado por el usuario >>>>" << std::endl;
          break;
        }
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
    std::cout << "El Empleado " << nombre << " con codigo " << codigo << " tiene un sueldo de: " << sueldo << " y su aumento es de: " << sueldodespues << std::endl;
        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> pregunta;
        std::cin.ignore(100000000, '\n');
    if (pregunta != 's' && pregunta != 'S') {
        std::cout << "<< Coloque un caracter valido para seguir la ejecución del programa o finalizar y recibir los datos finales >>" << std::endl;
        continue;
    }
    } while ((pregunta != 'n' && pregunta != 'N'));
if (pregunta == 'n' || pregunta == 'N') {
  std::cout << "El empleado con mayor aumento en el rango de 0 a 100000 es: " << nombrem_aumento << " con un aumento de: " << m_aumento << std::endl;
  std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
  std::cout << "El empleado con mayor aumento en el rango de 100000 a 200000 es: " << nombrem_aumento2 << " con un aumento de: " << m_aumento2 << std::endl;
  std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
  std::cout << "El empleado con mayor aumento en el rango de 200000 a mas es: " << nombrem_aumento3 << " con un aumento de: " << m_aumento3 << std::endl;
  std::cout << "El valor total de los sueldos antes del aumento es: " << sueldoantes << std::endl;
  std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
  std::cout << "El valor total de los sueldos despues del aumento es: " << sueldodespues << std::endl;
  std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
}
// Fin del Programa, gracias por su atención a la explicación del mismo.
    return 0;
}