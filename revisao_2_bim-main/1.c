#include<stdio.h>

int main(){
    int a[10], i, n, enc;
    printf("Insira os valores da matriz:\n");
    for(i=0;i<10;++i){
        scanf("%i", &a[i]);
    }
    printf("Insira o numero para a pesquisa:\n");
    scanf("%i", &n);
    enc=0;
    for(i=0;i<10;++i){
        if (a[i]==n){
        	enc=1;
			break;
		}
    }
    enc?printf("Numero encontrado na posicao %i", i+1):printf("Numero nao encontrado");
    return 0;
}
