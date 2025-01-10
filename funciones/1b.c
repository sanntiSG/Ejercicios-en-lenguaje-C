#include<stdio.h>
/*Realizar una función que:
Reciba un número y muestre un mensaje indicando si es positivo o negativo, 0*/

//recibe //nombre //devuelve


int sumar(int a, int b);

int main()
{
    int num1=10;
    int num2=5;
    int resultado;

    resultado= sumar(num1, num2);
    printf("La sumatoria entre %d y %d es %d\n", num1, num2, resultado);
    return(0);

}

int sumar(int a, int b)
{

return (a + b);
}






