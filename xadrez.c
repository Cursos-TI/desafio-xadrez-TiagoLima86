#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

void movTorre(int casas){
    if (casas > 0){
        printf("Frente\n");
        movTorre(casas -1);
    }
}

void movRainha(int casas){
    if (casas > 0){
    printf ("Esquerda \n");
    movRainha(casas -1);
    }
}

void movBispo(int casas){
    if (casas > 0){
        printf("Cima\n");
        printf("Direita\n");
        movBispo(casas - 1);
    }
}

int main(){

    //Declarando variaveis
    int movimento, peca;

    //Apresentando menu interativo
    printf("MOVIMENTO PEÇAS DE XADREZ!!!\n");
    printf("Escolha qual peça deseja mover\n");
    printf("1 - Torre \n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Qual sua escolha: ");
    scanf("%d", &peca);

    switch (peca){

        //Condição do movimento da torre usando o FOR
        case 1:
            
            printf("Quantas casas deseja que a Torre se mova: ");
            scanf("%d", &movimento);
            movTorre(movimento);
            /*
            Condição para movimentos dos desafios anteriores
            printf("A Torre vai se mover 5 casas para frente:\n");
            for (movimento = 1; movimento <=5; movimento++)
                {
                    printf("Frente\n");
                }
            */

        break;

        //Condição do movimento do Bispo usando o while
        case 2:

            printf("Quantas casas deseja que Bispo se mova na diagonal: ");
            scanf("%d", &movimento);
            movBispo(movimento);
                /* condição do desafio anterior
                movimento = 1;
                printf("O Bispo se movimentará 5 casas na diagonal direita!\n");
                while (movimento <=5){
                    printf("Cima\n");
                    printf("Direita\n");
                    movimento++;
                }
                */
        break;

        //Condição do movimento da Rainha usando o do while
        case 3:
            printf("Quantas casas deseja que a Rainha se mova: ");
            scanf("%d", &movimento);
            movRainha(movimento);
            /* Condição dos desafios anteriores
            printf("A rainha se moverá 8 casas para esquerda!\n");
            do {

                printf("Esquerda\n");
                movimento --;

            } while (movimento >= 1);
            */
        break;

        case 4:
            printf("O Cavalo se movimentará 2 casas para cima e 1 para direita\n");
            int vert, hori;
            vert = 1;
            while (vert--){
                for (hori = 0; hori < 2; hori++){
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
            break;

        default:
            printf("Escolha inválida!!");
            break;    
    
    }

return 0;    
}
