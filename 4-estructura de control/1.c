#include<stdio.h>

int main ()
{
    int nums = 0;
    
    printf("Ingrese una serie de números reales. Cuando encuentre un valor mayor que 283, el programa dejará de leer e informará cuántos elementos tiene la serie.\n");

    while(1)
    {
        float num;
        printf("Ingrese un número: ");
        scanf("%f", &num);
        
        if(num > 283)
        {
            break;
        }
        
        nums++;
    }
    
    printf("La serie tiene %d elementos.\n", nums);

    return 0;
}

