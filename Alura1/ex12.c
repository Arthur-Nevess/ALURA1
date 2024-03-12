#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int n2;
    
    puts("Qual o tamanho da sua palavra?");
    scanf("%d", &n);
    char palavra[n];

    puts("Escreva a palavra:");
    scanf("%s", palavra);

    puts("Escreva o tamanho da outra palavra:");
    scanf("%d", &n2);
    char palavra2[n2];

    puts("Escreva a outra palavra:");
    scanf("%s", palavra2);
    puts("");
    
    int soma=n+n2;
    int conta=0;
    
    char* concatena= (char*)malloc((soma+1)*sizeof(char));
    if(concatena==NULL)
    {
        puts("Não foi possivel alocar memoria");
        return 1;
    }

    for(int i=0; i<soma; i++)
    {
        if(i<n)
        {
            concatena[i]=palavra[i];
        }

        else
        {
            concatena[n++]=palavra2[conta++];
        }
    }

    concatena[soma]='\0';
    printf("%s\n", concatena);
    char letra = 65;
    printf("%c", letra);
    free(concatena);
    return 0;
}