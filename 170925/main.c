#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int opcao;
    printf("Informe o codigo do produto desejado: ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Alimento nao-perecivel!!");
    }
    else if(opcao == 2){
        printf("Alimento perecivel!!");
    }
    else if(opcao == 3){
        printf("Vestuario!!");
    }
    else if(opcao == 4){
        printf("Limpeza!!");
    }
    else{
        printf("Opcao invalida!!");
    }
    */

    /*
    int RA;
    double n1, n2, n3, ME, mediafinal;
    printf("Informe o RA do aluno: ");
    scanf("%d", &RA);
    printf("Informe a primeira nota: ");
    scanf("%lf", &n1);
    printf("Informe a segunda nota: ");
    scanf("%lf", &n2);
    printf("Informe a terceira nota: ");
    scanf("%lf", &n3);
    printf("Por fim, informe a nota dos exercicios: ");
    scanf("%lf", &ME);
    mediafinal = (n1 + n2*2 + n3*3 + ME)/7;
    if(mediafinal <= 90){
        printf("%d:\n nota1: %.2lf, nota2: %.2lf, nota3: %.2lf, nota dos exercicios: %.2lf\n Media final: %.2lf\n", RA, n1, n2, n3, ME);
        printf("Conceito A: Aprovado!!");
    }
    else if(mediafinal >= 75 && mediafinal < 90){
         printf("%d:\n nota1: %lf, nota2: %.2lf, nota3: %.2lf, nota dos exercicios: %.2lf\n Media final: %.2lf\n", RA, n1, n2, n3, ME);
         printf("Conceito B: Aprovado!!");
    }
    else if(mediafinal >= 60 && mediafinal < 75){
         printf("%d:\n nota1: %.2lf, nota2: %.2lf, nota3: %.2lf, nota dos exercicios: %.2lf\n Media final: %.2lf\n", RA, n1, n2, n3, ME);
         printf("Conceito C: Aprovado!!");
    }
    else if(mediafinal >= 40 && mediafinal < 60){
         printf("%d:\n nota1: %.2lf, nota2: %.2lf, nota3: %.2lf, nota dos exercicios: %.2lf\n Media final: %.2lf\n", RA, n1, n2, n3, ME);
         printf("Conceito D: Reprovado!!");
    }
    else{
         printf("%d:\n nota1: %.2lf, nota2: %.2lf, nota3: %.2lf, nota dos exercicios: %.2lf\n Media final: %.2lf\n", RA, n1, n2, n3, ME);
         printf("Conceito E: Reprovado!!");
    }
    */

    /*
    char entrada;
    int tinto = 0, rose = 0, branco = 0, totalvinhos = 0;
    while(entrada != 'F'){
        printf("Informe o tipo de vinho (T) para tinto, (R) para rose e (B) para branco: ");
        scanf(" %c", &entrada);
        if(entrada == 't' || entrada == 'T'){
            totalvinhos++;
            tinto++;
        }
        else if(entrada == 'r' || entrada == 'R'){
            totalvinhos++;
            rose++;
        }
        else if(entrada == 'b' || entrada == 'B'){
            totalvinhos++;
            branco++;
        }
    }
    printf("Tinto: %d\nRose: %d\nBranco: %d\nTotal de vinhos variados: %d\n", tinto, rose, branco, totalvinhos);
    printf("SAINDO");
    */

    /*
    int votos, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0;
    while(votos != 0){
        printf("Informe em qual candidato deseja votar:\n1- Trump\n2- Bozo\n3- Lula\n4- Dilma\n5- Nulo\n6- Branco:\n ");
        scanf("%d", &votos);
        switch(votos){
        case 1:{
            cand1++;
            break;
            }
        case 2:{
            cand2++;
            break;
            }
        case 3:{
            cand3++;
            break;
            }
        case 4:{
            cand4++;
            break;
            }
        case 5:{
            nulo++;
            break;
            }
        case 6:{
            branco++;
            break;
            }
        }
    }
    printf("Candidato Trump: %d\n", cand1);
    printf("Candidato Bozo: %d\n", cand2);
    printf("Canditado Lula: %d\n", cand3);
    printf("Candidata Dilma: %d\n", cand4);
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);
    */

    int bits, cinq, dez, cinco, um, resto;

    printf("Informe a quantidade de bits que deseja retirar: ");
    scanf("%d", &bits);
    cinq = bits/50;
    resto = bits % 50;
    dez = resto/10;
    resto = resto % 10;
    cinco = resto/5;
    resto = resto% 5;
    um = resto/1;
    resto = resto % 1;

    printf("Voce retirou %d notas de cinquenta, %d notas de dez, %d notas de cinco, %d notas de um.", cinq, dez, cinco, um);
    return 0;
}
