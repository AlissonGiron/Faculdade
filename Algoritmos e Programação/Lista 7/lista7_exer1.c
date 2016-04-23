/*
	1. Receber 10 números e armazená-los em um vetor. Ao final, exibir 
	os números na ordem que foram recebidos.
*/

#include <stdio.h>

int main()
{
	// Variável para o for
	int i;
	
	/*
		Declaração de vetor:
		
		Vetor se declara como uma váriavel normal, mas com colchetes e o 
		número de posições no final. 
		* Ex.: int numero[5]; -----> vetor "numero", do tipo int e com 
		cinco espaços. É como se fossem cinco variaveis "numero".
		 
		 Variáveis                            Vetor 
		
		int numero1;
		int numero2;       é igual
		int numero3;       ------>        int numero[5];
		int numero4;
		int numero5; 
	*/
	
	
	/* 
	   O exercício pede para receber 10 números, então vamos criar um
	   vetor de 10 posições
	*/
	int numero[10];
		
	
	/* 
		Para acessar cada posição do vetor, temos que indicar o 
		indice(posição) dele dentro daquele vetor.
		O indice de um vetor começa em 0;
		
	    Ex.: int numero[5];  ---->   vetor de cinco posições	   
	    Posições:
	      numero[0]; ----> Primeira posição
	      numero[1]; ----> Segunda posição
	      numero[2]; ----> Terceira posição
	      numero[3]; ----> Quarta posição
	      numero[4]; ----> Quinta posição
	       
	    Ex.2: Se tivermos um vetor de 4 posições do tipo float chamado
	    "lado", e quisermos adicionar o valor 2.5 na 3ª posição:
	    
	    float lado[4];
	    
	    ---> O indice começa em 0, então a 3ª posição seria o indice 2.
	    * lado[0];
	    * lado[1];
	    * lado[2]; <----- 3ª posição. 
	    * lado[4];
	    
	    Dai é só trabalhar como se fosse uma variável normal:
	     
	    lado[2] = 2.5;
	    
	*/
	
	/*
		Voltando ao exercicio:
		* 1. Receber 10 números e armazená-los em um vetor. Ao final, exibir 
	      os números na ordem que foram recebidos.
		
		Já criamos o vetor, agora vamos receber cada valor com scanf. 
		É possível fazer isso fazendo 10 scanf assim:
		* scanf("%d", &numeros[0]);
		* scanf("%d", &numeros[1]);
		* scanf("%d", &numeros[3]);
		* ...
		
		Mas, é mais recomendado usar for para isso
		* (é mais rapido, bonito, fácil, melhor pra manutenção, etc)
		
		Então, ao invés de ficarmos criando vários scanf, vamos colocar
		ele dentro de um for, precisamos receber 10 números, então vamos
		fazer um for de 10 repetições.
		 
		Para acessar o indice dos vetores, podemos usar a variável i do for,
		como o indice de vetor começa em 0, vamos igualar i a 0 no começo. i = 0;
		Para repetir 10 vezes, vamos adicionar 1 ao i a cada volta, i++;
		* e como i começa em 0, para repetir 10 vezes vamos mandar ele repetir
		enquanto i < 10; (se colocarmos i <= 10, ele repete 11 vezes)
		
		Fica assim: for(i = 0; i < 10; i++)
		 
		Dentro do for, vamos colocar o scanf, e usar o i para indicar a 
		posição dentro do vetor, de [0] a [9];
		
		for(i = 0; i < 10; i++)
		{
		    printf("\nDigite um numero: ");
			scanf("%d", &numero[i]);
		}	
		 
		Vou escrever fora do comentário: 
	*/
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
	}
	
	/*
	    * Voltando ao Exercício:
		1. Receber 10 números e armazená-los em um vetor. Ao final, 
		exibir os números na ordem que foram recebidos.
		
		* Para mostrar os números, vamos fazer o mesmo for, que vai 
		passar por todas as posições do vetor e mostrar o valor num 
		printf. Para isso, só vamos tirar o scanf e colocar um printf 
		mostrando o valor.
	*/
	
	for(i = 0; i < 10; i++)
	{
		printf("\nPosição %d: %d", i, numero[i]);
	}	
	
	return 0;
}

