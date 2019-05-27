#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE* tuvi;

    char nombre[60]={"hola makina me dropeas un ricki helado de vainilla"};
    tuvi = fopen("C:\\Users\\alumno\\Desktop\\tuma18\\tuvi.txt" ,"w");
    fprintf(tuvi,nombre,"wb");


    return 0;*/


    FILE* tuvi;

    char anis[100];
    tuvi = fopen("C:\\Users\\alumno\\Desktop\\tuma18\\tuvi.txt", "r");
    fgets(anis,100,tuvi);
    fclose(tuvi);
    printf("%s", anis);
}
