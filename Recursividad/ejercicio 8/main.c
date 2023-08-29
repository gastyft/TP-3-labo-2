#include <stdio.h>
#include <stdlib.h>
#define DIM 5


float prom(int arre[DIM],float validos,int i);

int main()
{
    system("COLOR B");
    int arre[DIM]= {9,9,9,8,8};
    float validos=4;
    int i=0;
    printf("El promedio es %.2f",prom(arre,validos,i));

    return 0;
}


float prom(int arre[DIM],float validos,int i)
{
    float suma;
    if(i<validos)
    {

        suma=(float)arre[i]/validos+ prom(arre,validos,i+1);

    }

    return suma;
}
