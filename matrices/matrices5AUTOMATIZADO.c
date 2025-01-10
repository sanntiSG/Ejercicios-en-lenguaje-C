#include<stdio.h>

int main()
{
    int matriz[][3]={ {7,8,9} , {4,5,6} , {1,2,3} };
    int f=0;
    int c=0;
    //matriz[f][c]

    for(f=0;f<3;f++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",matriz[f][c]);
        }
        printf("\n");
    }




return(0);
}
