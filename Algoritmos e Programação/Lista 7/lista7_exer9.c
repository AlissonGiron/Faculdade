/*
	9. Receber 10 números e armazená-los em um vetor. Após esta primeira
	etapa é necessário pedir para o usuário digitar um número. Verificar se este
	número está armazenado no vetor e se estiver mostrar quantas vezes o
	número esta armazenado no vetor, ou seja, quantas vezes o número se
	repete. Se o número não estiver no vetor, uma mensagem deve indicar esta
	condição e deverá ser solicitado um novo número para o usuário. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i, num, qtde = 0;
	
	// Vetor de 10 posições
	int numero[10];
	
	// Entrada - Preencher vetor de 10 posições
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
	}
	
	// Entrada - Recebe o numero para verificação
	do {
		printf("Digite o número que deseja verificar: ");
		scanf("%d", &num);
		
		/*
			Processamento - Verifica vetor
			O for verifica todos os numeros do vetor e compara com a 
			variável "num", se for igual, adiciona 1 na variavel contadora
			"qtde", se no final essa variável for igual a 0, significa 
			que o número nao está no vetor.			
		*/
		for(i = 0; i < 10; i++)
		{		
			if(numero[i] == num)
				qtde++;
		}
		
		if(qtde == 0) // Se o numero nao estiver no vetor, pede pra repetir
			printf("Esse número não está no vetor. Digite novamente\n");
		else // Se está no vetor, mostra quantas vezes repetiu e termina o programa
			printf("Esse número repete %d vez(es) no vetor", qtde);
		
	} while (qtde == 0); // Enquanto número nao estiver no vetor
	
	system("PAUSE");
	return 0;
}
