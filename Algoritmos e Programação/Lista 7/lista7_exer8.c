/*
	8. Receber números do usuário para preencher um vetor de 10 posições,
	porém, só é permitido armazenar no vetor números positivos (repetir até que
	as 10 posições do vetor estejam preenchidas). No final, exiba a soma de
	todos os números que estão nas posições ímpares do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i, num, soma = 0;
	
	// Vetor de 10 posições
	int numero[10];
	
	// Entrada - Preencher vetor com números positivos
	for(i = 0; i < 10; i++)
	{
		// Do-While para verificar se o numero digitado é positivo
		do {
			printf("Digite um numero: \n");
			scanf("%d", &num);
			
			if (num < 0)
			{
				printf("Numero invalido. Digite só numeros positivos.\n");
			}
		} while (num < 0);	
		
		// Adiciona o numero positivo no vetor
		numero[i] = num;
	}
	
	/*
		Processamento - Faz as somas dos numeros em indices impares
		i começa em 1 porque é o primeiro impar, e i+=2 para que o i seja
		sempre impar.
		* soma += numero[1];
		* soma += numero[3];
		* soma += numero[5];
		* soma += numero[7];
		* soma += numero[9];
	*/
	for(i = 1; i < 10; i+=2)
	{		
		soma += numero[i];
	}
	
	// Saída - Mostra a variavel "soma"
	printf("Soma dos numeros em posições impares: %d\n", soma);
	
	system("PAUSE");
	return 0;
}
