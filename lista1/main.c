#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    double salarioatual, salarionovo;
    printf("Informe o valor do salario atual:");
    scanf("%lf", &salarioatual);
    salarionovo = salarioatual + (salarioatual * 0.25);
    printf("O salario com aumento eh: %.2lf", salarionovo);
    */

    /*
    double salarioatual, acrescimo, salarionovo;
    printf("Informe o valor do salario atual:");
    scanf("%lf", &salarioatual);
    printf("Informe a porcentagem de aumento:");
    scanf("%lf", &acrescimo);
    salarionovo = salarioatual + (salarioatual * acrescimo);
    printf("O salario com aumento eh: %.2lf", salarionovo);
    */

    /*
    int nascimento, dia, mes, ano, anoatual ;
    printf("Informe seu aniversario: ");
    scanf("%d", &nascimento);
    printf("Informe o ano atual:");
    scanf("%d", &anoatual);
    ano = anoatual - ( nascimento % 10000);
    mes = ano * 12;
    dia = ano * 365;
    printf(" Voce tem %d anos, %d meses e %d dias", ano, mes, dia);
    */


    /*
    int A, B, AB;
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    AB = A;
    A = B;
    B = AB;
    printf("O valor de A eh: %d e o valor de B eh: %d", A,B);
    */

    /*
    double dolar, real;
    printf("Informe o valor em real que deseja converter para dolar: ");
    scanf("%lf", &real);
    dolar = real / 5.50;
    printf("O valor informado em dolar eh: %.2lf", dolar);
    */


    double saco, sacogramas, quant, quantdia, resto;
    printf("Informe o peso do saco de racao (em kg): ");
    scanf("%lf", &saco);
    printf("Informe a quantia colocada para os gatos (em gramas): ");
    scanf("%lf", &quant);
    sacogramas = saco * 1000;
    quantdia = quant * 2;
    resto = sacogramas - (quantdia * 5);
    printf("O resto de racao que sobrou apos cinco dias foi: %.2lf", resto);




    return 0;
}
