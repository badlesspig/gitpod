#include <stdio.h>

int main()
{
    float mtt(float a, float b);
    float n1,n2,x;
    printf("\nhours: ");
    scanf("%f",&n1);
    printf("\nminutes: ");
    scanf("%f",&n2);
    x = mtt(n1, n2);
    printf("\nYour time (hours) = %f\n",x);
    return 0;
}

int mtt(float a, float b)
{
    float result = a+b/60;
    return result;                     
}
