#include <stdio.h>

int main() {
    int vetor[8], x, y;
    for(int i = 0; i < 8; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o índice X (0-7): ");
    scanf("%d", &x);
    printf("Digite o índice Y (0-7): ");
    scanf("%d", &y);
    if(x >= 0 && x < 8 && y >= 0 && y < 8) {
        printf("Soma dos valores: %d", vetor[x] + vetor[y]);
    } else {
        printf("Índices inválidos!");
    }
    return 0;
}
