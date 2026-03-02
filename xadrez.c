#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   // Definição das constantes de movimentação
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("--- Simulação de Movimentos de Xadrez ---\n\n");

    // 1. Movimentação da Torre (Usando FOR)
    // A Torre move-se 5 casas para a Direita.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimentação do Bispo (Usando WHILE)
    // O Bispo move-se 5 casas na diagonal para Cima e Direita.
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // 3. Movimentação da Rainha (Usando DO-WHILE)
    // A Rainha move-se 8 casas para a Esquerda.
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    return 0;

}
