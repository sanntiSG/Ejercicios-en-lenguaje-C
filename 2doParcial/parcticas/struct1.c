/*Utilizando un struct conformado por: Nombre, Apellido, dni, nota1, nota2 y promedio,
solicitar el:
Ingreso de 10 alumnos e indicar por pantalla todos los datos del struct correspondiente al alumno con mayor promedio.
*/
#include<stdio.h>
#define TAM 3

struct alumno{
char  nombre[15];
char apellido[20];
char dni[10+1];
float nota1;
float nota2;
float promedio;
};

//no devuelve nada    NOMBRE    (recibre el struct con su nombre y asginamos un paramentro con el cual trbajaremos EJ= "a"
//     VOID        CARGAR_DATOS     (STRUCT ALUMNO a []);
void cargar_datos(struct alumno a[]);
void mostrar_datos(struct alumno a[], int tam);

int main()
{

    struct alumno alumnos[TAM];
    cargar_datos(alumnos);
    mostrar_datos(alumnos, TAM);

    return 0;
}

void cargar_datos(struct alumno a[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Ingresar nombre del alumno %d:\n", i + 1);
        scanf("%s", a[i].nombre);
        printf("Ingresar apellido del alumno %d:\n", i + 1);
        scanf("%s", a[i].apellido);
        printf("Ingresar DNI del alumno %d:\n", i + 1);
        scanf("%s", a[i].dni);
        printf("Ingresar nota 1 del alumno %d:\n", i + 1);
        scanf("%f", &a[i].nota1);
        printf("Ingresar nota 2 del alumno %d:\n", i + 1);
        scanf("%f", &a[i].nota2);
    }
}

void mostrar_datos(struct alumno a[], int tam){
//trabajaremos con nuestro nuevo nombre del struct= ALUMNOS.
    int max_promedio=0;
    int indice_max_promedio=0;
    for(int i = 0; i<TAM; i++)
    {
        a[i].promedio= (a[i].nota1 + a[i].nota2) / 2;

        if(a[i].promedio>max_promedio)
            {
                max_promedio=a[i].promedio;
                indice_max_promedio=i;
        }

    }


    printf("\n datos del struct del alumno con mejor promedio: \n");
    printf("\n nombre del alumno con mejor promedio: %s\n", a[indice_max_promedio].nombre);
    printf("\n apellido del alumno con mejor promedio: %s\n", a[indice_max_promedio].apellido);
    printf("\n DNI del alumno con mejor promedio: %s\n", a[indice_max_promedio].dni);
    printf("\n La nota 1  del alumno con mejor promedio: %f\n", a[indice_max_promedio].nota1);
    printf("\n La nota del alumno con mejor promedio: %f\n", a[indice_max_promedio].nota2);
    printf("\n su promedio es de: %f\n", a[indice_max_promedio].promedio);

}
