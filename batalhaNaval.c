#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Criando o tabuleiro
    int tabuleiro[10][10];

    //inicializando o tabuleiro
    for (int i=0; i < 10; i++){
        for (int j=0; j<10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    //impressão do tabuleiro
    printf("  ");
    for (int i=0; i<10; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%c ", linha[i]);//imprime cabeçalho
        for (int j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);//imprime as letras        
        }
        printf("\n");
    }
   

    return 0;
}
