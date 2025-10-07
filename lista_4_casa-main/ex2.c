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
		if (i>=5)
		{
			RAC[i]=RAV[13-i];
		}
		else
		{
			RAC[i]=RAV[i];
		}
		printf("%i", RAC[i]);
	}
	return 0;
}
