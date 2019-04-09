#include <stdio.h>
#include <stdlib.h>

typedef struct
{

 int legajo;
 char nombre[20];
 char sexo;
 float sueldoBruto;
 float sueldoNeto;
}eEmpleado;

int main()
{
    eEmpleado unEmpleado = {1000, "Martin", 'm', 15000, 12000};

    //puts(unEmpleado.nombre);
    printf("ingrese nombre: ");
    scanf("%d", &nombre);
    printf("ingrese nombre: ");
    fflush(stdin);
    gets(unEmpleado.nombre);
    printf("ingrese sexo: ");
    scanf("%c", &sexo);
    printf("ingrese sexo: ");
    fflush(stdin);
    scanf(unEmpleado.sexo);
    printf("ingrese sueldo bruto: ");
    scanf("%f", &sueldoBruto);
    scanf("f", unEmpleado.lsueldoBruto);
    unEmpleado.sueldoNeto=unEmpleado.sueldoBruto*0.85

    otroEmpleado=unEmpleado
    printf("%d-*%s-%c-%f-%f\n",unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto, unEmpleado.sueldoNeto)

    printf("%d-*%s-%c-%f-%f\n",unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto, unEmpleado.sueldoNeto)



return 0;
}
