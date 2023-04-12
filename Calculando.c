#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd, num, num2, ans = 0;
    char operacao;
    scanf("%d", &qtd);

    while (qtd)
    {
        ++ans;
        scanf("%d", &num);
        for(int i =0; i < qtd-1; ++i){
            scanf("%c", &operacao);
            scanf("%d", &num2);
            if(operacao == '+'){
                num += num2;
            }else if(operacao == '-'){
                num -= num2;
            }
        }
        printf("Teste %d\n%d\n\n", ans, num );
        scanf("%d", &qtd);
    }
    
    
    return 0;
}


//operador tem que ser um caractere