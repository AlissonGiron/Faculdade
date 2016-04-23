/*
	5. Receber 12 números e armazená-los em um vetor. Ao final, exibir quais
	foram os números positivos informados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i;
	
	// Vetor de 12 posições
	int numero[12];		
	
	// Entrada - Recebe os 12 valores 
	for(i = 0; i < 12; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
	}
	
	
	/* 
	   Saída - Os números positivos
	   Pra fazer uma verificação com um vetor é só indicar uma posição nele.
	   
	   Ex.: 
			numero[3] = 10;
			if(numero[3] >= 0)
			{
				//positivo
			}
			else {
				//negativo
			}
	*/			
	printf("Números positivos: \n");
	for(i = 0; i < 12; i++)
	{
		if(numero[i] >= 0)
		{
			printf("%d\n", numero[i]);
		}
	}
	
	system("PAUSE");
	return 0;
}
