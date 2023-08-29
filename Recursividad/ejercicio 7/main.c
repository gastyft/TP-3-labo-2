#include <stdio.h>
#include <stdlib.h>
#define DIM 5


/// Buscar el menor elemento de un arreglo en forma recursiva.
int menor(int arre[DIM],int menr,int i);

int main()
{
    system("COLOR B");

    int arre[DIM]= {10,5,0,1,3};
    int menr=arre[0];
    int i=0;

    printf("El menor es: %d",menor(arre,menr,i));

    return 0;
}

/// Modificar ESTA MAL HECHO
int menor(int arre[DIM],int menr,int i)
{


    if(arre[i]<= menr )
    {
        menr=arre[i];
        i++;
        menor(arre,menr,i);
    }

    else if(i<=DIM)
    {
        i++;
        menor(arre,menr,i);
    }
    else
    {
        return menr;
    }

}
