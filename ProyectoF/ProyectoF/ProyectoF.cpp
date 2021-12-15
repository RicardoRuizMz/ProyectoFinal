#include <stdio.h>
#include <iostream>
#include "ProyectoF.h"
int main(int argc,char*argv[])
{
    //Mandar a llamar Funcion Resta
    int Num1 = 2;
    int Num2 = 8;
    resta(Num1,Num2);
    //Mandar a llamar Funcion Suma
    int f = 5,
        z = 6;
    int resultado;
    resultado=suma(f, z);
    printf("\nEl resultado de la suma es: %i", resultado);
    //Mandar a llamar Funcion Multiplica
    int numero1 = 7;
    int numero2 = 3;
    resultado = func_multiplica(numero1, numero2);
    printf("\nEl resultado de la multiplicacion es: %d", resultado);


    return 0;
}
