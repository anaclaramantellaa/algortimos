#include <stdio.h>
#include <math.h>

int main()
{
    /*angulo
    double angulo, sen, coss, tang;
    printf("Informe o valor do angulo: ");
    scanf("%lf", &angulo);
    sen = sin(angulo);
    coss = cos(angulo);
    tang = tan(angulo);
    printf("Seno: %.2lf\n", sen);
    printf("Cosseno: %.2lf\n", cos);
    printf("Tangente: %.2lf", tang);
    */

    /*raiz
    double num, raiz;
    printf("Informe um numero: ");
    scanf("%lf", &num);
    raiz = sqrt(num);
    printf("A raiz do numero eh: %.2lf.\n ", raiz);
    */

    /*potencia
    double x, y, res;
    printf("Informe o valor de x: ");
    scanf("%lf", &x);
    printf("Informe o valor de y: ");
    scanf("%lf", &y);
    res = pow(x,y);
    printf("Resultado: %.2lf", res);
    */

    /*arredondamento
    double num;
    printf("Informe um numero: ");
    scanf("%lf", &num);
    printf("Floor: %lf\n", floor(num));
    printf("Ceil: %lf\n", ceil(num));
    printf("Round: %lf\n", round(num));
    */

    /*potencia
    double num, quad, cub;
    printf("Informe o valor que deseja o quadrado e o cubo: ");
    scanf("%lf", &num);
    quad = pow(num, 2);
    cub = pow(num,3);
    printf("Quadrado: %.2lf Cubo: %.2lf",quad, cub);
    */

    /*raiz
    double num1, num2, raiz;
    printf("Informe o valor do primeiro numero: ");
    scanf("%lf", &num1);
    printf("Informe o valor do segundo numero: ");
    scanf("%lf", &num2);
    raiz = sqrt(num1 * num2);
    printf("A raiz da multiplicacao desses dois numeros eh: %.2lf", raiz);
    */

    /*aritmetica
    double termo, pa, n, funcao;
    printf("Informe o valor do primeiro termo: ");
    scanf("%lf", &termo);
    printf("Informe o valor de P.A: ");
    scanf("%lf", &pa);
    printf("Informe o valor de n: ");
    scanf("%lf", &n);
    funcao = termo + (n - 1) * pa;
    printf("O termo calculado a partir da funcao eh: %.2lf", funcao);
    */

    double x1, x2,y1, y2, res;
    printf("Informe o x1: ");
    scanf("%lf", &x1);
    printf("Informe o x2: ");
    scanf("%lf", &x2);
    printf("Informe o y1: ");
    scanf("%lf", &y1);
    printf("Informe o y2: ");
    scanf("%lf", &y2);
    res = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("O resultado foi: %.2lf", res);


    return 0;
}
