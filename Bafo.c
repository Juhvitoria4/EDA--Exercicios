#include <stdio.h>

int main() {
    int r, a, b, i, aldov, betov, teste=0;

    scanf("%d", &r);

    while (r != 0) {
        aldov = 0;
        betov = 0;
    
        for (i = 0; i < r; i++) {
            scanf("%d %d", &a, &b);
            aldov += a;
            betov += b;
        }

        teste++;
        printf("Teste %d\n", teste);
   
        if (aldov > betov) {
            printf("Aldo\n\n");
        } else {
            printf("Beto\n\n");
        }

        scanf("%d", &r);
    }
    return 0;
}
