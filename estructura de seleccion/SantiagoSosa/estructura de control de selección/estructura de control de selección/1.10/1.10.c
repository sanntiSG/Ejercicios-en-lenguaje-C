#include<stdio.h>

/*Realizar un programa que indique el valor de la entrada al cine
según día de la semana. (Lunes, Martes Jueves precio normal),
 Miércoles 50% precio , viernes sábado y domingo doble precio.*/

int main ()
//1.10
{
    int dia=0;
    int precio;
    precio=1000;

    printf("ingrese un dia de la semana com numeros en donde 1:lunes 2:martes 3:miercoles 4:jueves 5:viernes 6:sabado 7:domingo\n");
    scanf("%d",&dia);

    switch(dia)
{
    case 1: printf("lunes: el precio es de %d\n", precio);break;
    case 2: printf("martes el precio es de %d\n", precio);break;
    case 3: printf("miercoles el precio es de %d\n", precio*50/100);break;
    case 4: printf("jueves el precio es de %d\n", precio);break;
    case 5: printf("viernes el precio es de %d\n", precio*2);break;
    case 6: printf("sabado el precio es de %d\n", precio*2);break;
    case 7: printf("domingo el precio es de %d\n", precio*2);break;
    default: printf("error\n");break;
}

    return (0);

}

