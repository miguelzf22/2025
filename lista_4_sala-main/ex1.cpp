#include<stdio.h>

int main()
{
	int A[5], B[5], i;
	printf("Entre com 5 valores:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%i", &A[i]);
		B[i]=A[i]*3;
	}
	printf("Multiplicado por 3:\n");
	for(i=0;i<=4;i++)
	{
		printf("%i\n", B[i]);
	}
	return 0;
}
