#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* archivo_binario;
    int x = 4;
    archivo_binario = fopen("C:\\Users\\alumno\\Desktop\\tuma18^2\\binario.dat" ,"wb");
    fwrite(&x,sizeof(int),1,archivo_binario);
    fclose(archivo_binario);


    /*int* x;
    x = (int* x)malloc(sizeof(int));
    archivo_binario = fopen("C:\\Users\\alumno\\Desktop\\tuma18^2\\binario.dat" ,"rb");
    fread(x,sizeof(int),1,archivo_binario);
    fclose(archivo_binario);

    printf("%d", *x);*/
return 0;
}
