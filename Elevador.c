#include <stdio.h>

int main() {
    int n, c, s, e, pessoas = 0, excedeu = 0;
    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &e);
        pessoas -= s; // pessoas que saíram do elevador
        pessoas += e; // pessoas que entraram no elevador
        if (pessoas > c) {
            excedeu = 1;
        }
    }
    if (excedeu) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}