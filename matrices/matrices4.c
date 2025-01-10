#include<stdio.h>

int main()
{
    int matriz[][3]={ {7,8,9} , {4,5,6} , {1,2,3} };
    int f=0;
    //matriz[f][c]

    for(f=0;f<3;f++)
    {
        printf("%d ",matriz[f][0]);
        printf("%d ",matriz[f][1]);
        printf("%d\n",matriz[f][2]);
    }




return(0);
}
