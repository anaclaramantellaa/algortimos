#include <stdio.h>

int main()
{
    /*
    int num, cont = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);
    do{
        printf("%d x %d = %d\n", num, cont, (num * cont));
        cont++;
    }
    while(cont <= 10);
    */

    int num, maior, menor, indice = 1;

    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(indice == 1){
            maior = num;
            menor = num;
            indice++;
        }
        else if(num != 0){
            if(num > maior){
                maior = num;
            }
            else if(num < menor){
                menor = num;
            }
        }
    }
    while(num != 0);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}
