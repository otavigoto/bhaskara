#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operacoes.h"

float soma(float a, float b) {

	return a + b;
}
float subtracao(float a, float b) {

	return a - b;
}
float divisao(float a, float b) {

	return a / b;
}
float multiplicacao(float a, float b) {

	return a * b;
}
float bhaskara(float a, float b, float c, float delta){


	delta = (b * b) - (4 * a * c);

	return delta;
}