#include <stdio.h>
#include <string.h>

int main() {
    int n, i, min_problemas, idx_min;
    char nome[21], nome_min[21];

    int instancia = 1;
    while (scanf("%d", &n) != EOF) {
        min_problemas = 11;
        for (i = 0; i < n; i++) {
            scanf("%s", nome);
            int problemas;
            scanf("%d", &problemas);
            if (problemas < min_problemas || (problemas == min_problemas && strcmp(nome, nome_min) > 0)) {
                min_problemas = problemas;
                strcpy(nome_min, nome);
                idx_min = i;
            }
        }

        printf("Instancia %d\n", instancia++);
        printf("%s\n\n", nome_min);
    }

    return 0;
}
