#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define     T 2

void pedirCadena (char[], char[], int);
void validarTamCadena(char[], char[], int);
int main()
{
    int legajos[T];
    float sueldos[T];
    char sexos[T];
    char nombres[T][20];
    int i, j;

    for(i=0; i<T; i++)
    {
        printf("ingrese legajo: ");
        scanf("%d", legajos[i]);
        printf("ingrese sueldos: ");
        scanf("%f", sueldos[i]);
        printf("ingrese sexo m o f: ");
        fflush(stdin);
        scanf("%c", sexos[i]);
        pedirCadena("nombre: ", nombres, 20);
    }
    for(i=0; i<T-1; i++)
    {

    }

    return 0;
}

