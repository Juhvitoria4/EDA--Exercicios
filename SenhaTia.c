#include <stdio.h>
#include <ctype.h>

int main() {
    int n, m, a, k, i, lowercase = 0, uppercase = 0, numbers = 0;
    char password[1001];
    
    // leitura da entrada
    scanf("%d %d %d %d %s", &n, &m, &a, &k, password);
    
    // contagem dos caracteres da senha
    for (i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            numbers++;
        } else if (islower(password[i])) {
            lowercase++;
        } else if (isupper(password[i])) {
            uppercase++;
        }
    }
    
    // verificação dos requisitos da senha
    if (i >= n && lowercase >= m && uppercase >= a && numbers >= k) {
        printf("Ok =/\n");
    } else {
        printf("Ufa :)\n");
    }
    
    return 0;
}
