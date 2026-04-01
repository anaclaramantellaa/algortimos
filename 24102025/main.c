#include <stdio.h>
#include <stdlib.h>
/*exemplo com modularização
    prototipo das funções*/
float calcula_frete(float peso_kg, float distancia_km, float tarifa_base);
void exibe_resultado(int numero_pedido, float peso, float frete);
int main()
{
    /*sem modularização
    float peso_1=5.0, peso_2=6.0, peso_3=7.0;
    float distancia_1=100.0, distancia_2=150.0, distancia_3=200.0;
    float frete_1, frete_2, frete_3;
    float tarifa_base=0.50;

    printf("Pedido 1°\n");
    printf("Peso: %.2f kg\n", peso_1);
    printf("Frete calculado: R$ .2f\n", frete_1);
    frete_1=(peso_1*2.00)+(distancia_1*tarifa_base);

    printf("Pedido 2°\n");
    printf("Peso: %.2f kg\n", peso_2);
    printf("Frete calculado: R$ .2f\n", frete_2);
    frete_2=(peso_2*2.00)+(distancia_2*tarifa_base);

    printf("Pedido 3°\n");
    printf("Peso: %.2f kg\n", peso_3);
    printf("Frete calculado: R$ .2f\n", frete_3);
    frete_3=(peso_3*2.00)+(distancia_3*tarifa_base);
    */

    float peso_1=5.0, peso_2=6.0, peso_3=7.0;
    float distancia_1=100.0, distancia_2=150.0, distancia_3=200.0;
    float frete_calculado;
    float tarifa=0.50;

    /*pedido 1*/
    frete_calculado=calcula_frete(peso_1,distancia_1,tarifa);
    exibe_resultado(1,peso_1,frete_calculado);

    /*pedido 2*/
    frete_calculado=calcula_frete(peso_2,distancia_2,tarifa);
    exibe_resultado(2,peso_2,frete_calculado);

    /*pedido 3*/
    frete_calculado=calcula_frete(peso_3,distancia_3,tarifa);
    exibe_resultado(3,peso_3,frete_calculado);


    return 0;
}
    /*função: deve retornar um float (O valor do frete)*/
float calcula_frete(float peso_kg, float distancia_km, float tarifa_base){
    /*equação: (peso*2.00) + (distancia_km*tarifa_base)*/
    float valor_frete=(peso_kg*2.00)+(distancia_km*tarifa_base);
    return valor_frete;
}
/*procedimento não retorna nada, ele é vazio(void), apenas executa*/
void exibe_resultado(int numero_pedido, float peso, float frete){
    printf("\n---Pedido %d---\n", numero_pedido);
    printf("Peso: %.2f kg\n", peso);
    printf("Frete calculado: R$ %.2f\n", frete);
}


