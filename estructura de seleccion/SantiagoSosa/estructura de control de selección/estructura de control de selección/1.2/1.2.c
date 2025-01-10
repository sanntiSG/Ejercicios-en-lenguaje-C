#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.2

int main() {
/*El usuario ingresara el stock de un producto, si hay más de 40 unidades, indicar alto stock,
 si hay menos de 10 indicar bajo stock.*/


int stock;
int alto;
int bajo;

stock=0;
alto=40;
bajo=10;


printf("ingrese el stock \n");
scanf("%d", &stock);

if (stock>alto){
    printf("alto stock");
}

else if (stock<bajo){
    printf("bajo stock");
}

 else {
        printf("Hay %d unidades de stock: stock normal", stock);//unidad no se imprime en pantalla
    }

return (0);
}
