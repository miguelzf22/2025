#include<stdio.h>

int main(){
	int a[3][3], i, j, soma;
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			scanf("%i", &a[i][j]);
		}
	}
	soma=0;
	for(i=0;i<3;++i){
		soma=a[i][i]+soma;
	}
	printf("%i", soma);
	return 0;
}
