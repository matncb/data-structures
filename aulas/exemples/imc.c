#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    float altura;
    float peso;

    printf("Nome: ");
    //scanf("%s", nome);
    fgets(nome, sizeof(nome), stdin);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    float imc;
    imc = peso/(altura*altura);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Peso: %f\n", peso);
    printf("IMC: %f\n", imc);

    return 0;
}