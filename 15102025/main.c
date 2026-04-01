#include <stdio.h>
#include <limits.h>
#include <stddef.h>
#define NUM_ALUNOS 6


int main()
{
    /*
    printf("--- Tamanho dos Tipos de Dados em Bytes ---\n");
    printf("char: %zu bytes\n", sizeof(char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("int: %zu bytes\n", sizeof(int));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long %zu bytes\n", sizeof(long long));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));
    printf("size_t (tipo de sizeof): %zu bytes\n", sizeof(size_t));
    */

    /*
    char nome[15]= "Algoritmos C";
    int i;
    printf("Nome como String: %s\n", nome);
    printf("Nome Caracter por Caracter:\n ");

    for(i=0; nome[i]!= '\0'; i++){
        printf("Char na posicao[%d]: %c\n", i, nome[i]);
    }
    */


    float notas[NUM_ALUNOS];
    float soma = 0.0;
    float media = 0.0;
    printf("Entrada das notas:\n ");
    for(int i=0; i<NUM_ALUNOS; i++){
        printf("Digite a nota do aluno: %d", i+1);
        scanf("%f", &notas[i]);
    }
    for(int i=0; i<NUM_ALUNOS; i++){
        soma= soma+notas[i];
    }
    media= soma/NUM_ALUNOS;
    printf("\n---Resultados---\n");
    printf("Soma total das notas: %f\n", soma);
    printf("Numero de alunos: %d\n", NUM_ALUNOS);
    printf("Media da turma: %f\n", media);


    return 0;
}
