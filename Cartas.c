#include <stdio.h>

int main() {
    int cartas[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }

    if (cartas[0] < cartas[1] && cartas[1] < cartas[2] && cartas[2] < cartas[3] && cartas[3] < cartas[4]) {
        printf("C\n");
    }

    else if (cartas[0] > cartas[1] && cartas[1] > cartas[2] && cartas[2] > cartas[3] && cartas[3] > cartas[4]) {
        printf("D\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}
