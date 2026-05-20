#include <stdio.h>

int main() {

    // Quantidade de casas que cada peça irá mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    int i;
    int j;

    // ======================================
    // Movimento da Torre usando FOR
    // Torre: 5 casas para a direita
    // ======================================
    printf("Movimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ======================================
    // Movimento do Bispo usando WHILE
    // Bispo: 5 casas na diagonal
    // para cima e à direita
    // ======================================
    printf("Movimento do Bispo:\n");

    i = 1;

    while(i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // ======================================
    // Movimento da Rainha usando DO-WHILE
    // Rainha: 8 casas para a esquerda
    // ======================================
    printf("Movimento da Rainha:\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casasRainha);

    printf("\n");

    // ======================================
    // Movimento do Cavalo usando
    // loops aninhados (FOR + WHILE)
    //
    // Cavalo:
    // 2 casas para baixo
    // 1 casa para a esquerda
    // ======================================
    printf("Movimento do Cavalo:\n");

    // Loop FOR para mover para baixo
    for(i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop WHILE para mover para a esquerda
    j = 1;

    while(j <= movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}