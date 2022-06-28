#include <stdio.h>
int addnum(int a, int b);
int subnum(int a, int b);
int divnum(int a, int b);
int mulnum(int a, int b);

int main()
{
    int n1,n2,a,b,c,d;
    printf("two num: ");
    scanf("%d %d",&n1,&n2);
    a = addnum(n1, n2);
    b = subnum(n1, n2);
    c = mulnum(n1, n2);
    d = divnum(n1, n2);
    printf("sum = %d\n",a);
    printf("sub = %d\n",b);
    printf("mul = %d\n",c);
    printf("div = %d\n",d);
    return 0;
}

int addnum(int a, int b)
{
    int result;
    result = a+b;
    return result;                     
}

int subnum(int a, int b) 
{
    int result;
    result = a-b;
    return result;                     
}

int mulnum(int a, int b)
{
    int result;
    result = a*b;
    return result;                     
}

int divnum(int a, int b)
{
    int result;
    result = a/b;
    return result;                     
}

