#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i != j && (i + j) != 4) {
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos fora das diagonais: %d", soma);
    return 0;
}
