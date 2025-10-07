#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Escolha a tabuada: ");
	scanf("%i", &a);
	for(b=0;b<=10;b++)
	{
		c = a * b;
		printf("%i X %i = %i\n", a, b, c);
	}
	return 0;
}