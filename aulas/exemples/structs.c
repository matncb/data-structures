/*Faça um programa em C que contenha uma struct para representar um
aluno:
● nome (cadeia de caracteres de até 49 letras),
● idade (inteiro),
● nota (número real).
Crie uma função ler_dados_aluno, que receba um ponteiro para um aluno e leia
do usuário os dados do aluno (nome, idade e nota)
Crie uma função imprimir_aluno, que receba um ponteiro para um aluno e exiba
na tela todas as informações do aluno.
Na main, declarar uma variável do tipo aluno, chamar as funções, e exibir
novamente o nome do aluno acessando o campo diretamente (sem ponteiro).
*/

#include <stdio.h>

typedef struct
    {
        char nome[49];
        int idade;
        float nota;
    } aluno;

void ler_dados(aluno *pessoa)
{
    printf("Nome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);

    printf("Idade: ");
    scanf("%d", &pessoa->idade);

    printf("Nota: ");
    scanf("%f", &pessoa->nota);

    // &((*pessoa).idade)) equivalente a &pessoa->idade
}

void imprimir_aluno(aluno *pessoa)
{
    printf("\nNome: %s", pessoa->nome);

    printf("Idade: %d\n", pessoa->idade);

    printf("Nota: %f\n", pessoa->nota);

}

int main()
{
    aluno pessoa;

    ler_dados(&pessoa);
    imprimir_aluno(&pessoa);

    return 0;
}