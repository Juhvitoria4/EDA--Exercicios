#include <stdio.h>
#include <string.h>

#define MAX_TAM 1001

int main() {
    char str[MAX_TAM];
    int tam, i;
    
    scanf("%s", str);
    tam = strlen(str);
    
    for (i = tam - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
