#include <stdio.h>

int main(){

	int matriz[2][3];
	int i,j;
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("MATRIZ[%d][%d]: ",i,j);
		scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("MATRIZES PREENCHIDAS \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("MATRIZ[%d][%d]= %d \n",i,j,matriz[i][j]);	
		}
	}
	
	return(0);
}