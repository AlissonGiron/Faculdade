#include <stdio.h>

void Rodar(char vetor[], int vezes);
void MostrarVetor(char vetor[]);

int main(){  
	
	int i, q;
	char vetor[10];
	
	printf("\n> Digite o vetor:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("\tPosicao[%d]: ", i);
		scanf(" %c", &vetor[i]);
	}
	
	MostrarVetor(vetor);
	
	printf("Digite quantas vezes deseja rodar: ");
	scanf("%d", &q);
	
	Rodar(vetor, q);	

	return 0;
}

void Rodar(char vetor[], int vezes){
	int i, j;
	char aux;
	
	for(j = 0; j < vezes; j++)
	{
		aux = vetor[9];
		
		for(i = 9; i > 0; i--)
		{
			vetor[i] = vetor[i - 1];		
		}		
		vetor[0] = aux;
	}	
	
	MostrarVetor(vetor);
}

void MostrarVetor(char vetor[]){
	int i;
	
	printf("\n================================= Vetor ==================================\n");
	for(i = 0; i < 10; i++)
	{
			printf("%c\t", vetor[i]);
	}
	
	printf("\n==========================================================================\n\n");	
}
