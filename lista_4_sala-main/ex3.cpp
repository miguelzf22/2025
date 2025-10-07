#include<stdio.h>

int main()
{
	int a[5], b[5], c[5], i;
	printf("Array A:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%i", &a[i]);
	}
	printf("Array B:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%i", &b[i]);
	}
	printf("Array C:\n");
	for(i=0;i<=4;i++)
	{
		c[i]=a[i]-b[i];
		printf("%i\n", c[i]);
	}
	return 0;
}
