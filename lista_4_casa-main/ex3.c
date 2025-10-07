#include<stdio.h>

int main()
{
	int RAV[9], RAC[9], i;
	printf("Insira o RA:\n");
	for(i=0;i<=8;i++)
	{
		scanf("%i", &RAV[i]);
	}
	printf("O seu RA novo e:\n");
	for(i=0;i<=8;i++)
	{
		if (i<=1)
		{
			RAC[i]=RAV[1-i];
		}
		else
		{
			RAC[i]=RAV[i];
		}
		printf("%i", RAC[i]);
	}
	return 0;
}
