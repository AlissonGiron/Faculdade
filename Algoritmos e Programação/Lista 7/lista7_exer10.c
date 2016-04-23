/*
	10. Receber 10 números e armazená-los em um vetor. Copiar os números
	em outro vetor na ordem inversa e mostrar na tela todas as posições em que
	se tem o mesmo número nos dois vetores.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i, pos = 0;
	
	// Vetor de 10 posições
	int numero[10], numero_inverso[10];
	
	// Entrada - Preencher vetor de 10 posições
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
	}
	
	/* 
		Processamento - Colocar os numeros em outro vetor, na ordem inversa
		For começa em 9 e termina em 0, com i-- para ir em ordem inversa
		
		Utilizei a variavel contadora pos para indicar a posição no vetor
		numero. Por que o indice das duas são o inverso, não posso usar 
		o i nas duas. 
		 
		* Correto:
			Com a variável "i" no numero_inverso[] e "pos" no numero[] fica assim:
								
			numero_inverso[9] = numero[0];
			numero_inverso[8] = numero[1];
			numero_inverso[7] = numero[2];
			numero_inverso[6] = numero[3];
			...
			
			
		* Errado
		    Utilizando a variável "i" nas duas fica assim:
		    
		    numero_inverso[9] = numero[9];
			numero_inverso[8] = numero[8];
			numero_inverso[7] = numero[7];
			numero_inverso[6] = numero[6];
			...
		    
		    Nesse caso o numero_inverso[] ficaria com os valores na ordem
		    normal. Por isso daria errado utilizando o i nas duas.
	*/	 
	for(i = 9; i >= 0; i--)
	{
		numero_inverso[i] = numero[pos];		
		pos++;
	}
	
	/*
		Saída - Mostrar posições em que os numeros são iguais.
		O for vai de 0 a 9, comparando os dois vetores nas mesmas posições,
		utilizando a variável i nos dois, se o valor dos dois forem 
		iguais, mostra o i na tela.
	*/ 	
	printf("Posições: ");
	for(i = 0; i < 10; i++)
	{
		// Se forem iguais na posição i
		if(numero_inverso[i] == numero[i])
		{
			// Mostra o i, que é a posição
			printf("%d ", i);				
		}
	}		
	
	system("PAUSE");
	return 0;
}
