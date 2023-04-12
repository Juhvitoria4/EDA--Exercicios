#include <stdio.h>

int main() {
    int n, vetor[10000], x, i;
    scanf("%d", &n);  // lê o tamanho do vetor
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);  // lê os elementos do vetor
    }
    scanf("%d", &x);  // lê o número a ser verificado
    for (i = 0; i < n; i++) {
        if (vetor[i] == x) {  // verifica se o número está no vetor
            printf("pertence\n");
            return 0;
        }
    }
    printf("nao pertence\n");  // se chegou aqui, o número não está no vetor
    return 0;
}
