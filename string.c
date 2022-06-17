#include <stdio.h>
#include <string.h>

int main(){
	char nome[20],sobrenome[20];
	
	printf("Insira seu nome: ");
	gets(nome);
	printf("Insira seu sobrenome: ");
	gets(sobrenome);
	
	strcat(nome,sobrenome);
	strupr(nome);
	
	printf("Seu nome é : %s",nome);
	
	if(strstr(sobrenome,nome)){
		printf("Seu sobrenome está na variável nome");
		
	};
	
}