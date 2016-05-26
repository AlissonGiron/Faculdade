#include <stdio.h>

void Abreviar(char nome[]);

int main(){ 

	char nome[100];
	
	fgets(nome, 100, stdin);
	
	Abreviar(nome);
	
	return 0;
}

void Abreviar(char nome[])
{
	int i, qtde_esp = 0, abrev = 0; 
	
	for(i = 0; nome[i] != '\0'; i++)
	{
		if(nome[i] == ' ')
			qtde_esp++;
	}
		
	for(i = 0; nome[i] != '\0'; i++)
	{
		if(!abrev) {
			if(qtde_esp > 1 && nome[i - 2] == ' ')
			{
					printf(".");
					abrev = 1;
					qtde_esp--;
			}
			else {
					printf("%c", nome[i]);
			}
		}
		else {
			if(nome[i] == ' ') {
				printf(" ");
				abrev = 0;
			}
		}
	}	
}
