#include <stdio.h>


int main()
{
    int opcao, i = 1;
    double nota, maior, menor, soma = 0, media = 0;
    printf("1-Lancar nota (digite uma nota de 0 a 10!!).\n");
    printf("2-Exibir media.\n");
    printf("3-Nota maior.\n");
    printf("4-Nota menor.\n");
    printf("5-Sair!!\n");
    printf("Escolha o que deseja executar:\n");
    scanf("%d", &opcao);
    while(opcao != 5){
    switch(opcao){
        case 1:{
            printf("Digite a nota: ");
            scanf("%lf", &nota);
            soma += nota;
            if(i == 1){
                maior = nota;
                menor = nota;
                i++;
            }
            else if(nota > maior){
                maior = nota;
                }
            else if(nota < menor){
                menor = nota;
        }

        break;
        }
        case 2:{
            media = soma/i;
            printf("Media: %.2lf\n", media);
            break;
        }
        case 3:{
           printf("Nota maior: %.2lf\n", maior);
            break;
        }
        case 4:{
            printf("Nota menor: %.2lf\n", menor);
            break;
            }
        case 5:{
            printf("Encerrando...\n");
            break;
        }
        default:{
        printf("Opcao invalida!!\n");
        break;
        }

    }
    printf("1-Lancar nota (digite uma nota de 0 a 10!!).\n");
    printf("2-Exibir media.\n");
    printf("3-Nota maior.\n");
    printf("4-Nota menor.\n");
    printf("5-Sair!!\n");
    printf("Escolha o que deseja executar:\n");
    scanf("%d", &opcao);

}
    printf("Encerrado!");

    return 0;
}
