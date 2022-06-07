#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brasil");
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	
	printf("Olá %s seja bem-vindo ao modlo de algoritmos e lógica II", nome);
	
	return(0);
}