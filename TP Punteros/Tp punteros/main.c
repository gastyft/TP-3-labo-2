#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *arreglo_dinamico(int dim);
char *duplicado(const char *str);
int *clonarArregloDinamico(int *arre, int dim);
char *crear_cadena_dinamica(const char*str);

int main()
{
    system("COLOR B");
    char str[]="Este es un string Duplicado";
    char *dupli;

    dupli = duplicado(str);
    printf("La copia es: %s \n",dupli);

    int dim= 5;
    int *ptr= arreglo_dinamico(dim);

    for(int i=0; i<8; i++)
    {
        *ptr=i *2;
        printf("%d \n",*ptr);

    }
    printf("%d \n",*arreglo_dinamico(dim));




    int numeros[] = {70, 4, 6, 8, 10,0};
    int dim1 = sizeof(numeros) / sizeof(numeros[9]);
    printf("%d",dim);
    int *copia = clonarArregloDinamico(numeros, dim1);
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", copia[i]);
    }
    printf("\n");
    free(copia);




    char *str1 ="Lic en Sistemas informaticos \n ";


    char *copia1 = crear_cadena_dinamica(str1);
    printf("El profe es: %s \n",copia1);



    int num = 42;
    int *ptr1 = &num; // Puntero simple que apunta a 'num'
    int **ptr2 = &ptr1; // Puntero doble que apunta a 'ptr1'
    int ***ptr3 =&ptr2;
    int ****ptr4 =&ptr3;
    printf("Valor de num: %d\n", num);
    printf("Valor apuntado por ptr1: %d\n", *ptr1);
    printf("Valor apuntado por ptr2 (usando puntero doble): %d\n", **ptr2);
    printf("Valor PTR3 (puntero triple) :%d \n",***ptr3);
    printf("Valor PTR4 (puntero cuadruple) :%d \n",****ptr4);
    return 0;

    return 0;
}
int *arreglo_dinamico(int dim)
{
    int *arre= (int*)malloc(sizeof(int)*dim);
    return arre;
}



/**Duplicar Cadena: Duplica una cadena y devuelve un puntero a la nueva cadena.

*/


char *duplicado( const char *str)
{
    char *duplicado = (char *)malloc((strlen(str) + 1) * sizeof(char));

    strcpy(duplicado,str);
    return duplicado;
}

int *clonarArregloDinamico(int *arre, int dim)
{
    int *clon = (int *)malloc(dim * sizeof(int));
    for (int i = 0; i < dim; i++)
    {
        clon[i] = arre[i];
    }
    return clon;
}


char *crear_cadena_dinamica(const char *str)
{

    char *cadena = (char *)malloc((strlen(str)+1) * sizeof(char));

    strcpy(cadena, str);

    return cadena;

}





