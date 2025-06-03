#include <stdio.h>

int main() {
    int vetor[5];
    int soma = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("Valores lidos:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMédia: %.2f", soma / 5.0);
    return 0;
}
