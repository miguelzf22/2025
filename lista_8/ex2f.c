#include<stdio.h>

int fibonacci(int n){
	int soma, num1 = 1, num2 = 0;
	for(int i=0;i<n;++i){
		soma = num1 + num2;
		printf("%i\n", soma);
		num1 = num2;
		num2 = soma;
	}
}

int main(){
	int n;
	printf("Calcular a serie de fibonacci ate quantos termos?\n\n");
	scanf("%i", &n);
	printf("\nSerie de fibonacci ate %i termos:\n\n", n);
	fibonacci(n);
	return 0;
}