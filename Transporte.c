#include <stdio.h>

int main() {
    int A, B, C, X, Y, Z;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &X, &Y, &Z);

    // Verifica quantos contêineres cabem na largura, comprimento e altura do navio
    int nLarg = X / A;
    int nComp = Y / B;
    int nAlt = Z / C;

    // Calcula a quantidade máxima de contêineres que cabem no navio
    int maxCont = nLarg * nComp * nAlt;

    printf("%d\n", maxCont);
    return 0;
}
