#include <stdio.h>

void menu();
void Sumar(int A1, int B1);
void Restar(int A1, int B1);
void Multiplicar(int A1, int B1);
void Dividir(int A1, int B1);

int main()
{
	menu();


	return 0;
}

void menu(){

	int opciones;
	printf("1. Sumar ");
	printf("2. Restar ");
	printf("3. Multiplicar ");
	printf("4. Dividir ");

	printf("\Escriba el numero que desea: ");
	scanf("%i" , &opciones);

	int A1 , B1;
	printf("\Ponga el valor 1: ");
	scanf("%i" , &A1);

	printf("\Ponga el valor2: ");
	scanf("%i" , &B1);

	switch (opciones)
	{
		case 1: Sumar(A1,B1);
		break;
		case 2: Restar(A1,B1);
		break;
		case 3: Multiplicar(A1,B1);
		break;
		case 4: Dividir(A1,B1);
		break;
		default:
		printf("Error");

	}

}
void Sumar(int A1, int B1)
{

printf("El resultado de la suma es: %i " , A1 + B1);

}
void Restar(int A1, int B1)
{

printf("El resultado de la resta es: %i " , A1- B1);

}

void Multiplicar(int A1, int B1)
{

printf("El resultado de Multiplicación es: %i " , A1 * B1);

}

void Dividir(int A1, int B1)
{

printf("El resultado de división es: %i " , A1 / B1);

}
