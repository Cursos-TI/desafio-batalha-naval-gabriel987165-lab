#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

  
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

 
    int cruz_base_linha = 3, cruz_base_col = 2;
    int oct_base_linha   = 0, oct_base_col   = 5; 
    int cone_base_linha  = 7, cone_base_col  = 0; 

    //CRUZ
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 5; c++) {
            if (r == 1 || c == 2) {
                tabuleiro[cruz_base_linha + r][cruz_base_col + c] = 3;
            }
        }
    }


    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 5; c++) {
            int dr = r - 1; if (dr < 0) dr = -dr;
            int dc = c - 2; if (dc < 0) dc = -dc;
            if (dr + dc <= 1) {
                tabuleiro[oct_base_linha + r][oct_base_col + c] = 3;
            }
        }
    }

   
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 5; c++) {
            int dc = c - 2; if (dc < 0) dc = -dc;
            if (dc <= r) {
                tabuleiro[cone_base_linha + r][cone_base_col + c] = 3;
            }
        }
    }


    printf("   ");
    for (int j = 0; j < 10; j++) printf("%2d", j);
    printf("\n");


    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}