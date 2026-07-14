#include <stdio.h>
int main() {
    char pregunta;
    do
    {
        printf("¿Desea continuar? (s/n): ");
        scanf(" %c", &pregunta);
    } while (pregunta != 'n' && pregunta != 'N');
        

    return 0;
}