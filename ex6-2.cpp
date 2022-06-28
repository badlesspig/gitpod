#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cin >> x;
    cin >> y;
    cin >> z;
    if (z != x+y) {
        cout << "false" << endl;
        cout << x+y << endl;
    } else {
        cout << "true" << endl;
    }
    return 0;
}
