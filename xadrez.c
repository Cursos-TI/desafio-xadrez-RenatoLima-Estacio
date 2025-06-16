#include <stdio.h>

int main() {
    // Constantes para o número de movimentos de cada peça
    const int TORRE = 5;
    const int BISPO = 5;
    const int RAINHA = 8;

    printf("Simulação de Movimentos no Xadrez\n\n");

    // 1. Movimento da Torre (usando for) - 5 casas para a direita
    printf("Movimento da Torre (%d casas para a direita):\n", TORRE);
    for (int i = 0; i <  TORRE; i++) {
        printf("Direita\n");
    }

    // 2. Movimento do Bispo (usando while) - 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo (%d casas na diagonal cima-direita):\n", BISPO);
    int contador_bispo = 0;
    while (contador_bispo < BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // 3. Movimento da Rainha (usando do-while) - 8 casas para a esquerda
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", RAINHA);
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < RAINHA);

    return 0;
}
