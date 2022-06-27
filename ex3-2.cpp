
#include <iostream>
using namespace std;

int main(void) {
    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;
    int z = x;
    
    x += y;
    cout << x << endl;
    x -= y;
    cout << x << endl;
    x *= y;
    cout << x << endl;
    x /= y;
    cout << x << endl;
    x %= y;
    cout << x << endl;

    x = z;
    x &= y;
    cout << x << endl;
    x = z;
    x |= y;
    cout << x << endl;
    x = z;
    x ^= y;
    cout << x << endl;
    x = z;
    x >>= 1;
    cout << x << endl;
    x = z;
    x <<= 1;
    cout << x << endl;

    return 0;
}