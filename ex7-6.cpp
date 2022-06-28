#include <stdio.h>
int main()
{
    float ctf(float a);
    float n1,result;
    printf("\ncentigrade:");
    scanf("%f",&n1);
    result = ctf(n1);
    printf("\nYour temperature(fahrenheit) = %2.2f °F\n",result);
    return 0;
}

float ctf(float a)
{
    float result = ((a*1.8)+32);
    return result;                     
}
