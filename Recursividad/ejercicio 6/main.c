#include <stdio.h>
#include <stdlib.h>
#define DIM 5



///Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.


int sumar (int arre[DIM],int suma, int i);
int main()
{
    system("COLOR B");
    int arre[DIM]={1,1,1,1,2};
    int suma=0;
    int i=0;
    printf("La suma es %d",sumar(arre,suma,i));
    return 0;
}

int sumar (int arre[DIM],int suma,int i)
{
    if(arre[i]<DIM){
    suma+=arre[i];

    i++;
    sumar(arre,suma,i);
    }
    else {
    return suma;
    }
}
