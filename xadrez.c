#include <stdio.h>

// ==================================================
// FUNÇÃO RECURSIVA - TORRE
// Move 5 casas para a direita
// ==================================================
void moverTorre(int casas) {

    // Condição de parada
    if(casas == 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva
    moverTorre(casas - 1);
}

// ==================================================
// FUNÇÃO RECURSIVA - RAINHA
// Move 8 casas para a esquerda
// ==================================================
void moverRainha(int casas) {

    // Condição de parada
    if(casas == 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva
    moverRainha(casas - 1);
}

// ==================================================
// FUNÇÃO RECURSIVA - BISPO
// Movimento diagonal: cima + direita
// Também utiliza loops aninhados
// ==================================================
void moverBispo(int casas) {

    // Condição de parada
    if(casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    // Loop externo -> movimento vertical
    for(vertical = 1; vertical <= 1; vertical++) {

        // Loop interno -> movimento horizontal
        for(horizontal = 1; horizontal <= 1; horizontal++) {

            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva
    moverBispo(casas - 1);
}

int main() {

    // Quantidade de movimentos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Variáveis do cavalo
    int movimentosCima = 2;
    int movimentosDireita = 1;

    int i;
    int j;

    // ======================================
    // MOVIMENTO DA TORRE
    // ======================================
    printf("Movimento da Torre:\n");

    moverTorre(casasTorre);

    printf("\n");

    // ======================================
    // MOVIMENTO DO BISPO
    // ======================================
    printf("Movimento do Bispo:\n");

    moverBispo(casasBispo);

    printf("\n");

    // ======================================
    // MOVIMENTO DA RAINHA
    // ======================================
    printf("Movimento da Rainha:\n");

    moverRainha(casasRainha);

    printf("\n");

    // ======================================
    // MOVIMENTO DO CAVALO
    // Movimento em "L":
    // 2 casas para cima
    // 1 casa para a direita
    //
    // Utilizando loops aninhados,
    // múltiplas variáveis,
    // continue e break
    // ======================================
    printf("Movimento do Cavalo:\n");

    // Loop externo
    for(i = 1; i <= movimentosCima; i++) {

        // Exibe movimento para cima
        printf("Cima\n");

        // Controle com continue
        if(i < movimentosCima) {
            continue;
        }

        // Loop interno
        for(j = 1; j <= movimentosDireita; j++) {

            printf("Direita\n");

            // Controle com break
            break;
        }
    }

    return 0;
}