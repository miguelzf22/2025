#include<stdio.h>

int main()
{
	int a[20], b[30], c[50], i;
	printf("valores de a:\n");
	for(i=0;i<=19;i++)
	{
		scanf("%i", &a[i]);
		c[i]=a[i];
	}
	printf("valores de b:\n");
	for(i=0;i<=29;i++)
	{
		scanf("%i", &b[i]);
		c[i+20]=b[i];
	}
	printf("valores de c:\n");
	for(i=0;i<=49;i++)
	{
		printf("%i\n", c[i]);
	}
	return 0;
}
