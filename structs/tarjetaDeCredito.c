#include<stdio.h>

struct tarjeta
{
    char num_tarjeta[16+1];
    char num_seguridad[3+1];
    char vencimiento[5+1];
    char nom_titular[20+1];
    char empresa[10];
};

struct persona
{
    int edad;
    int altura;
    char nombre[10];
    struct tarjeta t1;


};
int main()
{

struct persona p1;
p1.edad=38;
strcpy(p1.nombre, "santiago");
strcpy(p1.t1.empresa, "visa");
strcpy(p1.t1.vencimiento, "05/24");
strcpy(p1.t1.nom_titular, "santiago");

printf("edad: %d, nombre: %s, tarjeta: %s, vence: %s, titular: %s", p1.edad, p1.nombre, p1.t1.empresa, p1.t1.vencimiento, p1.t1.nom_titular);

return(0);
}
