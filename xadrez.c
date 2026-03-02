#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
// Constantes de movimentação
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasBaixoCavalo = 2;
    const int casasEsquerdaCavalo = 1;

    printf("--- Simulação de Movimentos de Xadrez ---\n\n");

    // 1. Torre: 5 casas para a Direita (FOR)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Bispo: 5 casas na diagonal Cima/Direita (WHILE)
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // 3. Rainha: 8 casas para a Esquerda (DO-WHILE)
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // 4. Cavalo: 2 casas para Baixo e 1 para a Esquerda (Loops Aninhados)
    // Usamos um loop FOR para a parte vertical e um WHILE aninhado para a horizontal.
    printf("Movimento do Cavalo:\n");
    
    for (int i = 1; i <= 1; i++) { // Loop externo para garantir a execução do conjunto de movimentos
        int j = 1;
        // Primeiro, o cavalo desce as duas casas
        while (j <= casasBaixoCavalo) {
            printf("Baixo\n");
            j++;
        }
        // Após descer, ele faz o movimento perpendicular para a esquerda
        // Como o requisito pede loops aninhados, o movimento horizontal ocorre dentro do contexto do vertical
        int k = 1;
        while (k <= casasEsquerdaCavalo) {
            printf("Esquerda\n");
            k++;
        }
    }
    printf("\n");

    return 0;

}
