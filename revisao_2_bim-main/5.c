#include<stdio.h>
#include<string.h>

int main(){
	char nomes[10][15], aux[15];
	int i, j;
	for(i=0;i<10;++i){
		fgets(nomes[i], 15, stdin);
		fflush(stdin);
	}
	for(i=0;i<9;++i){
		for(j=i+1;j<10;++j){
			if(strcmp(nomes[i], nomes[j])>0){
				strcpy(aux, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], aux);
			}
		}
	}
	for(i=0;i<10;++i){
		printf("%s", nomes[i]);
	}
	return 0;
}
