#include<stdio.h>

int main(){
	FILE *ucnr;
	char palavra[20];
	ucnr = fopen("file1.txt", "r");
	printf("Palavra:\n");
	fscanf(ucnr, "%s", palavra);
	printf("%s", palavra);
	fclose(ucnr);
	return 0;
}
