#include <stdio.h>

int main() {
    int n, i, indice_menor = 0;
    scanf("%d", &n);
    int vetor[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] < vetor[indice_menor]) {
            indice_menor = i;
        }
    }

    printf("%d\n", indice_menor);
    return 0;
}
