#include <iostream>

using namespace std;

int main()
{
    int x;
    printf("input year:");
    scanf("%d",&x);
    x=x%4;
    if (x==0)
        cout <<"true";
    else
        cout <<"false";
        
}
