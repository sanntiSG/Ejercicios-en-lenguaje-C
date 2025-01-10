#include<stdio.h>
#define TAM 2

struct alumno
{
    char nombre[20];
    char apellido[20];
    char dni[15];
    float nota1;
    float nota2;
    float promedio;
};
void ingreso(struct alumno a[]);
void mostrar_datos (struct alumno a[], int tam);

int main ()
{
    struct alumno alumnos[TAM];
    ingreso(alumnos);
    mostrar_datos(alumnos, TAM);

    return 0;
}

void ingreso (struct alumno a[])
{
    for (int i=0; i<TAM; i++)
    {
        printf("ingrese nombre del alumno %d\n", i +1);
        scanf("%s", a[i].nombre);
          printf("ingrese apeliido del alumno %d\n", i +1);
        scanf("%s", a[i].apellido);
          printf("ingrese dni del alumno %d\n", i +1);
        scanf("%s", a[i].dni);
          printf("ingrese nota 1 del alumno %d\n", i +1);
        scanf("%f", &a[i].nota1);
          printf("ingrese nota 2 del alumno %d\n", i +1);
        scanf("%f", &a[i].nota2);
    }
}

void mostrar_datos(struct alumno a[], int tam)
{
    float max_prom=0.0;
    int guardar_max_prom=0;

    for(int i = 0 ; i < TAM; i++)
    {

        a[i].promedio=(a[i].nota1 + a[i].nota2) / 2;
        if (a[i].promedio>max_prom)
        {
            max_prom=a[i].promedio;
            guardar_max_prom=i;
        }

    }
        printf("Datos del alumno con mejor promedio:\n");
        printf("nombre: %s\n", a[guardar_max_prom].nombre);
        printf("apellido: %s\n", a[guardar_max_prom].apellido);
        printf("dni: %s\n", a[guardar_max_prom].dni);
        printf("nota 1: %f\n", a[guardar_max_prom].nota1);
        printf("nota 2: %f\n", a[guardar_max_prom].nota2);
        printf("promedio: %f\n", a[guardar_max_prom].promedio);

}




