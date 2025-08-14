#include <stdio.h>
#include <stdlib.h>

void ler_notas(float notas[], int N);
float eval_media(float notas[], int N);

int main()
{
    int N;
    printf("Número de notas: ");
    scanf("%d", &N);

    float *notas;
    notas = malloc(sizeof(float) * N);

    ler_notas(notas, N);

    float media;
    media = eval_media(notas,N);
    printf("Média: %.2f\n", media);

    free(notas);

    return 0;
}

void ler_notas(float notas[], int N)
{
    for (int i=0; i<=(N-1); i++)
    {
        scanf("%f", &notas[i]);
    }
}

float eval_media(float notas[], int N)
{
    float media = 0;
    for (int i=0; i<=(N-1); i++)
    {
        media += notas[i];
    }

    media = media/N;

    return media;
}