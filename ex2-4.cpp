#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a;
    printf("input your radius \n");
    scanf("%d",&a);
    printf("perimeter = %f\n", 2*3.14159265359*a);
    printf("area = %f\n",3.14159265359*(pow(a,2)));
}
