#include <stdio.h>

void Converter(int num, int base);
void Hexa(int num);

int main(){    
    int n, op;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Selecione o sistema a ser convertido: ");
    printf("\n1. Binario\n2. Octal\n3. Hexadecimal\n");
    scanf("%d", &op);
    
    switch(op)
    {
         case 1:
              Converter(n, 2);
              break;
         case 2:
              Converter(n, 8);
              break;
         case 3:
              Converter(n, 16);
              break; 
    }
    
    return 0;    
}

void Converter(int num, int base){
     if(base != 16)
     {
           int bits[30], i, qtde = 0;       
             
           for(i = 0; num >= base; i++)
           {
                 bits[i] = num % base;
                 qtde++;
                 num /= base;
           }
           
           bits[qtde] = num;
           
           for(i = qtde; i >= 0; i--)
           {
                 printf("%d", bits[i]);      
           }
             
           printf("\n");
     } 
     else {
           Hexa(num);       
     }
}

void Hexa(int num){          
	int bits[30], i, qtde = 0;       
             
	for(i = 0; num >= 16; i++)
	{
		 bits[i] = num % 16;
		 qtde++;
		 num /= 16;
	}

	bits[qtde] = num;

	for(i = qtde; i >= 0; i--)
	{
		if(bits[i] < 10)
			 printf("%d", bits[i]);
		else
			 printf("%c", 'A' + (bits[i] - 10));    
	}

	printf("\n");     
}
