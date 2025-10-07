#include<stdio.h>
 
int main(){
	int a[5][3], b[5][3],c[5][3], i, j=0;
	printf("Valores de A\n");
	for(i=0;i<5;i++){
		printf("Insira os valores da coluna %i:\n", i+1);
		for(j=0;j<3;j++){
			scanf("%i", &a[i][j]);
		}
	}
	printf("Valores de B\n");
	for(i=0;i<5;i++){
		printf("Insira os valores da coluna %i:\n", i+1);
		for(j=0;j<3;j++){
			scanf("%i", &b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Valores de C\n");
	for(i=0;i<5;i++){
		printf("%i \t %i \t %i \n", c[i][0], c[i][1], c[i][2]);
	}
	return 0;
}
