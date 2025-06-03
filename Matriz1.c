#include <stdio.h>

int main() {
    int matriz[3][3], menor;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(i == 0 && j == 0) menor = matriz[i][j];
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    printf("Menor valor da matriz: %d", menor);
    return 0;
}
