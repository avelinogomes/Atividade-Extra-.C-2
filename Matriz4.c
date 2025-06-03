#include <stdio.h>

int main() {
    int matriz[4][4], contador = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10) contador++;
        }
    }
    printf("Quantidade de valores maiores que 10: %d", contador);
    return 0;
}
