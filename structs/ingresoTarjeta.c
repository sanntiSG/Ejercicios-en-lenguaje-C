#include<stdio.h>
#include<string.h>

struct tarjeta
{
    char empresa[10];
    char vencimiento[5+1];
};


struct persona
{
    char nombre[10];
    char dni[10+1];
    struct tarjeta t1;
};


void cargar_datos(struct persona c[]);
void mostrar_datos(struct persona c[],int tam);

#define TAM 10

int main()
{
    int a;

  
    cargar_datos(clientes);
    mostrar_datos(clientes,TAM);


    //scanf("%s %s",nombre,apellido);   //leer separado
    //fgets(nombre_apellido,20,stdin);  //leer todo junto

return(0);
}

void mostrar_datos(struct persona c[],int tam)
{
    int i=0;
    printf("%10s\t%10s\t%10s\t%10s\n" ,"Nombre" ,"DNI" ,"Empresa" ,"Vencimiento");

        for (i= 0; i < tam; i++)
    {
        if( strcmp(c[i].nombre , "####")!=0 )
        {
        printf( "%10s" ,c[i].nombre);
        printf( "\t %10s" ,c[i].dni);
        printf( "\t %10s" ,c[i].t1.empresa);
        printf( "\t %10s\n" ,c[i].t1.vencimiento);
        }
    }
}


void cargar_datos(struct persona c[])
{
    int i=0;
    for(i=0;i<TAM;i++)
    {
    strcpy(c[i].nombre,"####");//Invalido ####
    }
    strcpy(c[0].nombre,"Juan");
    strcpy(c[1].nombre,"Pedro");
    strcpy(c[2].nombre,"Jose");
    strcpy(c[3].nombre,"Pablo");
    
    strcpy(c[0].dni,"11.111.111");
    strcpy(c[1].dni,"22.222.222");
    strcpy(c[2].dni,"33.333.333");
    strcpy(c[3].dni,"44.444.444");

    strcpy(c[0].t1.empresa,"Visa");
    strcpy(c[1].t1.empresa,"Master");
    strcpy(c[2].t1.empresa,"Maestro");
    strcpy(c[3].t1.empresa,"Dinners");

    strcpy(c[0].t1.vencimiento,"05/30");
    strcpy(c[1].t1.vencimiento,"02/33");
    strcpy(c[2].t1.vencimiento,"01/25");
    strcpy(c[3].t1.vencimiento,"03/26");

}
