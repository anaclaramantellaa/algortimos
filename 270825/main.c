#include <stdio.h>
#include <math.h>

int main()
{
    /*
    double pago, preco, condicao;
    printf("Informe o valor do produto que deseja adquirir: ");
    scanf("%lf", &preco);
    printf("Informe o codigo da condicao que deseja utilizar: (1)- a vista em dinheiro ou cheque que recebe 10% de desconto, (2)- a vista no cartao de credito com 15% de desconto, (3)- em duas vezes, preco normal de etiqueta sem juros, (4)- em duas vezes, preco normal de etiqueta mais juros de 10%: ");
    scanf("%lf", &condicao);
    if(condicao == 1){
        pago = preco - (preco * 0.10);
        printf("O preco a ser pago eh: %.2lf ", pago);
    }
    else if(condicao == 2){
        pago = preco - (preco * 0.15);
        printf("O preco a ser pago eh: %.2lf", pago);
    }
    else if(condicao == 3){
        pago = preco / 2;
        printf("As parcelas ficam no valor de: %.2lf", pago);
    }
    else if(condicao == 4){
        pago = ((preco * 0.10) + preco) / 2;
        printf("O valor das parcelas com 10/100 de juros eh: %.2lf", pago);
    }
    else{
        printf("Voce nao selecionou nenhuma condicao!!");
    }
    */

    /*
    int a, b, c;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &b);
    printf("Informe o terceiro numero: ");
    scanf("%d", &c);
    if(a > b && a > c && b > c){
        printf("%d %d %d", c, b, a );
    }
    else if(b > a && b > a && c > a){
        printf("%d %d %d", a, c, b);
    }
    else if(c > a && c > b && a > b){
        printf("%d %d %d", b, a, c);
    }
    else if(b > a && c > a && b > c){
        printf("%d %d %d", a, b, c);
    }
    else if(a > b && a > c && c > b){
        printf("%d %d %d", b, c, a);
    }
    else if(c > a && c > b && a > b){
        printf("%d %d %d", c, a , b);
    }
    else{
        printf("os numeros informados nao sao inteiros!!");
    }
    */

    /*
    double idealM, idealF, altura;
    char sexo;
    printf("Informe seu sexo (M ou m para masculino) e (F ou f para feminino): ");
    scanf("%c", &sexo);
    printf("Agora, informe sua altura em metros: ");
    scanf("%lf", &altura);
    idealM = (72.7 * altura) - 58;
    idealF = (62.1 * altura) - 44.7;
    if(sexo == 'M' || sexo == 'm'){
        printf("Peso ideal: %.2lf", idealM);
    }
    else if(sexo == 'F' || sexo == 'f'){
        printf("Peso ideal: %.2lf", idealF);
    }
    else{
        ("Caracter informado invalido!!");
    }
    */

    /*
     double peso, altura, imc;
    printf("Informe seu peso: ");
    scanf("%lf", &peso);
    printf("Informe sua altura: ");
    scanf("%lf", &altura);
    imc = peso / pow(altura, 2);
    if(imc < 18.5){
        printf("Magreza!!");
    }
    else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso normal!!");
    }
    else if(imc >= 25 && imc <= 29.9){
        printf("Sobrepeso!!");
    }
    else if(imc >= 30 ){
        printf("Obesidade!!");
    }
    else{
        printf("Sem informacoes corretas!!");
    }
    */

    /*
    double a, b, c, delta, x1, x2;
    printf("Informe o valor de a: ");
    scanf("%lf", &a);
    printf("Informe o valor de b: ");
    scanf("%lf", &b);
    printf("Informe o valor de c: ");
    scanf("%lf", &c);
    delta = b * b - 4 * a * c;
    if(delta < 0){
        printf("Nao existem raizes reais!!\n");
    }
    else if(delta == 0){
        x1 = -b / (2 * a);
        printf("Ha apenas uma raiz real: %.2lf", x1);
    }
    else{
        x1 = (-b + sqrt(delta) / (2 * a));
        x2 = (-b - sqrt(delta) / (2 * a));
        printf("Raizes reais: %.2lf, %.2lf", x1, x2);
    }
    */

    /*switch case: funciona apenas para variavel int e char*/

    /*
    int dia;
    printf("Informe um numero de 1 a 7: ");
    scanf("%d", &dia);
    switch(dia){
        case 1:{
        printf("DOMINGO!!\n");
        break;
               }
        case 2:{
        printf("SEGUNDA!!\n");
        break;
        }
        case 3:{
        printf("TERCA!!\n");
        break;
        }
        case 4:{
        printf("QUARTA!!");
        break;
        }
        case 5:{
        printf("QUINTA!!");
        break;
        }
        case 6:{
        printf("SEXTA!!!!!!!!!!!!!!");
        break;
        }
        case 7:{
        printf("SABADO!!");
        break;
        }
        default:{
        printf("Opcao inavlida.");
        }

    }
    */

    /*
    char conceito;
    printf("Informe o conceito de fulano na materia x: ");
    scanf("%c", &conceito);
    switch(conceito){
        case 'A':{
        printf("Excelente!!");
        break;
        }
        case 'B':{
        printf("Bom!!");
        break;
        }
        case 'C':{
        printf("Regular!!");
        break;
        }
        case 'D':{
        printf("Reprovado!!");
        break;
        }
        default:{
        printf("Opcao invalida!!");
        }
    }
    */

    int n1, n2;
    char sinal;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Agora, informe o sinal da operacao: (+) (-) (*) (/)");
    scanf(" %c", &sinal);
    switch(sinal){
        case '+':{
        printf("Resultado da adicao: %d", n1 + n2);
        break;
        }
        case '-':{
        printf("Resultado da subtraçao: %d", n1 - n2);
        break;
        }
        case '*':{
        printf("Resultado da multiplicacao: %d", n1 * n2);
        break;
        }
        case'/':{
        printf("Resultado da divisao: %d", n1 / n2);
        break;
        }
        default:{
        printf("Opcao invalida!!");
        }
    }




    return 0;
}
