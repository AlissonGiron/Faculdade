/*
	4. Receber 15 números e armazená-los em um vetor. Ao final, exibir o dobro
	de cada um dos números.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i;
	
	// Vetor de 15 posições
	int numero[15];	
	
	
	// Entrada - Recebe os 15 valores 
	for(i = 0; i < 15; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
	}
	
	
	/* 
	   Saída - O dobro de cada número guardado
	   Pra fazer conta com um vetor é só indicar uma posição nele.
	   
	   Ex.: 
			numero[3] = 10;
			numero[3] * 2 ----> é igual a 10 * 2 ----> 20;	
	*/	
	for(i = 0; i < 15; i++)
	{
		printf("Dobro de %d: %d\n", numero[i], numero[i] * 2);
	}
	
	system("PAUSE");
	return 0;
}
