#include<stdio.h>

int main()
{
    int cantidad=0;

    printf("Escribe la cantidad de veces\n");
    scanf("%d",&cantidad);

    for (int i = 0; i < cantidad; i++) /*nueva variable I, comienza en 0 y mientras
                                     I sea menor que el numero ingresado se sumara hasta llegar
                                     al numero ingresado por el usuario*/
    {
        printf("Hola mundo\n");
    }


return(0);
}
