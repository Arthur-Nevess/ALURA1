#include <stdio.h>
#include <stdlib.h>


typedef struct pessoa
{
    float altura;
    int idade;
    char nome[50];
    
};

int main()
{
    FILE *texto;

    texto = fopen("texto1.txt", "w+");

    if (texto != NULL)
    {
        fprintf(texto, "%s", "Primeiro código de manipulação de arquivo");
    }
    

    return 0;
} 