#include <stdio.h>

int main()
{
    int num=0;
    printf("Digite um número para ver o fatorial dele:");
    scanf("%d", &num);
    int fat=num*(num-1);
    int inter=num;

    for (int i=0; i<num; i++)
    {
        
          
        
            printf("%d\n", fat);
            inter = inter -2;
            
            fat=fat*inter;
        
            if(i==num-1)
            {
                printf("Resposta final=");
            }

           
    }
    return 0;
}