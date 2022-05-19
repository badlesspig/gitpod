#include <iostream>

using namespace std;

int main()
{
    int x;
    printf("input r:");
    scanf("%d",&x);
    if (x>=0)
        cout <<(3.14)*(x*x);
    else
        printf("半径小于0");
        
}
