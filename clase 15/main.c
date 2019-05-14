#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int *x = NULL;
    int v = 10;

    x = &v;

    printf("el valor de x es: %p\n", x);
    printf("la direccion de x es: %p\n", &x);
    printf("el valos al que apunta x es: %d\n\n", *x);

    printf("el valor de v es: %d\n", v);
    printf("la direccion de v es %p\n", &v);*/

    /*char letra;
    char* pletra=NULL;

    pletra=&letra;

    printf("ingrese una letra: ");
    fflush(stdin);
    scanf("%c", pletra);

    printf("\n\n--%c--", letra);*/

    int p;
    int* q=NULL;
    int* r=NULL;

    p=10;

    q=&p;

    r=q;

    printf("el valor de q es: %p\n", q);
    printf("el valor de r es: %p\n", r);
    printf("el valor de *q es: %d\n", *q);
    printf("el valor de *r es: %d\n", *r);




    return 0;
}
