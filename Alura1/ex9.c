# include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num;
    puts("Escreva um número inteiro");
    scanf("%d", &num);
    int *n;
    n = (int*)malloc(num * sizeof(int));
     
    if (n==NULL)
    {
       puts ("Erro ao tentar alocar memoria");
       return 1;
    }

    printf("Agora digite na tela uma sequencia de  %d nº:\n", num);

    for(int i=0; i < num; i++)
    {
        printf("Digite aqui:");
        scanf(" %d", &n[i]);
    }

    printf("\n");
    puts("Essa foi a sequencia escolhida:");
    for (int i=0;i < num; i++)
    {
        printf("(%d)\n", n[i]);
    }
    free(n);

 return 0;
}
