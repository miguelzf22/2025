#include<stdio.h>

int main()
{
	float a, c, d;
	char b;
	while(1)
	{
		printf("Insira a expressao (+, -, *, /, ou S para sair): ");
		scanf(" %c", &b);
		if (b == 's' || b == 'S')
		{
			printf("Saindo...");
			break;
		}
		printf("Insira o numero 1: ");
		scanf("%f", &a);
		printf("Insira o numero 2: ");
		scanf("%f", &c);
		switch(b)
		{
			case  '+':
			d = a + c;
			printf("%.2f %c %.2f equivale a %.2f\n", a, b, c, d);
			break;
			case  '-':
			d = a - c;
			printf("%.2f %c %.2f equivale a %.2f\n", a, b, c, d);
			break;
			case  '*':
			d = a * c;
			printf("%.2f %c %.2f equivale a %.2f\n", a, b, c, d);
			break;
			case  '/':
			if (c==0)
			{
				printf("ERRO: DIVISAO POR ZERO\n");
				break;
			}
			else
			{
				d = a / c;
				printf("%.2f %c %.2f equivale a %.2f\n", a, b, c, d);
				break;
				default:printf("invalido\n");
			}
		}
	}
	return 0;
}