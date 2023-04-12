#include <stdio.h>
#include <string.h>

int main() {
    char string[1001];
    int tamanho;

    scanf("%s", string); // lê a string
    tamanho = strlen(string); // calcula o tamanho da string

    printf("%d\n", tamanho); // imprime o tamanho da string

    return 0;
}
