#include <stdio.h>

int main() {
    int vetor[6];
    for(int i = 0; i < 6; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Valores lidos:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
