#include<stdio.h>

/*
Ejercicio Propuesto
Objetivo:
Crear un programa en C que gestione la información de empleados en una empresa.
El programa debe permitir al usuario cargar los datos de los empleados,
mostrar los datos de los empleados, y calcular el sueldo final de los empleados
en función de su tipo de contrato.*/

#define TAM 2

struct empleados
{
    char nombre[20];
    char apellido[20];
    float sueldo;
    char contrato[40];
};


void cargar_datos(struct empleados e[], int tam);
void mostrar_datos(struct empleados e[], int tam);
void menu(struct empleados e[], int tam);
void sueldo_final(struct empleados e[], int tam);
void salida(struct empleados e[], int tam);

int main()
{

    struct empleados datos[TAM];
    cargar_datos(datos, TAM);
    menu(datos,TAM);

    return 0;
}

void cargar_datos(struct empleados e[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("ingrese nombre del empleado %d\n", i+1);
        scanf("%s", e[i].nombre);

        printf("ingrese apellido del empleado %d\n", i+1);
        scanf("%s", e[i].apellido);

        printf("ingrese sueldo del empleado %d\n", i+1);
        scanf("%f", &e[i].sueldo);

        printf("ingrese el tipo de contrato del empleado %d\n"
               "FTC - Contrato por tiempo fijo.\n"
               "CTT- Contrato temporal.\n"
               "STG\n-Contrato de stagiaire(PASANTIAS)\n", i+1);
        scanf("%s", e[i].contrato);
    }

}

void mostrar_datos(struct empleados e[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("nombre del empleado %d: %s\n", i+1, e[i].nombre);
        printf("apellido del empleado %d: %s\n", i+1, e[i].apellido);
        printf("sueldo del empleado %d: %f\n", i+1, e[i].sueldo);

        if (strcmp(e[i].contrato, "ftc")==0|| strcmp(e[i].contrato, "FTC")==0)
        {
            printf("contrato del empleado %d: es Contrato por tiempo fijo.\n", i+1);

        }else if(strcmp(e[i].contrato, "ctt")==0|| strcmp(e[i].contrato, "CTT")==0)
        {
            printf("contrato del empleado %d: es  Contrato temporal.\n", i+1);

        }else if(strcmp(e[i].contrato, "stg")==0|| strcmp(e[i].contrato, "STG")==0)
        {
            printf("contrato del empleado %d: pasantias\n", i+1);
        }

    }

}

void menu(struct empleados e[], int tam)
{
    int opcion;

    do{

          printf("\nMENU. ELIJE TU OPCION\n");
          printf("\n1-Mostrar datos de empleados\n");
          printf("\n2-Calcular sueldo final segun tipo de contrato\n");
          printf("\n3-SALIR\n");
        scanf("%d", &opcion);

          switch(opcion)
          {
            case 1: mostrar_datos(e, tam);break;
            case 2: sueldo_final(e, tam);break;
            case 3: salida(e,tam);break;
            default: printf("opcion incorrecta");

          }

    }while(opcion!=3);

}

void sueldo_final(struct empleados e[], int tam)
{

    for(int i=0; i<tam; i++)
    {
        float sueldo_final = e[i].sueldo;

        if(strcmp(e[i].contrato, "ftc")==0|| strcmp(e[i].contrato, "FTC")==0)
        {
          sueldo_final +=100;
        }
        else if(strcmp(e[i].contrato, "ctt")==0|| strcmp(e[i].contrato, "CTT")==0)
        {
            sueldo_final += 50;
        }
        else if(strcmp(e[i].contrato, "stg")==0|| strcmp(e[i].contrato, "STG")==0)
        {
            sueldo_final += 0;
        }

          printf("el sueldo final de %s es %f + su contrato de trabajo: %s = %f\n", e[i].nombre, e[i].sueldo, e[i].contrato, sueldo_final);

        }

    }

void salida(struct empleados e[], int tam)
{
    char salida[10];

    while(1)
    {
        printf("ingrese SALIR para poder salir\n");
        scanf("%s", salida);

        if(strcasecmp(salida, "salir")==0)
        {
            printf("SALIENDO!!\n");
            break;
        }

        else
        {
            printf("escriba salir porfavor\n");
        }
    }





}
