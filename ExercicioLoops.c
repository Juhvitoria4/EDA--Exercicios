#include <stdio.h>

int main(){
    int matricula1, matricula2;
    float nota1a, nota1b, nota1c, nota2a, nota2b, nota2c;
    float media1, media2;
    int maiorMtricula, menorMatricula;

    printf("DIgite o numero da matrícula do primeiro aluno: \n");
    scanf("%d", &matricula1);
    printf("digite o numero da matricula do segundo aluno: \n");
    scanf("%d", &matricula2);

    printf("digite as notas do aluno 1 separando por espados: \n");
    scanf("%f %f %fd", &nota1a, &nota1b, &nota1c);
    printf("digite as notas do aluno 2 separando por espacos: \n");
    scanf("%f %f %f", &nota2a, &nota2b, &nota2c);

    media1 = (nota1a + nota1b + nota1c)/3;
    media2 = (nota2a + nota2b + nota2c)/3;


    printf ( "o primeiro aluno com a matricula %d teve a media %f: \n", matricula1, media1);

    if (media1 < 40){
        printf("reprovado");
    }else if (media1 < 70)
    {
        printf ("exame final");
    }else{
        printf ("aprovado");
    }

    printf ( "\no segundo aluno com a matricula %d teve a media %f \n", matricula2, media2);
    
    if (media2 < 40){
        printf("reprovado\n");
    }else if (media2 < 70)
    {
        printf ("exame final\n");
    }else{
        printf ("aprovado\n");
    }
    
    if (media1 > media2){
        maiorMtricula = matricula1;
    }else{
        maiorMtricula = matricula2;
    }

    if (media1 < media2){
        menorMatricula = matricula1;
    }else{
        menorMatricula = matricula2;
    }

    printf("o aluno com a menor metricula e: %d\n", menorMatricula);
    printf("o aluno com a maior matricula e: %d\n", maiorMtricula);
    
    return 0;
}
