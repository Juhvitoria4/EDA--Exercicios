#include <stdio.h>

/*
int main(){
    double m, cm, dm, mm;
    printf("Digite um valor em metros: " );
    scanf("%lf", &m);

    printf("escolha um correspondente em 1 - cm, 2 - dm, 3- mm\n");
    int valor;
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        cm = m * 100;
        printf("%2.f", cm);
        break;
    case 2:
        dm = m * 10;
        printf("%2.f", dm);
        break;
    case 3: 
        mm =  m * 1000;
        printf("%2.f", mm);
        break;

    default:
        printf("valor não correspondente");
        break;
    }


}

*/

int main(){
    int n1 = 9;

    for(int i = 0; i <= 10; i++){
        int operacao = n1 * i;
        printf("%d\n", operacao);
    }

    return 0;
}