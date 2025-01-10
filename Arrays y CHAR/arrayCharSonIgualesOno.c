#include<stdio.h>

int main()
{
    char palabra_1[100];
    char palabra_2[100];

    int contador_1=0;
    int contador_2=0;
    int posicion_1=0;
    int posicion_2=0;
    int total;
    int igualdad = 1;

    printf("ingrese primer palabra: ");
    scanf("%s", palabra_1);//EL NOMBRE DE UN ARRAY EQUVALE A SU PRIMER POSICION. NO ES NECESARIO &

    printf("ingrese segunda palabra: ");
    scanf("%s", palabra_2);



    while(palabra_1[posicion_1] != '\0')
    {
        contador_1 = contador_1 + 1;
        posicion_1 = posicion_1 + 1;
    }

    printf("La cantidad de caracteres de %s es de %d\n", palabra_1, contador_1);


    while(palabra_2[posicion_2] != '\0')
    {
        contador_2 = contador_2 + 1;
        posicion_2 = posicion_2 + 1;
    }

    printf("La cantidad de caracteres de %s es de %d\n", palabra_2, contador_2);

    total = contador_1 + contador_2;
    printf("la cantidad total de caracteres es de %d\n", total);


   if (contador_1 == contador_2)
    {
        printf("Tienen la misma cantidad de caracteres\n");

        for (int i = 0; i < posicion_1; i++)
        {
            if (palabra_1[i] != palabra_2[i])
            {
                igualdad = 0;
            }
        }

        if (igualdad)
        {
            printf("Las palabras son iguales\n");
        }
        else
        {
            printf("Las palabras no son iguales\n");
        }
    }

    else
    {
        printf("no tienen la misma cantidad de caracteres\n");
    }



 return(0);


}
