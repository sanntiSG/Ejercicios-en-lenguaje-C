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
//float sueldo;
char contrato[40];
};

void cargar_datos(struct empleados e[], int tam);
void mostrar_datos(struct empleados e[], int tam);
void sueldo_final(struct empleados e[], int tam);
void menu_principal(struct empleados e[], int tam);
void buscar_empleado_por_contrato(struct empleados e[], int tam);
void buscar_empleado_por_nombre(struct empleados e[], int tam);
void salir(struct empleados e[], int tam);
float sueldo=200;

int main()
{

    struct empleados data[MAX_EMP];
    cargar_datos(data, MAX_EMP);
    menu_principal(data, MAX_EMP);

    return 0;
}

void cargar_datos(struct empleados e[], int tam)
{
    for (int i=0; i<tam; i++)
    {

        printf("\ningrese nombre del empleado %d\n", i+1);
        scanf("%s", e[i].nombre);
        printf("ingrese apellido del empleado %d\n", i+1);
        scanf("%s", e[i].apellido);

        /*printf("ingrese sueldo del empleado %d\n", i+1);
        scanf("%f", &e[i].sueldo);*/

        printf("ingrese el contrato del empleado %d|'FIJO' 'PASANTIAS' 'LIMITADO'\n", i+1);
        scanf(" %[^\n]s", e[i].contrato);
    }
}

void mostrar_datos(struct empleados e[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("\nNombre del empleado %d: %s\n", i+1, e[i].nombre);
        printf("\Apellido del empleado %d: %s\n", i+1, e[i].apellido);
        printf("\sueldo del empleado %d: %f\n", i+1, sueldo);
        printf("\ncontrato del empleado %d: %s", i+1, e[i].contrato);

    }
}


void sueldo_final(struct empleados e[], int tam)
{

    for(int i=0; i<tam; i++)
    {
        float sueldoFinal;
        sueldoFinal=sueldo;

        if(strcasecmp(e[i].contrato, "pasantias")==0 )
        {

            printf("\nEl empleado %s esta de pasantias, segun su contrato, su sueldo final es de %f\n", e[i].nombre, sueldoFinal);
        }

        else if(strcmp(e[i].contrato, "fijo")==0 || strcmp(e[i].contrato, "FIJO")==0 || strcmp(e[i].contrato, "Fijo")==0)
        {
            sueldoFinal += 500;
            printf("\nEl empleado %s tiene un contrato de tiempo fijo, segun su contrato, su sueldo final es de %f\n", e[i].nombre, sueldoFinal);
        }

        else if(strcmp(e[i].contrato, "limitado")==0 || strcmp(e[i].contrato, "LIMITADO")==0 || strcmp(e[i].contrato, "Limitado")==0)
        {
            sueldoFinal += 200;
            printf("\nEl empleado %s tiene un contrato de tiempo limitado, segun su contrato, su sueldo final es de %f\n", e[i].nombre, sueldoFinal);
        }
        else
        {
            printf("\n%s no tiene un contrato definido o hubo un error\n", e[i].nombre);

        }

    }

}



void buscar_empleado_por_contrato(struct empleados e[], int tam)
{
    char contrato_buscar[20];
    int encontrado;

        printf("ingrese un tipo de contrato: \n");
        scanf("%s", contrato_buscar);


    for(int i=0; i<tam; i++)
    {
        if(strcasecmp(e[i].contrato, contrato_buscar)==0)  //strcmp comparar || strcasecmp comparar sin imprtar mayusculas
        {
            printf("nombre: %s, apellido: %s, contrato buscado: %s\n", e[i].nombre, e[i].apellido, contrato_buscar);
             encontrado++;
        }
    }
        if(!encontrado)
        {
            printf("no se encontro empleado con el contrato: %s\n", contrato_buscar);
        }
}

void buscar_empleado_por_nombre(struct empleados e[], int tam)
{
    char nombre_buscar[20];
    char apellido_buscar[20];
    int encontrado=0;

        printf("ingrese el nombre del empleado: \n");
        scanf("%s", nombre_buscar);

        printf("ingrese el apellido del empleado: \n");
        scanf("%s", apellido_buscar);


    for(int i=0; i<tam; i++)
    {
        if(strcmp(e[i].nombre, nombre_buscar)==0 && strcmp(e[i].apellido,apellido_buscar)==0)
        {
            printf("nombre: %s, apellido: %s CONTRATO: %s\n", e[i].nombre, e[i].apellido, e[i].contrato);
             encontrado = 1;
        }
    }
        if(!encontrado)
        {
            printf("no se encontro empleado\n");
        }
}

void menu_principal(struct empleados e[], int tam)
{


        int opcion;

        do{
            printf("\nMENU PRINCIPAL elige tu opcion");
            printf("\n1-MOSTRAR DATOS DE EMPLEADOS\n");
            printf("2-Calcular sueldo de empleados segun su cargo\n");
            printf("3-Buscar empleado por contrato\n");
            printf("4_Buscar empleado por nombre y apellido\n");
            printf("5-SALIR\n");
            printf("SU OPCION?...");

            scanf("%d", &opcion);

            switch(opcion)
            {

                case 1: mostrar_datos(e,tam);break;
                case 2: sueldo_final(e,tam);break;
                case 3: buscar_empleado_por_contrato(e, tam);break;
                case 4: buscar_empleado_por_nombre(e,tam);break;
                case 5: salir(e,tam);break;
                default: printf("\nOPCION INCORRECTA");
            }

        }while(opcion!=5);

    }

    void salir(struct empleados e[], int tam)
    {
        char salir[10];


    //con RETUTN=NO FOR NO WHILE

        /*printf("escriba la palabra salir para poder salir\n");
        scanf("%9s", salir);


        if(strcmp(salir, "salir")==0||strcmp(salir,"SALIR")==0)
        {
           printf("saliendo!!\n");
            return;
        }

    }*/

    //CON BREAK = WHILE(1) Y BREAK DEBAJO DEL IF

        while(1) {
        printf("Escriba la palabra 'salir' para poder salir\n");
        scanf("%s", salir);

        if(strcasecmp(salir, "salir") ==0)
            {
            printf("Saliendo!!\n");
            break;

            }
        else
        {
            printf("Por favor, escriba bien la palabra solicitada\n");
        }
    }
}


