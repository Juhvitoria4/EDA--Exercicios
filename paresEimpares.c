#include <stdio.h>

int main() {
    int n, vetor[10000], pares[10000], impares[10000], i, j = 0, k = 0;
    scanf("%d", &n);  // lê o tamanho do vetor
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);  // lê os elementos do vetor
        if (vetor[i] % 2 == 0) {  // se o número é par
            pares[j] = vetor[i];  // adiciona à lista de pares
            j++;
        } else {  // se o número é ímpar
            impares[k] = vetor[i];  // adiciona à lista de ímpares
            k++;
        }
    }
    // imprime os elementos pares do vetor
    for (i = 0; i < j; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    // imprime os elementos ímpares do vetor
    for (i = 0; i < k; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");
    return 0;
}
