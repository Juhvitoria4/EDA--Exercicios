#include <stdio.h>

int main() {
    int L, D, K, P;
    scanf("%d %d %d %d", &L, &D, &K, &P);
    
    int custo_km = K * L;
    int num_pedagios = L / D;
    
    int custo_pedagios = num_pedagios * P;
    
    int custo_total = custo_km + custo_pedagios;
    
    printf("%d\n", custo_total);
    
    return 0;
}
