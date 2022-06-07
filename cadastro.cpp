#include <stdio.h>
int main(){
	int idade, ano;
	float altura;
	char nome[30];
	
	printf("Digite seu nome!");
	scanf("%s",nome);
	printf("Digite sua idade");
	scanf("%d",&idade);
	printf("Digite sua altura");
	scanf("%f",&altura);
	
	ano = 2022 - idade;
	
	printf("\nO nome e: %s",nome);
	printf("\nSeu ano de nascimento e: %d",ano);
	printf("\nSua idade e %d",idade);
	printf("\nSua altura e .2f", altura);
}