#include <stdio.h>

int main() {
    int vetor[10], pares = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("Quantidade de valores pares: %d", pares);
    return 0;
}
