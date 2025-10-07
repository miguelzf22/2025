#include<stdio.h>

int main()
{
	int A[8], B[8], i;
	printf("Entre com 8 valores:\n");
	for(i=0;i<=7;i++)
	{
		scanf("%i", &A[i]);
		B[i]=A[i]*A[i];
	}
	printf("Ao quadrado:\n");
	for(i=0;i<=7;i++)
	{
		printf("%i\n", B[i]);
	}
	return 0;
}
