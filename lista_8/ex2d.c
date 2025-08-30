#include<stdio.h>
#include<math.h>

int potencia(int n, int p){
	return pow(n, p);
}

int main(){
	int a, b;
	printf("Insira a base:\n\n");
	scanf("%i", &a);
	printf("\nInsira o expoente:\n\n");
	scanf("%i", &b);
	printf("\nResultado: %i", potencia(a, b));
	return 0;
}