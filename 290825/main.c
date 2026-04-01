#include <stdio.h>
#include <math.h>

int main()
{
    /*while*/
    /*
    int n = 1;
    while(n <= 10){
        printf("%d\t", n);
        n++;
    }
    */

    /*
    int num, fat = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);
    while(num >= 1){
        fat*= num;
        num--;
    }
    printf("Fatorial: %d", fat);
    */

    /*
    int cont = 1, num, soma = 0;
    while(cont <=10 ){
        printf("Informe o %d ° numero: ", cont);
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    printf("A soma dos numeros eh: %d", soma);
    */

    /*
    int cont = 1, num, somaP = 0, quantN = 0;
    while(cont <= 15){
        printf("Informe o %d ° numero: ", cont);
        scanf("%d", &num);
        if(num >= 0){
            somaP = somaP + num; /*mesma coisa que somaP+=num*//*
        }
        else{
            quantN++;
        }
        cont++;
    }
    printf("Soma dos positivos: %d\n", somaP);
    printf("Quantidade dos negativos: %d\n", quantN);
    */

    int num, cont = 2, maior, menor;
    printf("Informe o 1° numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while(cont <= 10){
        printf("Informe o %d° numero: ", cont);
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
        cont++;
    }
    printf("Maior: %d, Menor: %d", maior, menor);



    return 0;
}
