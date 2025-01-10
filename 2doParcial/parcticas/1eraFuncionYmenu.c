//FUNCIONES Y UN MENU

#include<stdio.h>


void menu();
int main()
{
    menu();



return 0;
}

void menu()
{
    int opcion;
    do{
    printf("\nmenu del ojete\n");
    printf("\n1-opcion 1\n");
    printf("\n2-opcion2\n");
    printf("\n3-salir\n");
    printf("\neleji gato\n");
    scanf("%d", &opcion);

    switch(opcion){

    case 1: printf("opcion 1 es: tu puta madre\n");break;
    case 2: printf("opcion 2 es: cojer\n");break;
    case 3: printf("chau maricon\n");break;
    }

    }while(opcion!=3);

}
