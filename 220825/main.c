#include <stdio.h>
#include <math.h>

int main()
{
    /*
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if(idade < 18){
        printf("Voce eh menor de idade!!");
    }
    else if(idade >= 18 && idade < 64){
        printf("Voce eh maior de idade: ");
    }
    else{
        printf("Voce eh um idoso!!");
    }
    */

    /*
    int n1, n2, r1, r2;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);
    r1 = n1 % 2;
    r2 = n2 % 2;
    if(r1 == 0 && r2 == 0 ){
        printf("Ambos os numeros sao pares!!");
    }
    else if(r1 == 0 || r2 == 0){
        printf("Um dos numeros eh par");
    }
    else{
        printf("Nenhum numero eh par");
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





    return 0;
}
