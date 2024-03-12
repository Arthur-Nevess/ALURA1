#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "ex11_f.h"

int main()
{  
    char palavra[100];
    int tamanho=0;
    int continua=1;
    do
    { 
        abertura(palavra);

        char* espaço = removeEspaço(palavra,&tamanho);

        char* revertido = reverter(espaço, &tamanho);

        compara(palavra, revertido);

        continua_(&continua);

    }while(continua==1);
 
    return 0;
}