#include <stdio.h>
#include <math.h>

int main()
{
    /*
    int num, cont = 1;
    printf("Informe um numero: \n");
    scanf("%d", &num);
    if(num > 0){
        while(cont <= num){
            printf("%d\t", cont);
            cont++;
        }
    }
    else{
        printf("O numero deve ser positivo!!");
    }
    */

    /*
    int num;
    printf("Informe um numero positivo: ");
    scanf("%d", &num);
    if(num > 0){
        while(num >= 1){
            printf("%d\t", num);
            num--;
        }
    }
    else{
        printf("O numero deve ser positivo!!");
    }
    */

    /*
    int num, cont = 1, soma = 0;
    while(cont <= 5){
        printf("Informe o %d° numero: ", cont);
        scanf("%d", &num);
        soma = soma + num; //soma += num
        cont++;
    }
    printf("Soma dos numeros: %d", soma);
    */

    /*
    int num, cont = 1, soma = 0, media;
    while(cont <= 10){
        printf("Informe o %d° numero: ", cont);
        scanf("%d", &num);
        soma = soma += num;
        cont++;
    }
    media = soma / 10;
    printf("Media dos numeros: %d", media);
    */

    /*
    int num, cont = 1, soma = 0;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(num > 0){
        while(cont <= num){
            soma = soma + cont;
            cont++;
        }
    }
    else{
        printf("O numero deve ser positivo!!");
    }
    printf("soma: %d", soma);
    */

    /*
    int cont = 1, n, num, somaP = 0, somaI = 0, quantI = 0;
    printf("Informe a quantidade de numeros: ");
    scanf("%d", &n);
    while(cont <= n){
        printf("Informe o %d°", cont);
        scanf("%d", &num);
        if(num % 2 == 0){
            somaP = somaP + num;
        }
        else{
            somaI = somaI + num;
            quantI++;
        }
        cont++;
    }
    printf("Soma dos pares: %d\n", somaP);
    printf("Media dos impares: %d\n", somaI / quantI);
    */

    /*
    int num, soma = 0, quant = 0;
    printf("Informe um numero: ");
    scanf("%d", &num);
    while(num != 0){
        soma += num;
        quant++;
        printf("Informe um numero: ");
        scanf("%d", &num);
    }
    printf ("Media: %d\n",(soma/quant));
    */



    /*dowhile*/

    int i = 0;
    do{
        printf("%d\t", i);
        i++;
    }
    while(i <= 10);

    return 0;
}
