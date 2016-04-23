/*
	2. Receber 10 números e armazená-los em um vetor. Ao final, exibir os
	números na ordem inversa da que foram recebidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	// Variável para o for
	int i;
	
	// Vetor de 10 posições
	int numero[10];
	
	
	/* 
	   Entrada - Recebe os 10 valores
	   Temos que receber na ordem correta e depois mostrar na ordem
	   inversa com outro for.
	    
	   * São 10 valores, recebemos na ordem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9. 
	*/
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
	}
	
	
	/* 
	   Para mostrar os valores na ordem inversa, o for começa em 9 e 
	   termina em 0.
	   
	   O vetor numero tem 10 posições, são elas:
	   * numero[0]; <------ Primeira posição é 0    
	   * numero[1];									
	   * numero[2];
	   * numero[3];
	   * numero[4];
	   * numero[5];
	   * numero[6];
	   * numero[7];
	   * numero[8];
	   * numero[9]; <------ Ultima posição é 9
	   
	   Então temos que mostrar na ordem: 9, 8, 7, 6, 5, 4, 3, 2, 1, 0.
	   
	   i-- é igual a i = i - 1; -----> Subtrai 1 da variável i
	   * Serve para fazer o for ir na ordem reversa 
	   
	*/
	
	for(i = 9; i >= 0; i--)
	{
		printf("%d\n", numero[i]);
	}	
	
	system("PAUSE");
	return 0;
}
