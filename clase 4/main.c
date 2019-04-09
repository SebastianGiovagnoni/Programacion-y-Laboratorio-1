#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include "recursividad.h"

int main()
{
    /*int resultado = factorial(5);
    printf("resultado: %d", resultado);

    return 0;*/

    /*int edad;
    int legajo;
    int peso;

    edad=pedirEntero("ingrese edad; ");
    legajo=pedirEntero("ingrese legajo: ");
    peso=pedirEntero("ingrese peso: ");
    return 0;*/

    int opcion;
    char seguir='s';

    do
    {
        printf("1.Alta\n2.Baja\n3Informar\n4.Salir\nElija una opcion.");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            printf("estoy dando de alta!\n");
            break;
        case 2:
            printf("estoy dande de baja!\n");
            break;
        case 3:
            printf("estoy informando\n");
            break;
        case 4:
            printf("cerrar el programa\n");
            seguir='n';
            break;
        default:
            printf("ingrese una opcion valida!");
            break;
        }
         system("pause");
         system("cls");
    }while(seguir=='s');

          return 0;


}
