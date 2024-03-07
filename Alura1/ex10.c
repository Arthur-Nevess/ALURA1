#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* copiaString( char* original)
{
    int tamanho = strlen(original);
    
    char* copia = (char*)malloc((tamanho+1)*sizeof(char));

    if(copia==NULL)
    {
        puts("Não foi possivel alocar memoria");
        exit(1);
    }

    strcpy(copia, original);

    return copia;
}

int main()
{
    char  original[12];
    sprintf(original, "Olá mundo");

    char* copia = copiaString(original);

    printf("Original %s\n", original);
    printf("copia %s\n", copia);

    free(copia);
}