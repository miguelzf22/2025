#include<stdio.h>

int main()
{
	int a[10], b[10], i, j;
	printf("Entre com 10 valores:\n");
	j=9;
	for(i=0;i<=9;i++)
	{
		scanf("%i", &a[i]);
		b[j]=a[i];
		j--;
	}
	printf("Valores em ordem contrária:\n");
	for(j=0;j<=9;j++)
	{
		printf("%i\n", b[j]);
	}
	return 0;
}
