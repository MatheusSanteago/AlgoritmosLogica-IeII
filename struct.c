#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct produto{
	int codigo;
	char nome[30];
	float preco;
};

int main()
{	
	int i,qtdDeProdutos;
	float somaProdutos;
	
	printf("Digite a quantidade de Produtos: ");
	scanf("%d",&qtdDeProdutos);
	
	struct produto ficha[qtdDeProdutos];
	
	for(i=0;i<qtdDeProdutos;i++){
		printf("Digite o codigo: ");
		scanf("%d",&ficha[i].codigo);	
		system("cls");	
		printf("Digite o nome: ");
		scanf("%s",ficha[i].nome);	
		system("cls");
		printf("Digite o preco: ");
		scanf("%f",&ficha[i].preco);
		system("cls");	
	}
			
	for(i=0;i<qtdDeProdutos;i++){
		printf("Codigo: %d \n Produto: %s \n Preco: R$%.2f \n",ficha[i].codigo,ficha[i].nome,ficha[i].preco);	
		somaProdutos = somaProdutos + ficha[i].preco;
	}	
	printf("\n O valor total da compra foi R$ %.2f",somaProdutos);

	return(0);
}