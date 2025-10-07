#include<stdio.h>

int main(){
	int a[7], b[7], c[7][2], i;
	printf("Valores de A:\n");
	for(i=0;i<7;++i){
		scanf("%i", &a[i]);
		c[i][0]=a[i];
	}
	printf("Valores de B:\n");
	for(i=0;i<7;++i){
		scanf("%i", &b[i]);
		c[i][1]=b[i];
	}
	printf("Valores de C:\n");
	for(i=0;i<7;++i){
		printf("%i \t %i \n", c[i][0], c[i][1]);
	}
	return 0;
}