#include<stdio.h>

int main(){
	int a[4], b[4], c[4][2], i;
	printf("Valores de A:\n");
	for(i=0;i<4;++i){
		scanf("%i", &a[i]);
		c[i][0]=a[i]*2;
	}
	printf("Valores de B:\n");
	for(i=0;i<4;++i){
		scanf("%i", &b[i]);
		c[i][1]=b[i]-5;
	}
	printf("Valores de C:\n");
	for(i=0;i<4;++i){
		printf("%i \t %i \n", c[i][0], c[i][1]);
	}
	return 0;
}