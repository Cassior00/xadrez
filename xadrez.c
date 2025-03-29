#include <stdio.h>

// Definição dos passos de movimentação
#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    // Movendo o Bispo na diagonal superior direita
    printf("Movimentando o Bispo:\n");
    for (int i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("---\n");
    
    // Movendo a Torre para a direita
    printf("Movimentando a Torre:\n");
    int passos_torre = 0;
    while (passos_torre < TORRE_PASSOS) {
        printf("Direita\n");
        passos_torre++;
    }
    printf("---\n");
    
    // Movendo a Rainha para a esquerda
    printf("Movimentando a Rainha:\n");
    int passos_rainha = 0;
    do {
        printf("Esquerda\n");
        passos_rainha++;
    } while (passos_rainha < RAINHA_PASSOS);
    printf("---\n");

    return 0;
}
