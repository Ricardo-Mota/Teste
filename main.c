#include "calc1.h"
#include "calc2.h"
#include <stdio.h>

int main()
{
	float res;

	res = soma(4,8);

	printf("%.2f\n", res);

	res = subtracao(6,9);
	printf("%.2f\n", res);

	res = multiplicacao(2,6);
	printf("%.2f\n", res);

	res = divisao(10,2);
	printf("%.2f\n", res);
	
	return 0;
}