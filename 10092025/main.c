#include <stdio.h>
#include <math.h>

int main()
{
    /*
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }
    */

    /*
    int quad;
    for(int i = 1; i <= 20; i++){
        quad = pow(i, 2);
        printf("%d\n", quad);
    }
    */

    /*
    int num;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    for(int i = 0; i <= num; i = i + 3){
        printf("%d\n", i);
    }
    */

    /*
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    for(int i = num; i >= 0; i--){
        printf("%d\t", i);
    }
    */

    /*
    int idade, cont = 1, totalH = 0, totalM = 0, somaH = 0;
    char sexo;
    double peso, somaM = 0;
    do{
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("Agora informe seu sexo (f ou F) para feminino e (m ou M) para masculino: ");
        scanf(" %c", &sexo);
        printf("Por fim, informe seu peso: ");
        scanf("%lf", &peso);
        if(sexo == 'F' || sexo == 'f'){
            totalM++;
            somaM +=peso;
        }
        else if(sexo == 'm' || sexo == 'M'){
            totalH++;
            somaH+=idade;
        }
        cont++;
    }
    while(cont <= 2);

    double mediaM = somaM/totalM;
    double mediaH = somaH/totalH;

    printf("a. Mulheres: %d\n", totalM);
    printf("a. Media dos pesos: %.2lf\n", mediaM);
    printf("b. Homens: %d\n", totalH);
    printf("b. media das idades: %.2lf", mediaH);
    */

    /*
    int num, maior, menor, soma = 0;
    double media;
    printf("Informe um numero: ");
    scanf("%d", &num);
    maior = num;
    soma = num;
    menor = num;
    for(int i = 1; i <= 9; i++){
        printf("Informe um numero: ");
        scanf("%d", &num);
        soma += num;
        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
    }
    media = soma/10.0;
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media: %.2lf", media);
    */




    int n1, n2, opcao;
    printf("1. Multiplicar\n");
    printf("2.Somar\n");
    printf("3.Subtrair\n");
    printf("4.Dividir\n");
    printf("5.Sair\n");
    printf("Qual opcao deseja?\n");
    scanf("%d", &opcao);
    while(opcao != 5){
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    if(opcao == 1){
        opcao = n1 * n2;
        printf("Resultado: %d\n", opcao);
    }
    else if(opcao == 2){
        opcao = n1 + n2;
        printf("Resultado: %d\n", opcao);
    }
    else if(opcao == 3){
        if(n1 > n2){
            opcao = n1 - n2;
            printf("Resultado: %d\n", opcao);
            }
            else if(n1 < n2){
                opcao = n2 - n1;
                printf("Resultado: %d\n", opcao);
            }
    }
    else if(opcao == 4){
        if(n2 == 0){
            printf("Denominador 0!!\n");
        }
        else{
            opcao = n1 / n2;
            printf("Resultado %d\n", opcao);
        }
    }
    printf("1. Multiplicar\n");
    printf("2.Somar\n");
    printf("3.Subtrair\n");
    printf("4.Dividir\n");
    printf("5.Sair\n");
    printf("Qual opcao deseja?\n");
    scanf("%d", &opcao);
    }
    printf("Saindo...");
    return 0;
}
