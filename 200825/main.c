#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    if(num > 0){
        printf("O numero digitado eh positivo!!");
    }
    if(num <= 0){
        printf("O numero digitado eh nao-positivo!!");
    }
    */

    /*
    int num, r;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    r = num % 2;
    if(r == 0){
        printf("O numero eh par!!");
    }
    if(r != 0){
        printf("O numero eh impar!!");
    }
    */

    /*
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    if(num > 0){
        printf("O numero eh positivo!!");
    }
    else{
        printf("O numero eh negativo!!");
    }
    */

    /*
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("O numero eh par!!");
    }
    else{
        printf("O numero eh impar!!");
    }
    */

    /*
    int num1, num2;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &num2);
    if(num1 == num2){
        printf("Os numeros infromados sao iguais!!");
    }
    else{
        printf("Os numeros informados sao diferentes!!");
    }
    */

    /*
    int num1, num2, soma;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    if(soma > 10){
        printf("Soma maior que 10!!");
    }
    else{
        printf("Soma menor que 10!!");
    }
    */

    int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("%d, %d", num1, num2);
    }
    else{
        printf("%d, %d", num2, num1);
    }



    return 0;
}
