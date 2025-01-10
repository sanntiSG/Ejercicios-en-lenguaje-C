
#include<stdio.h>
/*Escribir un programa que calcule el promedio de 10 valores numéricos
ingresados por teclado.
*/

int main()
{
    int numero;
    float promedio;
    float suma;
     for(int i = 0; i<10; i++){

    printf("ingrese valores de numeros enteros hasta llegar a 10 valoes\n");
    scanf("%d", &numero);
   suma+=numero;
     }

    promedio=suma/10;
        printf("el promedio es %f", promedio);




    return 0;
}
