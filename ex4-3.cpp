#include <iostream>

using namespace std;

int main()
{
    int x;
    printf("input grade:");
    scanf("%d",&x);
    if (x >=90)
        cout <<"A";
    else if (x>=80 && x<90)
        cout <<"B";
    else if (x>=70 && x<80)
        cout <<"C";
    else if (x>=60 && x<70)
        cout <<"D";
    else if (x<60)
        cout <<"E";
        
}
