#include <stdio.h>
#include <stdlib.h>

void Imprimir(char m[5][5]);

int main(){
    
    int i, j, esc_i, esc_j, vida = 1, qtde;
    char m[5][5], maux[5][5];
    
    for(i = 0; i < 5; i++)
    {
          for(j = 0; j < 5; j++)
          {
                m[i][j] = 'X';
                maux[i][j] = 'X';
          } 
    }
    
    for(i = 0; i < 10; i++)
    {
		   system("clear");
		   
		   printf("===========================================\n\t  PLANTE AS 10 BOMBAS!\n===========================================\n\n");                   
		   
		   Imprimir(m);		   
		   do {
				printf("\n BOMBA %d - Digite uma posicao (x,y): ", i + 1);
				scanf("%d,%d", &esc_i, &esc_j);
				
				if(m[esc_i][esc_j] == 'O')
				{
					 printf("\n     =================================\n\t          ERRO\n     Ja existe uma bomba nessa posição\n     =================================\n");                   
				}				
		   } while (m[esc_i][esc_j] == 'O');                      
           
           m[esc_i][esc_j] = 'O';
    }
       
    for(qtde = 0; qtde < 15 && vida == 1; qtde++)
    {		
		  system("clear");  
		  printf("===========================================\n\t  FUJA DAS 10 BOMBAS!\n===========================================\n\n");                   
          Imprimir(maux); 
          do {         
				printf("\nRODADA %d/15 - Digite uma posicao (x,y): ", qtde + 1);
				scanf("%d,%d", &esc_i, &esc_j);
				
				if(m[esc_i][esc_j] == ' ')
				{
					 printf("\n     =================================\n\t          ERRO\n      Essa posição ja foi selecionada\n     =================================\n");                   
				}	
          } while (m[esc_i][esc_j] == ' '); 
          
          if(m[esc_i][esc_j] == 'O')
          {
			    system("clear");
                printf("===========================================\n\t       PERDEU :c\n===========================================\n");                 
                vida--;
                Imprimir(m);
          }
          else {
               m[esc_i][esc_j] = ' ';     
               maux[esc_i][esc_j] = ' ';
          }          
    }
    
    if(vida == 1)
    {
			system("clear");
            printf("===========================================\n\t         VENCEU!!!\n===========================================\n\n");                          
            Imprimir(m);        
    }
    
    return 0;    
}

void Imprimir(char m[5][5])
{
     int i, j;
     
     for(i = 0; i < 5; i++)
     {
		  printf("\t[%d]", i);
	 }
     
     printf("\n");
     for(i = 0; i < 5; i++)
     {
		  printf("[%d]", i);
          for(j = 0; j < 5; j++)
          {
                printf("\t %c", m[i][j]);
          } 
          printf("\n");
     }     
}
