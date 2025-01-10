#include<stdio.h>

int main()
{
    int matriz[][3]={ {7,8,9} , {4,5,6} , {1,2,3} };

    //matriz[f][c]

    printf("%d ",matriz[0][0]);
    printf("%d ",matriz[0][1]);
    printf("%d\n",matriz[0][2]);

    printf("%d ",matriz[1][0]);
    printf("%d ",matriz[1][1]);
    printf("%d\n",matriz[1][2]);

    printf("%d ",matriz[2][0]);
    printf("%d ",matriz[2][1]);
    printf("%d\n",matriz[2][2]);

return(0);
}
