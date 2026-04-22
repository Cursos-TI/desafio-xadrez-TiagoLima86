#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

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
            
            printf("A Torre vai se mover 5 casas para frente:\n");
            for (movimento = 1; movimento <=5; movimento++)
                {
                    printf("Frente\n");
                }


        break;

        //Condição do movimento do Bispo usando o while
        case 2:
                movimento = 1;
                printf("O Bispo se movimentará 5 casas na diagonal direita!\n");
                while (movimento <=5){
                    printf("Cima\n");
                    printf("Direita\n");
                    movimento++;
                }

        break;

        //Condição do movimento da Rainha usando o do while
        case 3:
            movimento = 8;
            printf("A rainha se moverá 8 casas para esquerda!\n");
            do {

                printf("Esquerda\n");
                movimento --;

            } while (movimento >= 1);

        break;

        //ADICIONANDO O MOVIMENTO DO CAVALO USANDO LOOP ANINHADO.
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
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
