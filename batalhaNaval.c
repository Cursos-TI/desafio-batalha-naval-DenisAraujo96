#include <stdio.h>

int main() {
    // Definindo o tabuleiro de batalha naval (10x10)
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Linhas do tabuleiro
    int tabuleiro[10][10]; // Matriz para representar o tabuleiro 

    // Inicializando todas as posições do tabuleiro 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Declarando e posicionando dois navios (tamanho fixo de 3 posições)
    // Navio 1: horizontal (linha E, começando na coluna 2)
    int navioHorizontal[3] = {3, 3, 3}; // Valores representam o navio
    int linhaHorizontal = 4; // Índice da linha (E = índice 4)
    int colunaHorizontal = 2; // Índice inicial da coluna

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i]; // Posiciona na matriz
    }

    // Navio 2: vertical (coluna 7, começando na linha C)
    int navioVertical[3] = {3, 3, 3}; // Valores representam o navio
    int linhaVertical = 2; // Índice inicial da linha (C = índice 2)
    int colunaVertical = 6; // Índice da coluna

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i]; // Posiciona na matriz
    }

    // Imprimindo o tabuleiro no console
    printf("   "); // Espaço para o cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Cabeçalho numérico das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]); // Cabeçalho com letras das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe os valores da matriz
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>

int main() {
    // Definindo o tabuleiro de batalha naval (10x10)
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Linhas do tabuleiro
    int tabuleiro[10][10]; // Matriz para representar o tabuleiro (0 = água)

    // Inicializando todas as posições do tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Declarando e posicionando dois navios horizontal e vertical (tamanho fixo de 3 posições)
    // Navio 1: horizontal (linha E, começando na coluna 2)
    int linhaHorizontal = 4; // Índice da linha (E = índice 4)
    int colunaHorizontal = 2; // Índice inicial da coluna
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3; // Posiciona na matriz
    }

    // Navio 2: vertical (coluna 7, começando na linha C)
    int linhaVertical = 2; // Índice inicial da linha (C = índice 2)
    int colunaVertical = 6; // Índice da coluna
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3; // Posiciona na matriz
    }

    // Declarando e posicionando dois navios diagonais (tamanho fixo de 3 posições)
    // Navio 3: diagonal principal (começando em B2)
    int linhaDiagonalPrincipal = 1; // Índice da linha (B = índice 1)
    int colunaDiagonalPrincipal = 1; // Índice da coluna
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDiagonalPrincipal + i][colunaDiagonalPrincipal + i] = 3; // Posiciona na diagonal principal
    }

    // Navio 4: diagonal secundária (começando em G9)
    int linhaDiagonalSecundaria = 6; // Índice da linha (G = índice 6)
    int colunaDiagonalSecundaria = 8; // Índice da coluna
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDiagonalSecundaria - i][colunaDiagonalSecundaria - i] = 3; // Posiciona na diagonal secundária
    }

    // Imprimindo o tabuleiro no console
    printf("   "); // Espaço para o cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Cabeçalho numérico das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]); // Cabeçalho com letras das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe os valores da matriz
        }
        printf("\n");
    }

    return 0;
}*/
