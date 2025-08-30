#include<stdio.h>
#define MAX 5

void scan(int array[]){
	for(int i=0;i<MAX;++i){
		scanf("%i", &array[i]);
	}
}

void swap(int array[]){
	for(int i=0;i<MAX-1;++i){
		for(int j=i+1;j<MAX;++j){
			if(array[i]>array[j]){
				int aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}
}

int soma(int array, int matriz, int vetor){
	return vetor = array + matriz;
}

int main(){
	int a[MAX], b[MAX], c[MAX];
	printf("Insira os valores de A:\n\n");
	scan(a);
	printf("\nInsira os valores de B:\n\n");
	scan(b);
	swap(a);
	swap(b);
	printf("\nValor de C:\n");
	for(int i=0;i<MAX;i++){
		printf("%i\n", soma(a[i],b[i],c[i]));
	}
	return 0;
}