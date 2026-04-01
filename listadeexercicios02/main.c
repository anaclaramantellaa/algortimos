#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i, mediaA, mediaP;
    double a, b, c ;
    printf("Informe um numero inteiro: ");
    scanf("%d", &i);
    printf("Agora, informe mais tres valores (decimal ou inteiro): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(i % 2 == 0){
        mediaA = (a + b + c) / 3;
        printf("A media aritmetica eh: %d", mediaA);
    }
    else if(i > 10){
        mediaP = (a * 2 + b * 3 + c * 4) / 9;
        printf("A media ponderada eh: %d", mediaP);
    }
    else{
        printf("O numero informado eh impar!!");
    }
    */

    /*
    int base, altura, area, perimetro;
    printf("Informe o valor da base: ");
    scanf("%d", &base);
    printf("Informe o valor da altura: ");
    scanf("%d", &altura);
    if(base == altura){
        printf("QUADRADO!");
    }
    else if(base != altura){
        area = base * altura;
        perimetro = base * 2 + altura * 2;
        printf("RETANGULO!! perimetro: %d  area: %d", perimetro, area);
    }
    else{
        printf("Opcao invalida");
    }
    */

    /*
    int a, b, escolha;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &b);
    printf("O que deseja executar?\n");
    printf("1- Soma de dois numeros\n");
    printf("2- Diferenca entre dois numeros (maior pelo menor)\n");
    printf("3- Produto entre dois numeros\n");
    printf("4- Divisao entre dois numeros (denominador nao pode ser zero)\n");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("Soma: %d", a + b);
    }
    else if(escolha == 2 && a > b){
        printf("Diferenca: %d", a - b);
    }
    else if(escolha == 2 && b > a){
        printf("Diferenca: %d", b - a);
    }
    else if(escolha == 3){
        printf("Produto: %d", a * b);
    }
    else if(escolha == 4 && a > 0 && b > 0){
        printf("Divisao: %d", a / b);
    }
    else{
        printf("Opcao invalida");
    }
    */

    /*
    double salario, reajuste, salarionovo, abono = 100;
    printf("Informe o valor do seu salario: ");
    scanf("%lf", &salario);
    if(salario <= 750){
        salarionovo = salario + (salario * 0.05) + abono;
        printf("Seu salario foi reajustado para: %.2lf", salarionovo);
    }
    else{
        salarionovo = salario + (salario * 0.05);
        printf("Seu salario foi reajustado para: %.2lf", salarionovo);
    }
    */

    int prato, sobrem, bebida, calorias;
    printf("MENU: \n");
    printf("Pratos: 1- vegetariano(180cal),2- peixe(230cal), 3- frango(250cal) e 4- carne(350cal): ");
    scanf("%d", &prato);
    printf("Sobremesas: 1- abacaxi(75cal), 2- sorvete diet(110cal), 3- mousse diet(180cal) e 4- mousse chocolate(200cal): ");
    scanf("%d", &sobrem);
    printf("Bebidas: 1- cha(20cal), 2- suco de laranja(70cal), 3- suco de melao(100cal) e 4- refrigerante(65cal)");
    scanf("%d", &bebida);
    if(prato == 1 && sobrem == 1 && bebida == 1){
        calorias = 180 + 75 + 20;
        printf("Calorias: %d", calorias);
    }
    else if(prato == 1 && sobrem == 1)
    else if(prato == 1 && sobrem == 1)
    else if(prato == 1 && sobrem == 1)
    else if(prato == 1 && sobrem == 2)
    else if(prato == 1 && sobrem == 2)
    else if(prato == 1 && sobrem == 2)
    else if(prato == 1 && sobrem == 2)
    else if(prato == 1&& sobrem == 3)
    else if(prato == 1 && sobrem == 3)
    else if(prato == 1 && sobrem == 3)
    else if(prato == 1 && sobrem == 3)
    else if(prato == 1 && sobrem == 4)
    else if(prato == 1 && sobrem == 4)
    else if(prato == 1 && sobrem == 4)
    else if(prato == 1 && sobrem == 4)
    else if(prato == 2 && sobrem == 1)
    else if(prato == 2 && sobrem == 1)
    else if(prato == 2 && sobrem == 1)
    else if(prato == 2 && sobrem == 1)
    else if(prato == 2 && sobrem ==)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 2)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 3)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)
    else if(prato == 4)


    return 0;
}
