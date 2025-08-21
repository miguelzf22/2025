#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAX 255

typedef struct{
	char nome[MAX];
	char endereco[MAX];
	int idade;
	char numero[20];
} Cadastro;
Cadastro cad[5];
Cadastro aux[5];

void cadastro(){
	for(int i=0;i<5;++i){
		printf("Pessoa %i:\n", i+1);
		printf("\nInsira o nome:\n");
		fflush(stdin);
		fgets(cad[i].nome, MAX, stdin);
		fflush(stdin);
		printf("Insira o endereco:\n");
		fgets(cad[i].endereco, MAX, stdin);
		fflush(stdin);
		printf("Insira a idade:\n");
		scanf("%i", &cad[i].idade);
		fflush(stdin);
		printf("Insira o numero de telefone:\n");
		fgets(cad[i].numero, MAX, stdin);
		fflush(stdin);
		printf("\n");	
	}
}

void pesquisa(){
	bool flag;
	flag = false;
	int pesq, i;
	printf("Idades:\n");
	for(i=0;i<5;++i){
		printf("%i - ", i+1);
		printf("%i\n", cad[i].idade);
	}
	printf("Pesquise:\n");
	scanf("%i", &pesq);
	for(i=0;i<5;++i){
		if(pesq == cad[i].idade){
			flag = true;
			break;
		}
	}
	if(flag){
		printf("Idade %i encontrado no cadastro da pessoa %i", pesq, i+1);
	}
	else{
		printf("Idade nao encontrada");
	}
}

void classificar(){
	int i, j;
	for(i=0;i<4;++i){
		for(j=i+1;j<5;++j){
			if(strcmp(cad[i].nome, cad[j].nome)>0){
				aux[i] = cad[i];
				cad[i] = cad[j];
				cad[j] = aux[i];
			}
		}
	}
	printf("Nomes das pessoas em ordem alfabetica:\n");
	for(i=0;i<5;++i){
		printf("%s", cad[i].nome);
	}
}

void alterar(){
	int i, escolha, escolha2;
	printf("Qual cadastro?\n\n");
	for(i=0;i<5;++i){
		printf("Pessoa %i - %s\n", i+1, cad[i].nome);
	}
	scanf("%i", &escolha);
	if(escolha>5 || escolha<1){
		printf("Pessoa invalida, tente novamente");	
	}
	else{
		printf("1-%s", cad[escolha-1].nome);
		printf("2-%s", cad[escolha-1].endereco);
		printf("3-%i\n", cad[escolha-1].idade);
		printf("4-%s", cad[escolha-1].numero);
		printf("O que deseja alterar?\n");
		scanf("%i", &escolha2);
		switch(escolha2){
			
			case 1:
				printf("Insira o novo nome:\n");
				fflush(stdin);
				fgets(aux[escolha-1].nome, MAX, stdin);
				strcpy(cad[escolha-1].nome, aux[escolha-1].nome);
				break;
			
			case 2:
				printf("Insira o novo endereco:\n");
				fflush(stdin);
				fgets(aux[escolha-1].endereco, MAX, stdin);
				strcpy(cad[escolha-1].endereco, aux[escolha-1].endereco);
				break;
				
			case 3:
				printf("Insira a nova idade:\n");
				scanf("%i", &aux[escolha-1].idade);
				cad[escolha-1].idade = aux[escolha-1].idade;
				break;
				
			case 4:
				printf("Insira o novo numero de telefones:\n");
				fflush(stdin);
				fgets(aux[escolha-1].numero, MAX, stdin);
				strcpy(cad[escolha-1].numero, aux[escolha-1].numero);
				break;
			
			default:
				printf("Opcao invalida, tente novamente");
				break;
		}
	}
	
}
 
int main(){
	int opcao;
	bool cadastrado;
	int i;
	cadastrado = false;
	printf("Menu da Agenda:\n\n1-Cadastro\n2-Pesquisa de registro por idade\n3-Classificação alfabetica\n4-Alteracao de registro digitado com erro\n5-Sair do Menu\n");
	while(opcao!=5){
		printf("\nEscolha uma opcao:\n");
		scanf("%i", &opcao);
		switch(opcao){
			
			case 1:
				cadastro();
				cadastrado = true;
				break;
			
			case 2:
				if(cadastrado!=true){
					printf("Nao ha cadastros, cadastre-se digitando 1");
					break;
				}
				else{
					pesquisa();
				}
			break;
			
			case 3:
				if(cadastrado!=true){
					printf("Nao ha cadastros, cadastre-se digitando 1");
					break;
				}
				else{
					classificar();
				}
				break;
			
			case 4:
				if(cadastrado!=true){
					printf("Nao ha cadastros, cadastre-se digitando 1");
					break;
				}
				else{
					alterar();
				}
				break;
			
			case 5: 
				printf("Saindo...");
				break;
			
			default: 
				printf("Opcao invalida"); 
				break;
		}	
	}
	return 0;
}
