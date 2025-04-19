#include <stdio.h>

int main() {
    // Definição das linhas do tabuleiro (letras na horizontal)
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Criando o tabuleiro 10x10 e inicializando com 0
    int tabuleiro[10][10] = {0};
    
    // Posicionando navio na horizontal nas colunas D, E, F (índices 3, 4, 5) na linha 3
    for (int j = 3; j <= 5; j++) {
        tabuleiro[3][j] = 3;
    }
    
    // Posicionando navio na vertical nas linhas 6, 7, 8 na coluna i (supondo i = 1 para exemplo)
    int coluna_i = 1; // Substitua pelo índice desejado
    for (int i = 6; i <= 8; i++) {
        tabuleiro[i][coluna_i] = 3;
    }
    
    // Exibindo o tabuleiro
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
