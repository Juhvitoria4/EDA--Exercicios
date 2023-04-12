#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    int pares[n], impares[n], npares = 0, nimpares = 0;
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            pares[npares++] = i;
        } else {
            impares[nimpares++] = i;
        }
    }
    
    for (i = 0; i < npares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    
    for (i = 0; i < nimpares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");
    
    return 0;
}
