#include <stdio.h>
#include <string.h>

#define MAX_N 100
#define MAX_NOME 21

int main() {
    char nomes[MAX_N][MAX_NOME];
    int problemas_resolvidos[MAX_N];
    int n, i, j;
    
    int instancia = 1;
    
    while (scanf("%d", &n) == 1) {
        // Ler os dados dos alunos
        for (i = 0; i < n; i++) {
            scanf("%s %d", nomes[i], &problemas_resolvidos[i]);
        }
        
        // Ordenar os alunos em ordem decrescente de problemas resolvidos
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (problemas_resolvidos[i] < problemas_resolvidos[j] ||
                    (problemas_resolvidos[i] == problemas_resolvidos[j] && strcmp(nomes[i], nomes[j]) > 0)) {
                    // Trocar as posições dos alunos i e j
                    char temp_nome[MAX_NOME];
                    int temp_problemas_resolvidos;
                    strcpy(temp_nome, nomes[i]);
                    temp_problemas_resolvidos = problemas_resolvidos[i];
                    strcpy(nomes[i], nomes[j]);
                    problemas_resolvidos[i] = problemas_resolvidos[j];
                    strcpy(nomes[j], temp_nome);
                    problemas_resolvidos[j] = temp_problemas_resolvidos;
                }
            }
        }
        
        // Imprimir o resultado da instância
        printf("Instancia %d\n", instancia++);
        printf("%s\n\n", nomes[n - 1]);
    }
    
    return 0;
}
