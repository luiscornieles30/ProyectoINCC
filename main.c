#include <stdio.h>
int main() {
    char pregunta[1];
    do
    {
        printf("¿Desea continuar? (s/n): ");
        scanf("%c", pregunta);
    } while (pregunta[0] != 'n' && pregunta[0] != 'N');
        
    
    return 0;
}