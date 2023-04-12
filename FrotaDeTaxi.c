#include <stdio.h>

int main() {
    double preco_alcool, preco_gasolina, rend_alcool, rend_gasolina;
    scanf("%lf %lf %lf %lf", &preco_alcool, &preco_gasolina, &rend_alcool, &rend_gasolina);
    
    double custo_km_alcool = preco_alcool / rend_alcool;
    double custo_km_gasolina = preco_gasolina / rend_gasolina;
    
    char combustivel;
    if (custo_km_alcool < custo_km_gasolina)
        combustivel = 'A';
    else
        combustivel = 'G';
    
    printf("%c\n", combustivel);
    
    return 0;
}
