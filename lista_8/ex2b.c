#include<stdio.h>
#define MAX 30

int a[MAX], b[MAX], c[MAX*2], i;

void leitura(){
	printf("Insira o valor de A:\n\n");
	for(i=0;i<MAX;++i){
		scanf("%i", &a[i]);	
	}
	printf("\nInsira o valor de B:\n\n");
	for(i=0;i<MAX;++i){
		scanf("%i", &b[i]);	
	}
}

int juncao(int a[], int b[]){
	for(i=0;i<MAX;++i){
		c[i]=a[i];
		c[i+MAX]=b[i];
	}
	return c;
}

void exiba(){
	printf("\nO valor de C:\n\n");
	for(i=0;i<MAX*2;++i){
		printf("%i\n", c[i]);
	}
}
int main(){
	leitura();
	juncao(a, b);
	exiba();
}
