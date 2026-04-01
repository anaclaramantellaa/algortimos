#include <stdio.h>

int main()
{
    /*
   char caracter_char;
   char caracter_int;
   caracter_char = 'a';
   caracter_int = 99;
   printf("Caracter variavel char: %c\n", caracter_char);
   printf("Tabela ASCII: %c\n", caracter_int);
   */

   /*
   int num1 = 11;
   double num2 = 3.5;
   char caracter = 'b';
   printf("inteiro: %d; decimal: %lf; caracter: %c", num1, num2, caracter);
    */

    /*
    int num1 = 11;
   double num2 = 3.5;
   char caracter = 'b';
   printf("inteiro: %d\ndecimal: %lf\ncaracter: %c;", num1, num2, caracter);
    */


    /*
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    printf("Numero informado: %d", num);
    */

    /*
    char carac;
    int num;
    double dec;
    printf("Informe um caractere: ");
    scanf("%c", &carac);
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    printf("Informe um numero decimal: ");
    scanf("%lf", &dec);
    printf("Caractere: %c\nInteiro: %d\nDecimal: %.2lf\n", carac, num, dec );
    */

    int num1;
    int num2;
    int soma;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("O resultado dos dois numeros eh: %d", soma);

    return 0;
}
