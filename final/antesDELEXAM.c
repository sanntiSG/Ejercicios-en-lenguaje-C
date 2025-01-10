#include<stdio.h>
#define MAX_EMP 2
/*
Ejercicio Propuesto
Objetivo:
Crear un programa en C que gestione la información de empleados en una empresa.
El programa debe permitir al usuario cargar los datos de los empleados,
mostrar los datos de los empleados, y calcular el sueldo final de los empleados
en función de su tipo de contrato.*/

struct empleados{

    char nombre[20];
    char apellido[20];
    char contrato[40];
};


void cargar_datos(struct empleados e[], int tam);
void mostrar_datos(struct empleados e[], int tam);
void calcular_sueldo(struct empleados e[], int tam);
void menu(struct empleados e[], int tam);
float sueldo=100;
void buscar_por_nombre(struct empleados e[], int tam);

int main()
{
    struct empleados data[MAX_EMP];
    cargar_data(data, MAX_EMP);
    menu(data, MAX_EMP);

   return 0;
}

void cargar_data(struct empleados e[], int tam)
{

    for(int i=0; i<tam; i++)
    {
        printf("ingrese nombre del empleado %d\n", i+1);
        scanf("%s", e[i].nombre);

        printf("ingrese apellido del empleado %d\n", i+1);
        scanf("%s", e[i].apellido);

        printf("ingrese contrato del empleado %d\n", i+1);
        scanf("%s", e[i].contrato);
    }
}

void mostrar_datos(struct empleados e[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("empleado %d nombre %s\n",i+1, e[i].nombre);
        printf("empleado %d apellido: %s\n", i+1, e[i].apellido);
        printf("empleado %d contrato: %s\n",i+1, e[i].contrato);
        printf("empleado %d sueldo: %f\n",i+1, sueldo);

    }
}

void menu(struct empleados e[], int tam)
{

    int opcion;

    do{
        printf("ESCOGE TU OPCION\n");
        printf("1-mostrar datos de empleados\n");
        printf("2-calcular sueldo segun cintrato de empleados\n");
        printf("3-buscar por nombre\n");
        printf("4-salir\n");
        scanf("%d", &opcion);

    switch(opcion)
    {
       case 1: mostrar_datos(e, tam);break;
       case 2: calcular_sueldo(e, tam); break;
       case 3: buscar_por_nombre(e,tam);break;
       case 4: printf("saliendo!!\n");break;
       default: printf("opcion incorrecta\n");
    }


    }while(opcion!=4);

}

void calcular_sueldo(struct empleados e[], int tam)
    {

        for(int i=0; i<tam; i++)
        {

            float sueldoContrato;
            sueldoContrato=sueldo;

            if(strcasecmp(e[i].contrato, "pasantias")==0)
            {
                sueldoContrato += 500;
                printf("el empleado %s tiene un sueldo de %f\n", e[i].nombre, sueldoContrato);
            }
            else if(strcasecmp(e[i].contrato, "fijo")==0)
            {

                printf("el empleado %s tiene un sueldo de %f\n", e[i].nombre, sueldo);

            }



        }



    }



void buscar_por_nombre(struct empleados e[], int tam)
{
    int encontrado;
    char busqueda [20];


    printf("ingrese el nombre del empleado\n");
    scanf("%s", busqueda);

    for(int i=0; i<tam; i++)
    {
        if(strcasecmp(busqueda, e[i].nombre)==0)
        {
            printf("empleado: %s, contrato: %s", e[i].nombre, e[i].contrato);
        }

    }

    if(!busqueda)
    {
        printf("no lo encontre\n");
    }
}
