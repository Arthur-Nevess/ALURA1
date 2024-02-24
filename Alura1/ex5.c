#include <stdio.h>

int main()
{
    int jogar=0;
    do
    {
        int pot = 0;
        int num=0;
        int resp=1;

            puts("Escreva o número que você quer ver a potencia");
        scanf("%d", &num);
        puts("Quer ver esse número elevado à quanto?");
        scanf("%d", &pot);
        for(int i=0; i<pot;i++)
        {
            resp=num*resp;
        }
        printf("Resposta %d\n", resp);
        printf("Quer continuar?\n\n Tecle 0 para Sim e 1 para Não\n");
        scanf("%d", &jogar);
        printf("\033[2J\033[1;1H");
    }while(!jogar);
    return 0;
}