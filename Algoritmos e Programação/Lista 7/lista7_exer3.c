/*
	3. Receber 8 números e armazená-los em um vetor. Ao final, pedir para o
	usuário escolher uma posição do vetor e exibir o número contido nela.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i, pos;
	
	// Vetor de 8 posições
	int numero[8];
	
	
	// Entrada - Recebe os 8 valores 
	for(i = 0; i < 8; i++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
	}
	
	// Entrada - Recebe a posição do vetor que o usuário quer ver
	printf("Digite a posição que deseja visualizar: ");
	scanf("%d", &pos);
	
	/* 
	    Saída - Valor da posição escolhida
		
		O vetor começa na posição 0 e vai até 7, mas o usuário não sabe
		disso.
		 
		Como ele digitou 8 números, ele acha que a primeira posição é a 1
		e a última é 8. Mas como em vetores a primeira posição é 0, 
		a ultima posição vai ser 7.
		
		Precisamos corrigir a posição que ele escolher para o padrão de 
		vetores, que começa em 0. Qualquer posição que ele escolher, na
		"linguagem" do vetor, é uma posição para tras, então em todas as
		escolhas, temos que subtrair 1 da posição.
		 
		numero[pos - 1]; 
		 
		Ex.: Se ele escolher a primeira posição, ele digita 1.
		* A primeira posição do vetor é 0, se subtrairmos 1 de 1 a posição
		estará correta. numero[1 - 1] ---> numero[0] ---> 1ª posição
		
		Ex.2: Se ele escolher a ultima posição, ele digita 8.
		* Não existe numero[8], se não corrigirmos vai dar erro. A ultima
		posição do vetor é 7. numero[8 - 1] ---> numero[7] ---> Ultima posição 		
	
	*/
	
	printf("Valor da posição %d: %d", pos, numero[pos - 1]);
	
	system("PAUSE");
	return 0;
}
