#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
    

    //variaveis do jogo
    char jogada;
    char machine[4];
    sprintf(machine, "plt");
    srand(time(0));
    int operador = rand();
    int machinechute=operador%3;
    int jogador=0;
    int maquina=0;
    int condicional=5;



    puts("=====================");
    puts("Pedra, papel, tesoura");
    puts("=====================");


    puts("INSTRUÇÕES: PARA PEDRA DIGITE (P), PARA PAPEL (L), PARA TESOURA DIGITE (T)");

    for(int i=0; i < condicional ; i++)
    {

       
        printf("jogada %d de 5\n", i);
        puts("_____________________");
        printf("Digite sua jogada:");
        scanf(" %c", &jogada);
        
       
        
            //EMPATE
            if(jogada==machine[machinechute])
            {
                puts("Empate");
                continue;
            }
            //MAQUINA GANHANDO
            else if(jogada=='l'&& machine[machinechute]=='t'||jogada=='t' && machine[machinechute]=='p'||jogada =='p'&& machine[machinechute]=='l')
            {
                puts("A MAQUINA GANHOU");
                maquina++;
            } 
            //USUARIO GANHANDO      
            else if(jogada=='t'&& machine[machinechute]=='l'||jogada=='p' && machine[machinechute]=='t'||jogada =='l'&& machine[machinechute]=='p')
            {
                puts("VOCÊ GANHOU");
                jogador++;
            }

            printf("MAQUINA %d VOCÊ %d\n", maquina, jogador);
            if(maquina==2 && jogador==2)
            {
                condicional++;
            }
            
    }

    return 0;
} 