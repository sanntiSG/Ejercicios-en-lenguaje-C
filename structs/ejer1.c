#include<stdio.h>

struct datos
{
    char nombre[10];
    char apellido[10];
    char dni[10];
    float nota1;
    float nota2;
    float promedio;
};
//[devuelve]  [nombre]  [y recibe... liena 3 + parametro=nombre que quiera asignar]
void cargar_datos(struct datos alumno[]);
void mostrar_mejor_alumno(struct datos alumno[], int tam);

#define TAM 2
 int main()

 //struct definido arriba + nombre de ARRAY que yo eliga
 {
     struct datos alumnos[TAM];
     cargar_datos(alumnos);
     mostrar_mejor_alumno(alumnos, TAM);

return(0);
 }
 //IMPLEMENTACION DE FUNCIONES

void cargar_datos(struct datos alumno [])
{
    int i=0;
    for(i=0;i<TAM;i++){

    printf("escribe el nombre\n");
    scanf("%s", alumno[i].nombre);

        printf("escribe el apellido\n");
    scanf("%s", alumno[i].apellido);

        printf("escribe el dni\n");
    scanf("%s", alumno[i].dni);

        printf("escribe la nota 1\n");
    scanf("%f", &alumno[i].nota1);

            printf("escribe la nota 2\n");
    scanf("%f", &alumno[i].nota2);

    alumno[i].promedio=(alumno[i].nota1 + alumno[i].nota2) / 2;
    }
}


void mostrar_mejor_alumno(struct datos alumno[], int tam) {
    int i;
    int mejor_prom = 0;
    for (i = 0; i < tam; i++) {
        if (alumno[i].promedio > alumno[mejor_prom].promedio) {
            mejor_prom = i;
        }
    }

    printf("\nEl alumno con el promedio mas alto es:\n");
    printf("%10s\t%10s\t%10s\t%10s\t%10s\t%10s\n", "Nombre", "Apellido", "DNI", "Nota 1", "Nota 2", "Promedio");
    printf("%10s\t%10s\t%10s\t%10.2f\t%10.2f\t%10.2f\n",
           alumno[mejor_prom].nombre,
           alumno[mejor_prom].apellido,
           alumno[mejor_prom].dni,
           alumno[mejor_prom].nota1,
           alumno[mejor_prom].nota2,
           alumno[mejor_prom].promedio);
}
