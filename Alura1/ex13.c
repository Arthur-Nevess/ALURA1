#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[20]={4,44,9,22,39,44,4,5,9,22,39,45,4,45,9,39,9,39,45,2};

    for(int i = 0; i<20;i++)
    {
        int achou=0;
        for(int j=0;j<20;j++)
        {
            if(num[i]==num[j] && i!=j)
            {
                achou++;
            }
        } 
        if(!achou)
        {
            printf("O número %d, aparece apenas uma vez na lista\n", num[i]);
        }
    }
    return 0;
}