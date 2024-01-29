#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[15];
    char vogal[5];

    sprintf(vogal, "aeiou");

    printf("Escreva uma palavra\n");
    scanf("%s", &palavra );
    

    for(int i=0; i< strlen(palavra); i++)
    {

        for(int j=0; j<5;j++)
        {
            if(palavra[i]==vogal[j])
            {
                printf("%c", palavra[i]);
            }
        }
    }



    return 0;
}