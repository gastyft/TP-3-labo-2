#include <stdio.h>
#include <stdlib.h>
#define DIM 6

/// Recorrer un arreglo comenzando desde la posición 0 y mostrar sus elementos en forma invertida (recursivo).

void arreglo(int arre[DIM],int validos,int i);

int main()
{
    system("COLOR B");
    int arre[DIM]= {1,2,3,4,5};
    int i=0, validos=5;

    arreglo(arre,validos,i);
    return 0;
}
/// NO FUNCIONA
void arreglo(int arre[DIM],int validos,int i)
{
    if(i==validos-1)
    {
     printf("%d \n", arre[i]);
    }
    else{
        arreglo(arre,validos,i+1);
        printf("%d \n",arre[i]);
    }

}
