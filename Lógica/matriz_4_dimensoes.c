#include <stdio.h>

int main(){
	
	float notas[10][8][50][2], media;
	int i, j, k, l;
	
	// Entrada - Receber todas as notas
	for(i = 0; i < 10; i++) // Semestres
	{
		printf("%dº SEMESTRE\n============\n\n", i + 1);
		for(j = 0; j < 8; j++) // Disciplinas
		{
			for(k = 0; k < 50; k++) // Alunos
			{
				printf("Disciplina Nº%d || Aluno %d\n", j + 1, k + 1);
				for(l = 0; l < 2; l++) // Notas
				{
					do {
						printf("Digite a nota do modulo %d: ", l + 1);
						scanf("%f", &notas[i][j][k][l]);
						
						if(notas[i][j][k][l] < 0.0 || notas[i][j][k][l] > 10.0)	
						{
							printf("Nota Inválida. Digite um número entre 0 e 10.\n");
						}				
					} while (notas[i][j][k][l] < 0.0 || notas[i][j][k][l] > 10.0);					
				}	
				printf("\n");	
			}
			printf("-------------\n");		
		}		
	}
	
	
	// Saída - Médias
	for(i = 0; i < 10; i++) // Semestres
	{
		printf("\n=== MÉDIA: %dº SEMESTRE ===\n==========================\n", i + 1);
		for(j = 0; j < 8; j++) // Disciplinas
		{			
			for(k = 0; k < 50; k++) // Alunos
			{
					printf(" Disciplina Nº%d || Aluno %d\n", j + 1, k + 1);
					
					media = (notas[i][j][k][0] + notas[i][j][k][1])/2.0;
					printf(" Media: %.2f\n\n", media);
			}		
			printf("--------------------------\n");
		}		
	}

	return 0;
}
