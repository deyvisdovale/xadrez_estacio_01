#include <stdio.h>

int main() {
    // =============================
    // MOVIMENTO DA TORRE (usando FOR)
    // =============================
    int casasTorre = 5; // número de casas que a torre vai mover
    printf("Movimento da Torre:\n");
    
    // Torre move em linha reta - neste caso, 5 casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    
    printf("\n"); // linha em branco para separar as saídas

    // =============================
    // MOVIMENTO DO BISPO (usando WHILE)
    // =============================
    int casasBispo = 5; // número de casas que o bispo vai mover
    int i = 1; // contador
    printf("Movimento do Bispo:\n");
    
    // Bispo move-se na diagonal (cima + direita)
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // =============================
    // MOVIMENTO DA RAINHA (usando DO-WHILE)
    // =============================
    int casasRainha = 8; // número de casas que a rainha vai mover
    int j = 1;
    printf("Movimento da Rainha:\n");
    
    // Rainha pode mover em todas as direções, mas aqui faremos 8 casas para a esquerda
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    // Fim do programa
    printf("\nMovimentação concluída!\n");

    return 0;
}
