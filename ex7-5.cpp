#include <stdio.h>

int main()
{
    float ttm(float a, float b);
    float n1,n2,x;
    printf("\nhours: ");
    scanf("%f",&n1);
    printf("\nminutes: ");
    scanf("%f",&n2);
    x = ttm(n1, n2);
    printf("\nYour time (minutes) = %f\n",x);
    return 0;
}

int ttm(float a, float b)
{
    float result = a+b/60;
    return result;                     
}
