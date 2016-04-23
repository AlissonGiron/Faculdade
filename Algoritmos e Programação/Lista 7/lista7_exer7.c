/*
	7. Preencher automaticamente um vetor com todos os números pares entre 1
	e 100 e depois exibir os números para o usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	// Variáveis
	int i, pos = 0;
	
	// Vetor de 50 posições, entre 1 e 100 existem 50 números pares.
	int numero[50];
	
	/* 
	   Adicionar os números no vetor
	   
	   O i começa em 2, por que o primeiro número par depois de 1 é 2. O 
	   passo do for é i += 2, para que o i sempre seja um número par.
	   A variável i só representa o número que vai ser colocado dentro 
	   do vetor, para contar a posição eu criei outra variável, a "pos". 
	   
	   Não utilizei o i para indicar o indice do vetor por que ele vai
	   pulando de 2 em 2, se eu colocasse ele ia adicionar valores em:
	   * numero[2];
	   * numero[4];
	   * numero[6];
	   * ...
	    
	   Os vetores impares também iam ficar com lixo de memória.
	   
	   Como eu fiz um vetor de 50 posições, uma hora ele ia estourar o 
	   numero maximo e dar erro. Se você fizer um vetor de 100 posições
	   funciona, mas acho que ficar deixando lixo de memória nos indices
	   impares do vetor não é bom, mas não sei qual jeito é melhor, minha
	   escolha foi usar outra variável para contar de 1 em 1.
	   
	*/
	for(i = 2; i <= 100; i+=2)
	{
		numero[pos] = i;
		pos++;
	}
	
	// Saída - Mostra os números guardados no vetor.
	for(i = 0; i < 50; i++)
	{
		printf("%d\n", numero[i]);
	}	
	
	
	system("PAUSE");
	return 0;
}
