#include<stdio.h>

int main()
{
	int a[5], b[5], c[10], i;
	printf("valores de a:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%i", &a[i]);
		c[i]=a[i];
	}
	printf("valores de b:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%i", &b[i]);
		c[i+5]=b[i];
	}
	printf("valores de c:\n");
	for(i=0;i<=9;i++)
	{
		printf("%i\n", c[i]);
	}
	return 0;
}
