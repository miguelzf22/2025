#include<stdio.h>

int main(){
	int a[5], i, j, aux;
	for(i=0;i<5;++i){
		scanf("%i", &a[i]);
	}
	for(i=0;i<4;++i){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	for(i=0;i<5;++i){
		printf("%i ", a[i]);
	}
	return 0;
}
