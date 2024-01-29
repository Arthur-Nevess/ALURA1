#include <stdio.h>

int main()
{
    int num=0;

    printf ("Escreva um número entre 10 e 100\n");
    scanf (" %d \n", &num);

    for(int i=0; i<=num; i++ )
    {
        if( num % 2 == 0)
        {
            printf("%d \n", num);
          
        }

        num--;
        
    }

    return 0;
}