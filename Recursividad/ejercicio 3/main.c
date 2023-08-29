#include <stdio.h>
#include <stdlib.h>
#define DIM 6


/// Recorrer un arreglo y mostrar sus elementos en forma recursiva.
void arreglo(int arre[DIM],int validos);

int main()
{
    int validos=0;
   system("COLOR B");
int arre[DIM]={1,2,3,4,5,6};
arreglo(arre,validos);
    return 0;
}


void arreglo(int arre[DIM],int validos)
{

if(validos<DIM){
printf("%d \n",arre[validos]);
validos++;
arreglo(arre,validos);
}


}
