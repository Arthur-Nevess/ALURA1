#include"ex11_f.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void abertura(char* palavra)
{
    puts("Escreva uma palavra e eu verificarei se é um palindromo");
    scanf(" %[^\t\n]", palavra);
}

char* removeEspaço(char* espaço, int *tamanho)
{
    int len=strlen(espaço);

    int j=0;

    for(int i=0; i<len;i++)
    {
        if(espaço[i]!=' ')
        {
            espaço[j]=espaço[i];
            j++;
        }
    }

    espaço[j]='\0';
    (*tamanho)=strlen(espaço);
    return espaço;
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

void continua_(int*continua)
{
      puts("");
      printf("Se quiser jogar novamente tecle 1 se não tecle 2\n");
      scanf("%d",continua);
      printf("\033[2J\033[1;1H");
}
