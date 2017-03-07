//Arquivo para registo de cpf, nome e cargo. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *funcionario; 
char cpf[11]; 
char nome[100]; 
char cargo[100];
int opcao;

int remover(){

}

int buscar(){

}

int inserir(FILE *funcionario){
	funcionario = fopen("funcionario.txt", "a+");

	if(funcionario == NULL){
		printf("Falha na criação do arquivo\n");
		return 0;
	}

	printf("CPF:");
	scanf("%s", cpf);	
	printf("%s\n", cpf);

	printf("Nome:");
	scanf("%s", nome);	
	printf("%s\n", nome);

	printf("Cargo:");
	scanf("%s", cargo);	
	printf("%s\n", cargo);
	
	fprintf(funcionario, "%s %s %s\n", cpf, nome, cargo);
	
	fclose(funcionario);
}

int main(){
    
    do{
    	printf("Selecione a opção:\n");
    	printf("1 - Inserir conteúdo no arquivo\n");
    	printf("2 - Realizar busca no arquivo\n");
    	printf("3 - Realizar remoção de registro\n");
    	printf("4 - sair\n");

    	printf("Opção:");
    	scanf("%d", &opcao);

    	switch(opcao){
    		case 1 :
    			printf("Modo de inserção selecionado\n");
    			inserir(funcionario);
    			break;
    		case 2 :
    			printf("text2\n");
    			break;
    		case 3 :
    			printf("text3\n");
    			break;
    		case 4 : 
    			printf("sair\n");
    			return 0;
    	}
    }while(opcao);

    fclose(funcionario);
    return 0;   
}
