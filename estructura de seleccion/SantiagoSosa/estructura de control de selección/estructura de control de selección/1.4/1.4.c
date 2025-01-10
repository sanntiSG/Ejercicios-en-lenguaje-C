#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.4

int main() {
/*Realiza un pograma que Le reste 1 , a un número C mientras este sea mayor o igual a 0
*/

float c;

c;//?????

printf("ingrese un numero c\n");
scanf("%f", &c);


if (c>=0){
    printf("el numero %f al restarle 1, es: %f\n", c, c-1);
}

else if (c<0){
    printf("error, el numero tiene que ser mayor o igual que 0\n");
}

return (0);
}
