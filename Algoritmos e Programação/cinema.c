#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrarCinema(int cinema[10][10]);
int Menu(int cliente);
void Estatisticas(float total_arrecadado, float valor_medio, int qtde1, int qtde2, int qtde3);

int main(){
    setlocale(LC_ALL, "Portuguese");    
    
    float entrada, total_arrecadado = 0, valor_medio = 0;
    
    int qtde_pessoas = 0, op, fileira, poltrona;
        
    // Quantidade de tipos de pessoas(Integral, Idoso e Estudante)
    int qtde1 = 0, qtde2 = 0, qtde3 = 0;
    
    int i, j, cinema[10][10];
    
    // Coloca 0 em todas as posicoes
    for(i = 0; i < 10; i++)
    {
          for(j = 0; j < 10; j++)
          {
                cinema[i][j] = 0;      
          }
    }
    
    // Valor da entrada
    printf("Valor da entrada: ");
    scanf("%f", &entrada);  
    
    // Entrada de cada Cliente
    do {
        op = Menu(++qtde_pessoas);
        
        switch(op)
        {
              case 1:
                   qtde1++;
                   total_arrecadado += entrada;
                   break;
              case 2:
                   qtde2++;
                   total_arrecadado += (entrada / 2.0);
                   break;
              case 3:
                   qtde3++;
                   total_arrecadado += (entrada / 2.0);
                   break;          
        }        
        
        if(op != 4)
        {
            do {
            
               do {
                  printf("Digite a fileira desejada: ");
                  scanf("%d", &fileira);
                
                  if(fileira < 1 || fileira > 10)
                  {
                      printf("\n\t  ======== ERRO =========\n\tNumero de fileira invalido. \n\t     Digite novamente.\n\n");   
                  }
                
                } while (fileira < 1 || fileira > 10);
        
                do {
                   printf("Digite a poltrona desejada: ");
                   scanf("%d", &poltrona);
                
                   if(poltrona < 1 || poltrona > 10)
                   {
                      printf("\n\t  ======== ERRO =========\n\tNumero de poltrona invalido. \n\t     Digite novamente.\n\n"); 
                   }
                
                } while (poltrona < 1 || poltrona > 10);
        
                if(cinema[10 - fileira][poltrona - 1] == 1)
                {
                   printf("\n\t======== ERRO =========\n\tLugar ocupado, digite outro.\n\n\n");                    
                }
        
            } while (cinema[10 - fileira][poltrona - 1] == 1);
        
            cinema[10 - fileira][poltrona - 1] = 1;
        
            mostrarCinema(cinema);
        }        
    } while (op != 4 && qtde_pessoas < 100);   
    
    valor_medio = total_arrecadado / (qtde1 + qtde2 + qtde3);
    
    Estatisticas(total_arrecadado, valor_medio, qtde1, qtde2, qtde3);
    mostrarCinema(cinema);
    
    system("PAUSE");
    return 0;    
}

int Menu(int cliente){
     int op;
     do {
        printf("\n==========  CLIENTE %d ==========\n", cliente);
        printf("\n======== Menu de Opções ========\n\n");
        printf("\t1 - Integral\n");
        printf("\t2 - Estudante\n");
        printf("\t3 - Idoso\n");
        printf("\t4 - Iniciar sessão\n\n\nSua escolha: ");
     
        scanf("%d", &op);
        
        if(op < 1 || op > 4)
        {
              printf("\n\t======== ERRO =========\n\tDigite uma opcao valida\n\n\n");    
        }
        
     } while(op < 1 || op > 4);
     
     return op;
}

void mostrarCinema(int cinema[10][10]){
     int i, j;
     
     printf("\n \t    [1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]  [10]\n");
                                                  
     printf(" \t========================================================\n");
     printf(" \t|\t\t\t\t\t\t       |\n\n");
     
     for(i = 0; i < 10; i++)
     {
          printf("[%d]\t|  ", 10 - i);
          for(j = 0; j < 10; j++)
          {
                (j == 9)? printf("  %d    |", cinema[i][j]) : printf("  %d  ", cinema[i][j]);    
          }
          printf("\n\n");
     }     
     printf(" \t|\t\t\t\t\t\t       |\n");
     printf(" \t===========[             Tela             ]=============\n\n");
}

void Estatisticas(float total_arrecadado, float valor_medio, int qtde1, int qtde2, int qtde3)
{
     printf("\n\n\n\n================================================================");
     printf("\n\t\t\tESTATISTICAS\n================================================================\n\n");
     
     printf("TOTAL ARRECADADO: R$ %.2f\n\n", total_arrecadado);
     printf("VALOR MEDIO DA ENTRADA: R$ %.2f\n\n", valor_medio);
     printf("QUANTIDADE DE CLIENTES INTEGRAIS: %d\n\n", qtde1);
     printf("QUANTIDADE DE CLIENTES IDOSOS: %d\n\n", qtde2);
     printf("QUANTIDADE DE CLIENTES ESTUDANTES: %d\n\n", qtde3);
     
     printf("\n================================================================\n\n\n");     
}

















