#include <stdio.h>
#include <stdlib.h>

int potencia (int base,int pot);
void capicua(int arre[],int *ptr,int i,int j);

int main()
{
    system("COLOR B");
    int i=0,j=4;
    int arre[5]= {1,2,3,2,1};
    int *ptr;
    ptr=&arre[4];


    capicua(arre,ptr,i,j);

    return 0;
}


void capicua(int arre[],int *ptr,int i,int j)
{
    if(i>j)
    {
        printf("Es capicua \n");
    }
    else{
            if(( arre[i] != *ptr)){
                printf("No es capicua");
            }
         else
    {
        i++;
        ptr--;
        j--;
        capicua(arre,ptr,i,j);

    }
    }
}

