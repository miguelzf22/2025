#include<stdio.h>

int soma(int n){
	int soma, i;
	soma = 0;
	for(i=0;i<=n;++i){
		soma=soma+i;
	}
	return soma;
}

int main(){
	int valor;
	printf("Insira o valor para somatoria:\n\n");
	scanf("%i", &valor);
	printf("Soma: %i", soma(valor));
	return 0;
}
