#include<stdio.h>

int main(){
	int a[10], b[10][3], i, j;
	printf("Valores de A:\n");
	for(i=0;i<10;++i){
		scanf("%i", &a[i]);
		b[i][0]=a[i]+5;
		b[i][1]=1;
		for(j=1;j<=a[i];++j){
			b[i][1]=b[i][1]*j;
		}
		b[i][2]=a[i]*a[i];
	}
	printf("Valores de B:\n");
	for(i=0;i<10;++i){
		printf("%i \t %i \t %i \n", b[i][0], b[i][1], b[i][2]);
	}
	return 0;
}