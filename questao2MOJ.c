#include <stdio.h>

int main() {
    int L, D, K, P, distancia_pedagio, custo_total;
    scanf("%d %d %d %d", &L, &D, &K, &P);

    distancia_pedagio = D;
    while (distancia_pedagio < L) {
        custo_total += K * D + P;
        distancia_pedagio += D;
    }

    custo_total += K * (L - distancia_pedagio + D);

    printf("%d\n", custo_total);

    return 0;
}
