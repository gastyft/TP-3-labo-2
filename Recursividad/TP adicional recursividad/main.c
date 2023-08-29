#include <stdio.h>
#include <stdlib.h>
#define DIM 5
#include "../../Firma/Firma.h"
int suma(int arre[],int i, int suma1);
int contar(int arre[DIM],int i,int contador);
int esPrimoRecursivo(int num, int divisor);
int contar_arreglo_mayor_a_parametro(int arre[DIM],int i, int num,int conta);
int main()
{
    system("COLOR B");


    int i=0;

  //  int suma1=0;
  //  int contador=0;
    //int cont=0;
    int num=3;

   int arre[DIM]= {1,1,4,7,3};
   // printf("La suma es %d \n", suma(arre,i,suma1));

  //  printf("El contador devuelve %d \n",contar(arre,i,contador));
/*     int numero = 7;
    int respuesta=esPrimoRecursivo(numero,numero-1);
    if(respuesta)
    {
       printf("Es primo...\n");
    }
    else{
        printf("NO es primo...\n");
    };
    int conta=0;
    printf("La cantidad de datos mayor a %d es %d \n",num,contar_arreglo_mayor_a_parametro(arre,i,num,conta));
*/








firma();
    return 0;
}

/** Realizar una funcion recursiva que sume los digitos de un numero entero

Realizar una funcion que cuente la cantidad dedigitos de un nro entero

Realizar una funcion que indique si un numero el primo o no

Realizar una funcion que cuente de un arreglo enteros, la cantidad de numeros mayores a uno pasado por parametro

Realizar una funcion que invierta los digitos de un numero entero (No lo supe hacer)

Realizar una funcion que, dado un arreglo de enteros ordenado, busque un elemento en dicho arreglo (implementar metodo de busqueda binaria)

*/

int suma(int arre[DIM], int i, int suma1)
{

    if(i<=DIM)
    {
        suma1=arre[i] +suma(arre,i+1,suma1);


    }
    return suma1;

}
int contar(int arre[DIM],int i,int contador)
{
    if(i<=DIM)
    {
        contador=  1+  contar(arre,i+1,contador);
    }
    return contador;
}


int esPrimoRecursivo(int num, int divisor)
{
    int rta;
    if (divisor <= 1)
    {
        rta = 1;///(llegue a 1 dividiendo por todos los antecesores y nunca obtuve resto=0, por lo tanto es primo)
    }
    else
    {
        if(num % divisor == 0)
        {
            rta = 0;///(alguna de las divisiones fue !=0, por lo tanto tiene algun divisor, por lo tanto no es primo)
        }
        else
        {
            rta = esPrimoRecursivo(num, divisor - 1);///si no se dio ninguno de los anteriores, debo seguir averiguando...
        }
    }
    return rta;
}


int contar_arreglo_mayor_a_parametro(int arre[DIM],int i, int num,int conta)
{

    if(i<=DIM){
        if(arre[i]>num){
            conta= 1+ contar_arreglo_mayor_a_parametro(arre,i+1,num,conta);
        }
        else{
            conta=contar_arreglo_mayor_a_parametro(arre,i+1,num,conta);
        }
    }
    return conta;
}



