#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void abertura(char* palavra, int* tamanho)
{
    puts("Escreva uma palavra e eu verificarei se é um palindromo");
    scanf(" %s", palavra);
    (*tamanho)=strlen(palavra);
}

char* reverter(const char* palavra, int* tamanho)
{
    int conta=(*tamanho);
    
    char* reverso = (char*) malloc((*tamanho+1)*sizeof(char));
   

    for(int i=0; i<*tamanho; i++)
    {
        if(conta>0)
        {
            reverso[i]=palavra[(conta-1)];
            conta--;
        }
    }
    reverso[(*tamanho)]='\0';

    return reverso;
}

void continua_(int*continua)
{
      puts("");
      printf("Se quiser jogar novamente tecle 1 se não tecle 2\n");
      scanf("%d",continua);
      printf("\033[2J\033[1;1H");
}

void compara(char* palavra, char*revertido)
{
    printf(" O reverso fica: %s\n", revertido);

    if(strcmp(palavra,revertido)==0)
    {
        printf("\n (Por tanto, %s é um palindromo)\n", palavra);
    }

    else
    {
        printf("\n (Por tanto, %s não é identificado como um palindromo)\n", palavra);
    }
    free(revertido);
}

int main()
{  
    char palavra[50];
    int tamanho;
    int continua=1;
    do
    { 
    abertura(palavra, &tamanho);

    char* revertido = reverter(palavra, &tamanho);
    
    compara(palavra, revertido);

    continua_(&continua);

    }while(continua==1);
 
    return 0;
}