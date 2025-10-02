#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    
    //declaração do tabuleiro
    int tabuleiro[10][10];
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //navio horizontal
    int navio1[3] = {3, 3, 3};
    int linhaNavio1 = 2;
    int colunaNavio1 = 4;

    //navio vertical
    int navio2[3] = {3, 3, 3};
    int linhaNavio2 = 5;
    int colunaNavio2 = 7;

    //posicionar o navio horizontal no tabuleiro
    if(colunaNavio1+3 <= 10) {
        for (int i=0; i<3; i++) {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = navio1[i];
        }
    } else {
        printf("Erro: o navio nao cabe no tabuleiro.");
        return 1;
    }

    //posicionar o navio vertical no tabuleiro
    if(linhaNavio2+3 <= 10) {
        int sobreposicao = 0;
        for (int i=0; i<3; i++) {
            if(tabuleiro[linhaNavio2 + i][colunaNavio2] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if(!sobreposicao) {
            for (int i=0; i<3; i++) {
                tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
            }
        } else {
            printf("Erro: o navio se sobrepoe a outro no tabuleiro.");
            return 1;
        }
    } else {
        printf("Erro: o navio nao cabe no tabuleiro.");
        return 1;
    }

    //exibicao do tabuleiro
    printf("\n=== Tabuleiro ===\n\n");
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
