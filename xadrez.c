#include <stdio.h>

/**
 * Funções Recursivas para Torre, Bispo e Rainha
 * A recursão substitui o laço tradicional chamando a si mesma até atingir o caso base.
 */

// Função recursiva para a Torre (Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva diminuindo o contador
    }
}

// Função recursiva para o Bispo (Diagonal: Cima e Direita)
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Função recursiva para a Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Definição das constantes
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("--- Simulador de Xadrez Avançado ---\n\n");

    // 1. TORRE (Recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // 2. BISPO (Recursividade + Loops Aninhados)
    // O requisito pede o uso de loops aninhados para simular a diagonal (Vertical e Horizontal)
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= casasBispo; i++) { // Loop Externo: Vertical
        for (int j = 1; j <= 1; j++) {      // Loop Interno: Horizontal
            printf("Cima ");
        }
        printf("Direita\n");
    }
    printf("\n");

    // 3. RAINHA (Recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // 4. CAVALO (Loops Complexos e Múltiplas Variáveis)
    // Movimento: 2 para Cima e 1 para a Direita.
    // Usamos um loop for com múltiplas variáveis e condições de controle.
    printf("Movimento do Cavalo:\n");
    
    for (int i = 1, totalVertical = 2; i <= 1; i++) { // i controla a execução do movimento completo
        int j = 1;
        while (j <= totalVertical) {
            printf("Cima\n");
            j++;
            if (j > totalVertical) { // Condição para o movimento perpendicular final
                int k = 0;
                while (k < 1) {
                    printf("Direita\n");
                    k++;
                    break; // Finaliza o movimento horizontal
                }
            }
        }
    }
    printf("\n");

    return 0;
}