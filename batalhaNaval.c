#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; 
    int tamanho_navio = 3;

    
    int linha_h = 1, coluna_h = 2;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    
    int linha_v = 5, coluna_v = 7;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    
    int linha_d1 = 0, coluna_d1 = 0;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_d1 + i][coluna_d1 + i] = 3;
    }

   
    int linha_d2 = 0, coluna_d2 = 9;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_d2 + i][coluna_d2 - i] = 3;
    }

    
    printf("   ");
    for (char c = 'A'; c <= 'J'; c++) {
        printf("%c ", c);
    }
    printf("\n");

    
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
