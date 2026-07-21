#include <iostream>
#include <iomanip>
// Programa hecho por: Luis Cornieles, Andres Dominguez y Alfredo Urbaez, estudiantes de ingeniería de la Universidad Fermin Toro, Nucleo Lara-Cabudare.
//Cambio de Nombre.
int main() {
    char pregunta; int ct; int empleadostotales; float sueldoantes; float sueldoluego; float aumentom1; float aumentom2; float aumentom3; float sueldodespues;  float promedio1; float promedio2; float promedio3; float prom_aumento1; float prom_aumento2; float prom_aumento3; int empleados; std::string nombre; int codigo; float sueldo; float aumento1; float aumento2; float aumento3; float m_aumento; float m_aumento2; float m_aumento3; std::string nombrem_aumento3; std::string nombrem_aumento2; std::string nombrem_aumento; float empleado1; float empleado2; float empleado3;
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
nombrem_aumento = "(No hay empleados en este rango)";
nombrem_aumento2 = "(No hay empleados en este rango)";
nombrem_aumento3 = "(No hay empleados en este rango)";
ct = 0;

while (ct < 1) {
    std::cout << "\033[90m" << "Escriba la cantidad de empleados deseada para registrarse" << "\033[0m";
    std::cin >> empleadostotales;
    if (std::cin.fail()) {
        std::cout << "\033[32m" << "<<<< Porfavor ingresa un valor númerico >>>>" << "\033[0m" << std::endl;
        std::cin.clear();
        std::cin.ignore(100000000, '\n');
        continue;
    }
    if (empleadostotales < 0) {
        std::cout << "\033[32m" << "<<<< Porfavor ingresa un valor númerico mayor a 0 >>>>" << "\033[0m" << std::endl;
        std::cin.clear();
        std::cin.ignore(100000000, '\n');
        continue;
    }
    ct = ct + 1;
    std::cin.ignore(100000000, '\n');
  }
std::cout << std::fixed << std::setprecision(2);
std::cout << "\033[1;34m" << "<<<<<<<<<<<<<<<<<<<<   Programa para calcular el aumento de sueldo de los empleados   >>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
 do
    {   sueldoluego = 0;
        std::cout << "\033[36m" << "<<< Escriba 'Cancelar' o 'cancelar' cuando le pida su nombre y/o '0' cuando le pida algún dato numerico para finalizar el programa >>>" << "\033[0m" << std::endl;
        std::cout << "\033[90m" << "Ingrese su nombre:" << "\033[0m";
        std::cin >> nombre;
        std::cin.ignore(100000000, '\n');
        if (nombre =="Cancelar" || nombre =="cancelar") {
          std::cout << "\033[31m" << "<<<< El programa ha sido cancelado por el usuario >>>>" << "\033[0m" << std::endl;
          break;
        }
        if (nombre.empty()) {
            std::cout << "\033[32m" << "<<<< Porfavor ingresa un nombre valido o 'Cancelar' para finalizar >>>>" << "\033[0m" << std::endl;
            continue;
        }
        std::cout << "\033[90m" << "Ingrese su codigo:" << "\033[0m";
        std::cin >> codigo;
        if (std::cin.fail()) {
            std::cout << "\033[32m" << "<<<< Porfavor ingresa un valor númerico o '0' para finalizar >>>>" << "\033[0m" << std::endl;
            std::cin.clear();
            std::cin.ignore(100000000, '\n');
            continue;
        }
        if (codigo < 0) {
          std::cout << "\033[31m" << "<<<< El programa ha sido cancelado por el usuario >>>>" << "\033[0m" << std::endl;
          break;
        }
        if (codigo == 0) {
          std::cout << "\033[31m" << "<<<< El programa ha sido cancelado por el usuario >>>>" << "\033[0m" << std::endl;
          break;
        }
        std::cout << "\033[90m" << "Ingrese su sueldo:" << "\033[0m";
        std::cin >> sueldo;
        if (std::cin.fail()) {
            std::cout << "\033[32m" << "<<<< Porfavor ingresa un valor númerico o '0' para finalizar>>>>" << "\033[0m" << std::endl;
            std::cin.clear();
            std::cin.ignore(100000000, '\n');
            continue;
        }
        if (sueldo ==  0) {
          std::cout << "\033[31m" <<"<<<< El programa ha sido cancelado por el usuario >>>>" << "\033[0m" << std::endl;
          break;
        }
        if (sueldo < 0) {
          std::cout << "\033[31m" <<"<<<< El programa ha sido cancelado por el usuario >>>>" << "\033[0m" << std::endl;
          break;
        }
    if (sueldo <= 100000 && sueldo > 0) {
        aumento1 = sueldo * 1.30;
        aumentom1 = aumento1;
        empleado1 = empleado1 + 1;
        if (aumento1 > m_aumento) {
            m_aumento = aumento1;
            nombrem_aumento = nombre;
            } 
        prom_aumento1 = prom_aumento1 + aumento1;
        promedio1 = prom_aumento1 / empleado1;
        sueldodespues = sueldodespues + aumento1;
        sueldoluego = aumento1;

        }
    if (sueldo > 100000 && sueldo <= 200000) {
        aumento2 = sueldo + 50000;
        aumentom2 = aumento2;
        if (aumento2 > m_aumento2) {
            m_aumento2 = aumento2;
            nombrem_aumento2 = nombre;
            }   
        empleado2 = empleado2 + 1;
        prom_aumento2 = prom_aumento2 + aumento2;
        promedio2 = prom_aumento2 / empleado2;
        sueldodespues = sueldodespues + aumento2;
        sueldoluego =aumento2;
        }
    if (sueldo > 200000) {  
        aumento3 = sueldo * 1.20;
        aumentom3 = aumento3;
        if (aumento3 > m_aumento3) {
            m_aumento3 = aumento3;
            nombrem_aumento3 = nombre;
            }
        empleado3 = empleado3 + 1;
        prom_aumento3 = prom_aumento3 + aumento3;
        promedio3 = prom_aumento3 / empleado3;
        sueldodespues = sueldodespues + aumento3;
        sueldoluego = aumento3;
        }
    empleados = empleados + 1;
    sueldoantes = sueldoantes + sueldo;
    std::cout << "El Empleado " << nombre << " con codigo " << codigo << " tiene un sueldo de: " << sueldo << " y su aumento es de: " << sueldoluego << std::endl;
        std::cout << "\033[4;32m" << "¿Desea continuar? (s/n): " << "\033[0m";
        std::cin >> pregunta;
        std::cin.ignore(100000000, '\n');
    if (pregunta != 's' && pregunta != 'S') {
        if (pregunta != 'n' && pregunta != 'N') {
         std::cout << "\033[4;31m" << "<< Coloque un caracter valido acorde a las indicaciones la proxima vez >>" << "\033[0m" << std::endl;
         std::cout << "\033[4;32m" << "¿Desea continuar? (s/n): " << "\033[0m";
         std::cin >> pregunta;
        }
    }
    } while ((pregunta != 'n' && pregunta != 'N'));
if (pregunta == 'n' || pregunta == 'N') {
  std::cout << "\033[92m" << "El empleado con mayor aumento en el rango de 0 a 100000 es: " << nombrem_aumento << " con un aumento de: " << m_aumento << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El empleado con mayor aumento en el rango de 100000 a 200000 es: " << nombrem_aumento2 << " con un aumento de: " << m_aumento2 << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El empleado con mayor aumento en el rango de 200000 a mas es: " << nombrem_aumento3 << " con un aumento de: " << m_aumento3 << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El valor total de los sueldos antes del aumento es: " << sueldoantes << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El valor total de los sueldos despues del aumento es: " << sueldodespues << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "La cantidad total de empleados registrados fue de: " << empleados << " siendo la cantidad esperada: " << empleadostotales << "\033[0m" << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El promedio de aumento en el rango de 0 a 100000 es: " << promedio1 << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El promedio de aumento en el rango de 100000 a 200000 es: " << promedio2 << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
  std::cout << "\033[92m" << "El promedio de aumento en el rango de 200000 a mas es: " << promedio3 << std::endl;
  std::cout << "\033[94m" << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << "\033[0m" << std::endl;
}
// Fin del Programa, gracias por su atención a la explicación del mismo.
    return 0;
}