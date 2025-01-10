/*Se requiere escribir un programa que use struct, y que pida
el ingreso del nombre, apellido, sexo y la edad, luego que muestre
por pantalla si es hombre o mujer mayor o menor de edad,  y con su nombre y apellido.
*/
#include<stdio.h>
#define TAM 3

struct datos{

char nombre[20];
char apellido[20];
char sexo; //1 solo CHAR (no es string %S)
int edad;
};

void cargar_datos(struct datos d []);
void mostrar_datos(struct datos d[], int tam);

int main()
{
    struct datos persona [TAM];
    cargar_datos (persona);
    mostrar_datos(persona, TAM);

    return 0;
}

void cargar_datos (struct datos d[])
{
   //loop para que cargue las veces que me diga el TAM
   for (int i=0; i<TAM; i++)
   {
       printf("\ningresar nombre de la persona %d\n", i+1);
       scanf("%s", d[i].nombre);
       printf("\ningresar apellido de la persona %d\n", i+1);
       scanf("%s", d[i].apellido);
       printf("\ningresar sexo de la persona (f=femenino) (m=masculino) %d\n", i+1);
       scanf(" %c", &d[i].sexo);//es un %c ya que es 1 solo char, y se deja un espacio para leer el salto de linea
       printf("\ningresar edad de la persona %d\n", i+1);
       scanf("%d", &d[i].edad);
   }

}

void mostrar_datos(struct datos d[], int tam)
{
    for (int i = 0; i < tam; i++)
        {
        printf("\n%s %s ", d[i].nombre, d[i].apellido);

        if (d[i].sexo == 'm' || d[i].sexo == 'M')
            {
            printf("es hombre ");

        } else if (d[i].sexo == 'f' || d[i].sexo == 'F')
        {
            printf("es mujer ");
        }

        if (d[i].edad >= 18) {
            printf("mayor de edad");
        } else {
            printf("menor de edad");
        }
    }
}





