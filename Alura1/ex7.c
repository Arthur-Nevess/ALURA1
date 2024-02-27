#include <stdio.h>

int main ()
{
    int num[10];
    int soma=0;
    
    for (int i=0; i<10;i++)
    {
        printf("Digite um número(%d de 10): ", i);
        scanf("%d", &num[i]);
        soma=soma+num[i];
    }

    printf("\nA soma de todos os números que você digitou é:%d", soma);
}