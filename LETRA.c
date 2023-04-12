#include <stdio.h>
#include <string.h>

int main() {
    char letra;
    char texto[1001];
    int total_palavras = 0, palavras_com_letra = 0;
    float porcentagem;

    scanf("%c\n", &letra);  // lê a letra de interesse
    fgets(texto, 1001, stdin);  // lê o texto (incluindo o \n)

    // substitui o \n do final da string pelo caractere nulo
    texto[strcspn(texto, "\n")] = '\0';

    // conta o total de palavras e o número de palavras com a letra
    int i = 0;
    while (texto[i] != '\0') {
        // pula os espaços em branco
        while (texto[i] == ' ') {
            i++;
        }

        // verifica se a palavra contém a letra de interesse
        int tem_letra = 0;
        while (texto[i] != '\0' && texto[i] != ' ') {
            if (texto[i] == letra) {
                tem_letra = 1;
            }
            i++;
        }

        if (tem_letra) {
            palavras_com_letra++;
        }
        total_palavras++;
    }

    // calcula a porcentagem e imprime o resultado
    if (total_palavras > 0) {
        porcentagem = (float) palavras_com_letra / total_palavras * 100;
        printf("%.1f\n", porcentagem);
    } else {
        printf("0.0\n");
    }

    return 0;
}
