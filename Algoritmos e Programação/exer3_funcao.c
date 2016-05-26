#include <stdio.h>

void MultiplicarMatriz(int A[3][2], int B[2][3]);
void MostrarMatriz(int lin, int col, int matriz[lin][col]);

int main(){  
	int i, j, A[3][2], B[2][3];
	
	printf("Matriz A: \n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("\t- Posicao[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);			
		}			
	}
	
	printf("\nMatriz B: \n\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\t- Posicao[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);				
		}			
	}
	
	printf("\n\n========== Matriz A ==========\n");
	MostrarMatriz(3,2,A);
	
	printf("\n\n========== Matriz B ==========\n");
	MostrarMatriz(2,3,B);
	
	MultiplicarMatriz(A,B);
	
	return 0;
}

void MultiplicarMatriz(int A[3][2], int B[2][3]){
	int i, j, k, C[3][3];
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			C[i][j] = 0;
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < 2; k++)
			{
				C[i][j] += (A[i][k] * B[k][j]);
			}				
		}			
	}	
	
	printf("\n\n========== Matriz C ==========\n");
	MostrarMatriz(3,3,C);
}

void MostrarMatriz(int lin, int col, int matriz[lin][col]){	
	int i,j;
	for(i = 0; i < col; i++)
	{
			printf("\tCol %d", i);
	}
	printf("\n");
	for(i = 0; i < lin; i++)
	{
		printf("Lin %d\t", i);
		for(j = 0; j < col; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("==============================\n");
}

	
