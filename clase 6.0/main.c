#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palabra[100];
    int len;

    strcpy(palabra,"hola");

    //printf("Ingrese nombre y apellido: ");
    //scanf("%s", palabra);
    //scanf("%[^\n]", palabra);
    //gets(palabra);
    //fgets(palabra,10,stdin);
    len = strlen(palabra);

    printf("la palabra es: %s\n Cantidad: %d ", palabra,len);




    return 0;
}
