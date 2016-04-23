/*
	11. Os números, como as letras, também são símbolos e um número
	palíndromo é aquele que é igual quando lido nos dois sentidos (da esquerda
	para a direita ou da direita para a esquerda), como por exemplo, 14541,7117
	e 3333. Receba um número (pergunte o tamanho do número e então receba
	cada parte dele) e informe se ele é ou não palíndromo. 
	 
	* Traduzindo: Verificar se é Palindromo
	Ex.: 1221 ao contrario fica 1221 ---> é igual ----> é Palindromo
	Ex.: 1234 ao contrario fica 4321 ---> não é igual ----> Não é palindromo
	 
	Outra Solução: É possível criar um vetor inverso e fazer igual o exer10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
    // Variáveis
    int i, tamanho, pos = 0, dif = 0;
    
    // Entrada - Recebe o tamanho do número
	printf("Digite o tamanho de seu número: ");
	scanf("%d", &tamanho);
	
	/* 
		Depois de receber o tamanho, cria uma vetor de char com o tamanho
		digitado pelo usuário.
		 
		Criei um vetor de char e não de int, mesmo recebendo números.
		Por que para colocar no vetor, temos que colocar cada numero
		digitado em uma posição diferente, com char é possível o usuário
		digitar, por exemplo, o numero 1221, e cada numero ser colocado
		em uma posição diferente.
		* numero[0] = '1';
		* numero[1] = '2';
		* numero[2] = '2';
		* numero[4] = '1';
		
		Se fosse um int, esse 1221 seria tratado como um só número, ficando
		na posição 0. 
		* numero[0] = 1221;
		* numero[1] = lixo de memória;
		* numero[2] = lixo de memória;
		* numero[4] = lixo de memória;	
	*/
	char numero[tamanho];
	
	// Entrada - Preenche o vetor com chars
	printf("Digite seu número: \n");
	for(i = 0; i < tamanho; i++)
	{
		scanf(" %c", &numero[i]);	
	}
	
	/* 
		Para verificar os numeros, fazemos um For inverso, começando da 
		ultima posição e indo até a primeira
		Usei a variavel contadora "pos", para comparar a ordem inversa
		com a ordem normal.
			 
		Para saber se é Palindromo:
		* Verifico cada posição com sua posição inversa.
		* Se for igual, não faz nada
		* Se for diferente, adiciona 1 na variável contadora "dif"
		
		Um número palindromo nao pode ter nenhuma posição diferente,
		então se dif for igual a 0, ele é palindromo, senão, não é palindromo  
	*/
	for(i = tamanho - 1; i >= 0; i--)
	{
		if(numero[i] != numero[pos])
		{
			dif++;
		}
		
		pos++;				
	}
	
	// Saída
	if(dif == 0)
	{
		printf("Seu número é Palíndromo\n");
	}
	else {
		printf("Seu número não é Palíndromo\n");
	}
	
	/*
	    ============  EXEMPLO DO FOR ============== 
		 
		   ============  EXEMPLO 1 ============== 
						
						tamanho: 5
						char numero[5];
						num = 12321
				
		Posição: [0] [1] [2] [3] [4]
		  Valor: '1' '2' '3' '2' '1'
		
		FOR :
				inicio for --> i = 5 - 1 --> i = 4
				
				* 1 repetição: pos = 0  ||   i = 4
					Compara posição 0 com posição 4 ---> 1 e 1 --> igual
				* 2 repetição: pos = 1  ||   i = 3
					Compara posição 1 com posição 3 ---> 2 e 2 --> igual
				* 3 repetição: pos = 2  ||   i = 2
					Compara posição 2 com posição 2 ---> 3 --> igual
				* 4 repetição: pos = 3  ||   i = 1
					Compara posição 3 com posição 1 ---> 2 e 2 --> igual
				* 5 repetição: pos = 4  ||   i = 0
					Compara posição 4 com posição 0 ---> 1 e 1 --> igual
				
				DIF == 0
				12321 É PALINDROMO
				 
				 
		   ============  EXEMPLO 2 ============== 
						
						tamanho: 4
						char numero[4];
						num = 1235
				
		Posição: [0] [1] [2] [3]
		  Valor: '1' '2' '3' '5'
		
		FOR :
				inicio for --> i = 4 - 1 --> i = 3
				
				* 1 repetição: pos = 0  ||   i = 3
					Compara posição 0 com posição 3 ---> 1 e 5 --> dif++
				* 2 repetição: pos = 1  ||   i = 2
					Compara posição 1 com posição 2 ---> 2 e 3 --> dif++
				* 3 repetição: pos = 2  ||   i = 1
					Compara posição 2 com posição 1 ---> 3 e 2 --> dif++
				* 4 repetição: pos = 3  ||   i = 0
					Compara posição 3 com posição 0 ---> 5 e 1 --> dif++
				
				DIF == 4
				1235 NÃO É PALINDROMO  
	*/ 
	
	
		
	system("PAUSE");
	return 0;
}
