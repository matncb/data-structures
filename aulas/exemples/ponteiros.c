/*
Faça um programa em C que contenha duas funções:
- Uma que receba parâmetro por valor e some 10 à variável (dentro da função)
- Outra que receba parâmetro por referência e some 10 à variável (dentro da
função)
Implemente a função main para testar as funções.
Imprima os valores da variável antes, dentro e após cada chamada de função.
*/

#include <stdio.h>

int soma_valor(int valor)
{
    return valor += 10;
}

void soma_ref(int *p)
{
    *p += 10;
}

int main()
{
    int x;

    x = 0;
    printf("x inicial: %d\n", x);
    x = soma_valor(x);
    printf("x final: %d\n\n", x);

    x =0;
    printf("x inicial: %d\n", x);
    soma_ref(&x);
    printf("x final: %d\n", x);
    
    return 0;
}