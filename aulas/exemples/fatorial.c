#include <stdio.h>
#include <time.h>

long long unsigned int fatorial_rec(int n)
{
    if (n == 0) return 1;
    return n*fatorial_rec(n-1);
}

long long unsigned int fatorial_seq(int n)
{
    if (n == 0) return 1;
    
    long long unsigned int res = 1;

    for (int i=1; i<=n; i++)
    {
        res = res*i;
    }
    return res;
}

int main()
{
    int n;
    long long unsigned int res1, res2;
    n = 10;

    long int start, end;

    start = clock();
    res1 = fatorial_rec(n);
    printf("Fatorial recursivo: %llu\n", res1);
    end = clock();
    printf("Tempo de Execução: %ld\n\n", end - start);

    start = clock();
    res2 = fatorial_seq(n);
    printf("Fatorial sequencial: %llu\n", res2);
    end = clock();
    printf("Tempo de Execução: %ld\n\n", end - start);

    return 0;
}