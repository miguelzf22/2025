#include<stdio.h>

int main()
{
	int a[6], b[6], i, j;
	for(i=0;i<=5;i++)
	{
		scanf("%i", &a[i]);
		b[i]=1;
		for(j=1;j<=a[i];j++)
		{
			b[i]=b[i]*j;
		}
	}
	for(i=0;i<=5;i++)
	{
		printf("%i\n", b[i]);
	}
	return 0;
}
