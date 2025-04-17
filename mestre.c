#include <stdio.h>

// Número de casas para cada movimento
const int casasTorre = 5;
const int casasBispo = 5;
const int casasRainha = 8;

// ----------------- FUNÇÕES RECURSIVAS -----------------

// Torre: Movimento para Direita
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Bispo: Movimento Diagonal Cima Direita (recursivo)
void moverBispoCimaDireita(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoCimaDireita(casas - 1);
}

// Rainha: Movimento para Esquerda
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// ----------------- BISPO COM LOOPS ANINHADOS -----------------
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {  // vertical
        for (int j = 0; j < casas; j++) {  // horizontal
            if (i == j) {  // só movimenta na diagonal
                printf("Diagonal Inferior Esquerda\n");
            }
        }
    }
}

// ----------------- CAVALO COM LOOPS COMPLEXOS -----------------
void moverCavaloL() {
    // Movimento: duas casas para cima e uma para direita
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= 2; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }
        }
    }
}

// ----------------- MAIN -----------------
int main() {
    printf("Movimento da Torre:\n");
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoCimaDireita(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaEsquerda(casasRainha);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoComLoops(casasBispo);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavaloL();
    printf("\n");

    return 0;
}
