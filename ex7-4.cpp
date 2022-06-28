#include <stdio.h>
int ttm(int a, int b);

int main()
{
    int n1,n2,x;
    printf("\nhours: ");
    scanf("%d",&n1);
    printf("\nminutes: ");
    scanf("%d",&n2);
    x = ttm(n1, n2);
    printf("\nYour time (minutes) = %d\n",x);
    return 0;
}

int ttm(int a, int b)
{
    int result = a*60+b;
    return result;                     
}
