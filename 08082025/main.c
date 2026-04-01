#include <stdio.h>

int main()
{
    /*
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    num+= 1;
    printf("Ao adicionarmos um fica: %d", num);
    */

    /*raio
    double raio, area, perimetro;
    printf("Informe o valor do raio do circulo: ");
    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;
    perimetro = 2 * 3.14159 * raio;
    printf("O valor da area eh: %.5lf\n", area);
    printf("O valor do perimetro eh: %.5lf\n ", perimetro);
    */


    /*dias vividos
    int idade, dias;
    printf("Informe a idade que deseja saber quantos dias tem: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("A quantidade de dias vividos eh: %d", dias);
    */


    /*4/100
   int num;
   int porcentagem;
   printf("Informe o numero que deseja os quatro por cento: ");
   scanf("%d", &num);
   porcentagem = num * 0.04;
   printf("Os quatro por cento do numero digitado sao: %d", porcentagem);
   */


   /*media
   int n1, n2, n3;
   int soma;
   int media;
   printf("Informe a primeira nota: ");
   scanf("%d", &n1);
   printf("Informe a segunda nota: ");
   scanf("%d", &n2);
   printf("Informe a terceira nota: ");
   scanf("%d", &n3);
   soma = n1 + n2 + n3;
   media = soma / 3;
   printf("A media foi: %d", media);
   */

   /*ponderada
   int n1, n2, n3;
   int ponderada;
   int media;
   printf("Informe a primeira nota: ");
   scanf("%d", &n1);
   printf("Informe a segunda nota: ");
   scanf("%d", &n2);
   printf("Informe a terceira nota: ");
   scanf("%d", &n3);
   ponderada = (n1 * 2) + (n2 * 3) + (n3 * 5);
   media = ponderada / 10;
   printf("A media foi: %d", media);
   */

    /*distancia
    double dis, temp, media;
    printf("Informe a distancia percorrida: ");
    scanf("%lf", &dis);
    printf("Informe o tempo: ");
    scanf("%lf", &temp);
    media = dis / temp;
    printf("A media foi: %lf", media);
    */

    /*custo do veiculo
    double fabrica, custo;
    printf("Informe o valor do veiculo no preco de fabrica: ");
    scanf("%lf", &fabrica);
    custo = (0.28 * fabrica) + (0.45 * fabrica) + fabrica;
    printf("O custo ao consumidor eh de: %.2lf", custo);
    */

    /*
    int num, dez;
    printf("Informe um numero inteiro de tres casas decimais: ");
    scanf("%d", &num);
    dez = (num / 10) % 10;
    printf("A dezena eh: %d", dez);
    */


    int data, dia, mes, ano;
    printf("Informe seu aniversario: ");
    scanf("%d", &data);
    dia = (data / 10000) % 100;
    printf("dia: %d\n", dia);
    mes = (data / 100) % 100;
    printf("mes: %d\n", mes);
    ano = data % 100;
    printf("ano: %d", ano);


    return 0;
}
