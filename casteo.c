#include <stdio.h>

int main ()
{

int x=0;
int y=0;
float resultado=0;

printf("ingrese x:\n");
scanf("%d",&x);
printf("ingrese y\n");
scanf("%d",&y);

resultado=((float)x)/((float)y);

printf("el resultado es %f\n" ,resultado);

return(0);

}
