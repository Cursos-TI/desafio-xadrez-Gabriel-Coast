#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    // Usamos a estrutura de repetição for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    // Usamos a estrutura de repetição while
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    // Usamos a estrutura de repetição do-while
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda
    // Usamos dois loops aninhados: for e while
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    const int casas_baixo = 2;
    const int casas_esquerda = 1;

    // Loop externo: movimenta duas casas para baixo
    for (int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno: movimenta uma casa para a esquerda
    int l = 0;
    while (l < casas_esquerda) {
        printf("Esquerda\n");
        l++;
    }



    return 0;
}
