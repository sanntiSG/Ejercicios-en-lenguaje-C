#include<stdio.h>

int main ()
{
    int nums = 0;
    
    printf("Ingrese una serie de n�meros reales. Cuando encuentre un valor mayor que 283, el programa dejar� de leer e informar� cu�ntos elementos tiene la serie.\n");

    while(1)
    {
        float num;
        printf("Ingrese un n�mero: ");
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

