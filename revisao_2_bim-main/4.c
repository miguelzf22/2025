#include<stdio.h>
#include<string.h>

int main(){
	char nomes[5][15], pesquisa[15];
	int i, enc;
	for(i=0;i<5;++i){
		fgets(nomes[i], 15, stdin);
		fflush(stdin);
	}
	fgets(pesquisa, 15, stdin);
	enc=0;
	for(i=0;i<5;++i){
		if(strcmp(nomes[i], pesquisa)==0){
			enc=1; break;
		}
	}
	enc?printf("Posicao %i", i+1):printf("Nome nao encontrado");
	return 0;
}
