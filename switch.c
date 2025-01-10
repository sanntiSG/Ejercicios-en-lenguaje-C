#include <stdio.h>

int main ()
{
    int dia=0;
    printf("ingrese un dia de la semana com numeros\n");
    scanf("%d",&dia);

    switch(dia)
{
    case 1: printf("lunes\n");break;
    case 2: printf("martes\n");break;
    case 3: printf("miercoles\n");break;
    case 4: printf("jueves\n");break;
    case 5: printf("viernes\n");break;
    case 6: printf("sabado\n");break;
    case 7: printf("domingo\n");break;
    default: printf("error\n");break;
}

    return (0);

}
