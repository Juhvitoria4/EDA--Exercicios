#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // lê os valores escolhidos pelos jogadores

    if (a != b && a != c) { // jogador A ganhou
        printf("A\n");
    } else if (b != a && b != c) { // jogador B ganhou
        printf("B\n");
    } else if (c != a && c != b) { // jogador C ganhou
        printf("C\n");
    } else { // nenhum jogador ganhou
        printf("empate\n");
    }

    return 0;
}
