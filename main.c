#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "operacoes.h"


int main() {

	setlocale(LC_ALL, "Portuguese");

	int escolha;
	float num1, num2, num3, delta = 0, r1, r2;


	printf("escolha a operação:\n");
	printf(" 1: soma\n 2: subtração\n 3: divisão\n 4: multiplicação\n 5: bhaskara\n");
	scanf_s("%i", &escolha);
	fflush(stdin);

	if (escolha < 5) {
		printf("escolha o primerio numero\n");
		scanf_s("%f", &num1);
		fflush(stdin);

		printf("escolha o segundo numero\n");
		scanf_s("%f", &num2);
		fflush(stdin);

	}
	else {
		printf("escolha o primerio numero\n");
		scanf_s("%f", &num1);
		fflush(stdin);

		printf("escolha o segundo numero\n");
		scanf_s("%f", &num2);
		fflush(stdin);

		printf("escolha o terceiro numero\n");
		scanf_s("%f", &num3);
		fflush(stdin);


	}

	system("cls");
	switch (escolha) {

	case 1: {

		printf("%.2f\n", soma(num1, num2));
		
		break;

	}
	case 2: {
		
		printf("%.2f\n", subtracao(num1, num2));

		break;

	}
	case 3: {

		printf("%.2f\n", divisao(num1, num2));

		break;

	}
	case 4: {

		printf("%.2f\n", multiplicacao(num1, num2));

		break;
	}
	case 5: {
		
		delta = bhaskara(num1, num2, num3, delta);

		if (delta <= 0 || num1 == 0 || num2 == 0 || num3 == 0) {
			printf("não e possivel calcular\n");
		}
		else {

			r1 = ((-num2) + (sqrt(delta))) / (2 * num1);
			r2 = ((-num2) - (sqrt(delta))) / (2 * num1);

			printf("primeiro r:%.2f\n", r1);
			printf("segundo r:%.2f\n", r2);

		}

		

		break;

	}
	}
}