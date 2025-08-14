#include <stdio.h>

float get_x();
float eval_area(float x);

int main()
{
    float lado;
    lado = get_x();
    printf("%.4f \n", eval_area(lado));

    return 0;
}

float get_x()
{
    float x;
    scanf("%f", &x);

    return x;
}

float eval_area(float x)
{   
    return x*x;
}
