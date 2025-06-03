#include <stdio.h>

int main() {
    int matriz[4][4], maior;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(i == 0 && j == 0) maior = matriz[i][j];
            if(matriz[i][j] > maior) maior = matriz[i][j];
        }
    }
    printf("Maior valor da matriz: %d", maior);
    return 0;
}
