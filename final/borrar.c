#include<stdio.h>
#include <string.h>

int main()
{
    char nombre[20];
    char codigo [20];

    while(1)
    {
    printf("ingrese nombre\n");
    scanf("%s", nombre);

    printf("ingrese codigo del producto\n");
    scanf("%s", codigo);

    if(strcasecmp(codigo, "99")==0)
    {
        printf("se ingreso el codigo 99, no se pueden cargar mas productos\n");
        break;
    }
    }


return 0;
}
