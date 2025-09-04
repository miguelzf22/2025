#include<stdio.h>

int main(){
	FILE *ucnr;
	char palavra[20];
	ucnr = fopen("file1.txt", "a");
	printf("Escreva uma palavra:\n");
	scanf("%s", palavra);
	fprintf(ucnr, "%s\n", palavra);
	fclose(ucnr);
	return 0;
}
