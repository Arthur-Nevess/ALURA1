#include <stdio.h>

int main()
{
    int num;
    int confia=1;

    printf("Escolha um número para ver a progreção aritimetica :");
    scanf(" %d", &num);

    for(int i=0; i < 10; i++)
    {
        int confiomentro = num*confia;
        printf("%d\n",confiomentro);
        confia=confiomentro;
    }

    return 0;
}