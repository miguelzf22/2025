#include<stdio.h>

float prestacao(float valor, float taxa, float tempo){
	return valor+(valor*(taxa/100)*tempo);
}

int main(){
	float a, b, c;
	printf("Insira o valor:\n\n");
	scanf("%f", &a);
	printf("\nInsira a taxa:\n\n");
	scanf("%f", &b);
	printf("\nInsira o tempo:\n\n");
	scanf("%f", &c);
	printf("\nO resultado eh %.2f\n", prestacao(a,b,c));
	return 0;
}
