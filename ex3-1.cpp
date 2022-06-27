#include <iostream>
using namespace std;

int main(void) {
    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << ++x << endl;
    cout << x++ << endl;
    cout << --x << endl;
    cout << x-- << endl;
    cout << (x >> 1) << endl;
    cout << (x << 1) << endl;

    return 0;
}