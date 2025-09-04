#include<stdio.h>

int main(){
	FILE *ptarq;
	char letra;
	ptarq = fopen("frase.txt", "w");
	printf("Insira uma frase\n");
	while((letra=getchar()) != '\n')
	putc(letra, ptarq);
	fclose(ptarq);
	return 0;
}
