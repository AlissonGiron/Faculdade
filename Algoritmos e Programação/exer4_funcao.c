#include <stdio.h>

int Determinante(int m[3][3]);
void MostrarMatriz(int lin, int col, int matriz[lin][col]);

int main(){ 
	
	int i, j, m[3][3];
	
	printf("Matriz: \n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\t- Posicao[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\nDeterminante = %d", Determinante(m));
	
	return 0;
}

int Determinante(int m[3][3])
{
	int i, j, k, matriz[3][5], prod1 = 0, prod2 = 0, soma1 = 0, soma2 = 0;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			matriz[i][j] = m[i][j];
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		k = 0;
		for(j = 3; j < 5; j++, k++)
		{
			matriz[i][j] = m[i][k];
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		k = i;
		for(j = 0; j < 3; j++, k++)
		{
			if(j == 0)			
				prod1 = matriz[j][k];
			else
				prod1 *= matriz[j][k];
		}
		soma1 += prod1;
	}
	
	for(i = 4; i > 1; i--)
	{
		k = i;
		for(j = 0; j < 3; j++, k--)
		{
			if(j == 0)			
				prod2 = matriz[j][k];
			else
				prod2 *= matriz[j][k];
		}
		soma2 += prod2;
	}
	
	printf("\n\n=========== Matriz ===========\n");
	MostrarMatriz(3,5,matriz);
	
	return soma1 - soma2;
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
