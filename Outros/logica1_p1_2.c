#include <stdio.h>

int main()
{
	// Variáveis
	int i, qtde_jogadores, num;
	
	// Variáveis contadoras
	int qtde0 = 0, qtde1 = 0;
	
	// Váriaveis para guardar o numero do ultimo jogador de cada escolha
	int ult_jog_0, ult_jog_1;
	
	// Entrada - Quantidade de jogadores
	do {
		printf("Digite a quantidade de jogadores: ");
		scanf("%d", &qtde_jogadores);
		
		if (qtde_jogadores < 3)
		{
			printf("Digite um numero maior ou igual a 3\n");
		}
	} while (qtde_jogadores < 3); 
	
	// Entrada - Escolha de cada jogador
	for(i = 1; i <= qtde_jogadores; i++)
	{
		do {
			printf("Jogador %d - Digite 0 ou 1: ", i);
			scanf("%d", &num);
			
			if (num != 0 && num != 1)
			{
				printf("Numero invalido. Digite 0 ou 1\n");
			}
		} while (num != 0 && num != 1);
		
		// Guarda escolhas
		if(num == 0)
		{
			qtde0++;
			ult_jog_0 = i;
		}
		else if(num == 1)
		{
			qtde1++;
			ult_jog_1 = i;
		}		
	}
	
	// Verifica qual jogador venceu
	if(qtde0 == 1 && qtde1 > 1)
	{
		printf("Jogador %d venceu\n", ult_jog_0);	
	}
	else if(qtde1 == 1 && qtde0 > 1)
	{
		printf("Jogador %d venceu\n", ult_jog_1);	
	}
	else 
	{
		printf("Empatou\n");
	}
	
	return 0;
}

