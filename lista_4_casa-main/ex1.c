#include<stdio.h>

int main()
{
	int RAV[9], RAC[9], i;
	printf("Insira o RA infectado:\n");
	for(i=0;i<=8;i++)
	{
		scanf("%i", &RAV[i]);
	}
	printf("O seu RA correto e:\n");
	for(i=0;i<=8;i++)
	{
		switch(i){
			case 2: RAC[i]=RAV[7]; break;
			case 3: RAC[i]=RAV[6]; break;
			case 6: RAC[i]=RAV[2]; break;
			case 7: RAC[i]=RAV[3]; break;
			default: RAC[i]=RAV[i]; break;
		}
		printf("%i", RAC[i]);
	}
	return 0;
}