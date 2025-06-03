#include <stdio.h>

int main() {
    float vetor[10], somaPositivos = 0;
    int negativos = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0) {
            negativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f", somaPositivos);
    return 0;
}
