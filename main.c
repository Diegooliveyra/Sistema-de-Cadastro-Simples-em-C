#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define SIZE 5

char name[SIZE][50];
char phone[SIZE][50];
char email[SIZE][50];
int op;
int id;
void header();
void reg();
void list();
	
int main(void){
	setlocale(LC_ALL,"portuguese");
	do {
		header();	
		printf(" Escolha uma opção para seguir: \n\n");
		printf("| 1 | Cadastrar: \n| 2 | Consultar: \n| 0 | Encerrar: \n\n====================================================\n\n");
		scanf("%d",&op);
		fflush(stdin);
		
		switch (op){
			case 1: reg();	
				break;
			case 2: if(id == 0){
						header();
						printf("\n\n\t\t   Agenda vazia! \n\n\n");
						printf("\n====================================================\n\n");
						system("pause");
					}else{
						list();	
					}
				break;
			case 0: header();
					printf("\n\n\n\n\tObrigado por ultilizar nosso sistema\n\n\n\n\n====================================================\n\n");
					
				break;
			default:printf(" \n\t\tOpção Invalida \n\n\n ");
					system("pause");
				break;		
	    }
	} while(op != 0);
}

void header(){
	system("cls");
	printf("====================================================\n\t\tAGENDA CLIENTES - BETA\t\t\n====================================================\n\n");
}

void reg() {
	header();
	if(id == SIZE){
		printf("\n\n\t\t  Agenda lotada! \n\n\n");
		printf("\n====================================================\n\n");
	}else{
		printf("\nID: %d\n", id+1);
		printf("Digite o nome: ");
		scanf(" %[^\n]", name[id]);
		fflush(stdin);
		printf("Digite o telefone : ");
		scanf(" %[^\n]", phone[id]);
		fflush(stdin);
		printf("Digite o email: ");
		scanf("%s", email[id]);
		fflush(stdin);
		printf("\n====================================================\n\n");
		id++;
	}
	system("pause");
}

void list(){
	int cont;
	for(cont = 0;cont < id;cont++){
		header();
		printf("\nID: %d \nNome: %s\nTelefone: %s\nEmail: %s\n",cont+1,name[cont],phone[cont],email[cont]);
		printf("\n====================================================\n\n");
		system("pause");
	}
}


