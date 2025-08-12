#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i<=N; i++)
    {
        if ((i%2) == 0)
        {
            printf("%d é par\n", i);
        }
        else
        {
            printf("%d é ímpar\n", i);
        }

        if ((i%3) == 0)
        {
            printf("%d é divisível por 3\n", i);
        }
    }
}