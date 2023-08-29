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

   // printf("%d , %d",arre[0],*ptr);
    system("pause");
    capicua(arre,ptr,i,j);

    /*  int num,pote;
      printf("Ingrese un numero a calcular\n");
      scanf("%d",&num);
      printf("Ingrese potencia\n");
      scanf("%d",&pote);
      printf("El resultado es : %d",potencia(num,pote));
      */
    return 0;
}


int potencia(int base,int pot)
{

    if(pot==0)
    {
        base=1;


    }
    else
    {

        base= base*potencia(base,pot-1);

    }
    if(pot<0)
    {
        return (1/base);
    }
    else
    {
        return base;
    }
}

void capicua(int arre[],int *ptr,int i,int j)
{
           if(i==j){
                printf("Es capicua \n");
               system("pause");
            }



        if( arre[i] == *ptr)
        {
            printf("arre %d, PTR %d",arre[i],*ptr);
            printf("\n %d , %d\n\n",i,j);
            i++;
            ptr--;
            j--;
            capicua(arre,ptr,i,j);

        }
          else{
            printf("NO ES CAPICUA\n");
        }


}




