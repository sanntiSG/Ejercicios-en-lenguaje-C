#include<stdio.h>
/*Desarrolla un programa en C que haga lo siguiente:
Permita al usuario ingresar 5 calificaciones de un alumno.
Almacene las calificaciones en un arreglo.
Calcule la suma y el promedio de las calificaciones.
Determine y muestre la calificación más alta y la más baja.
Imprima el promedio, la calificación más alta y la calificación más baja.*/
#define TAM 5
int main()
{
 int calificaciones[TAM]={};
 int i=0;
 int suma=0;
 int contador=0;
 float promedio;

    printf("ingrese 5 calificaciones de un alumno\n");

    for(i=0; i<TAM; i++){

    scanf("%d", &(calificaciones[i]));
    suma=suma+calificaciones[i];
    contador=contador + 1;
    }

    printf("la suma de las calificaciones es: %d\n", suma);


    promedio = ((float)suma) / ((float)contador);
    printf("el promedio de %d sobre %d es: %f\n", suma, contador, promedio);

    //nota mas alta y baja

    int max=calificaciones[0];//max=posicion 0 del array
    int min=calificaciones[0];

    for(i=0; i<TAM; i++){
        if(calificaciones[i]>max){ //si alguna calificacion de todo mi recorrido es > que max, encontre un MAX y
            max=calificaciones[i]; //actualizo su valor anterior ya que max valia = posicion 0 del array osea primer numero ingresado
        }
        if (calificaciones[i]<min){
            calificaciones[i]=min;
        }

    }
    printf("la nota mas alta es: %d\n", max);
    printf("la nota mas baja es: %d\n", min);


return 0;
}
