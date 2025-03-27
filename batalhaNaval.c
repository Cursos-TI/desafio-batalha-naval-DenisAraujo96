#include <stdio.h>

int main() {
    // Definindo o tabuleiro 
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Linhas do tabuleiro
    int tabuleiro[10][10]; // Matriz para representar o tabuleiro 

    // Inicializando todas as posições do tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando os navios no tabuleiro
    // Navio 1: horizontal (linha E, começando na coluna 2)
    int navioHorizontal[3] = {3, 3, 3};
    int linhaHorizontal = 4; // Índice da linha E
    int colunaHorizontal = 2; // Coluna inicial

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    // Navio 2: vertical (coluna 7, começando na linha C)
    int navioVertical[3] = {3, 3, 3};
    int linhaVertical = 2; // Índice inicial da linha C
    int colunaVertical = 6; // Índice da coluna 7

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    // Criando as matrizes de habilidades especiais
    // Habilidade Cone (3x5, origem no topo centro)
    int cone_matrix[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int distancia = j - 2;
            if (distancia < 0) distancia = -distancia;
            if (distancia <= i) {
                cone_matrix[i][j] = 1;
            }
        }
    }

    // Habilidade Cruz (3x5, origem no centro)
    int cruz_matrix[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 || j == 2) {
                cruz_matrix[i][j] = 1;
            }
        }
    }

    // Habilidade Octaedro (3x5, origem no centro)
    int octa_matrix[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int di = i - 1;
            if (di < 0) di = -di;
            int dj = j - 2;
            if (dj < 0) dj = -dj;
            if (di + dj <= 1) {
                octa_matrix[i][j] = 1;
            }
        }
    }

    // Definindo as origens das habilidades no tabuleiro
    int cone_linha = 5;
    int cone_coluna = 3; 

    int cruz_linha = 2; 
    int cruz_coluna = 7; )

    int octa_linha = 8; 
    int octa_coluna = 4; 
    // Aplicando a habilidade Cone ao tabuleiro
    for (int mi = 0; mi < 3; mi++) {
        for (int mj = 0; mj < 5; mj++) {
            if (cone_matrix[mi][mj] == 1) {
                int board_row = cone_linha + mi;
                int board_col = cone_coluna + (mj - 2);
                if (board_row >= 0 && board_row < 10 && board_col >= 0 && board_col < 10) {
                    tabuleiro[board_row][board_col] = 5;
                }
            }
        }
    }

    // Aplicando a habilidade Cruz ao tabuleiro
    for (int mi = 0; mi < 3; mi++) {
        for (int mj = 0; mj < 5; mj++) {
            if (cruz_matrix[mi][mj] == 1) {
                int board_row = cruz_linha + (mi - 1);
                int board_col = cruz_coluna + (mj - 2);
                if (board_row >= 0 && board_row < 10 && board_col >= 0 && board_col < 10) {
                    tabuleiro[board_row][board_col] = 5;
                }
            }
        }
    }

    // Aplicando a habilidade Octaedro ao tabuleiro
    for (int mi = 0; mi < 3; mi++) {
        for (int mj = 0; mj < 5; mj++) {
            if (octa_matrix[mi][mj] == 1) {
                int board_row = octa_linha + (mi - 1);
                int board_col = octa_coluna + (mj - 2);
                if (board_row >= 0 && board_row < 10 && board_col >= 0 && board_col < 10) {
                    tabuleiro[board_row][board_col] = 5;
                }
            }
        }
    }

    // Imprimindo o tabuleiro com as habilidades
    printf("   "); // Espaço para o cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Cabeçalho numérico das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]); // Cabeçalho com letras das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe os valores (0, 3, 5)
        }
        printf("\n");
    }

    return 0;
}
