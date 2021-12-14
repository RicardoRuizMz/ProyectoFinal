#include <stdio.h>
#include <stdlib.h>
int func_multiplica(int valor1, int valor2);
int main()
{
	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;

	printf("ingrese el primer valor:");
	scanf_s("%i", &numero1);
    printf("ingrese el segundo valor:");
	scanf_s("%i", &numero2);

	//resultado = numero1 + numero2;
	resultado = func_multiplica(numero1, numero2);
	printf("el resultado es: %d", resultado);
	return 0;

}
int func_multiplica(int valor1, int valor2) {
	int multiplica = 0;
	multiplica = valor1 * valor2;

	return multiplica;
}
