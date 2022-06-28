#include <stdio.h>
int main()
{
    int area_def(int a, int b);
    int n1,n2,x;
    printf("\nlength: ");
    scanf("%d",&n1);
    printf("\nwidth: ");
    scanf("%d",&n2);
    x = area_def(n1, n2);
    printf("\narea = %d\n",x);
    return 0;
}

int area_def(int a, int b)
{
    int result = a*b;
    return result;
}


