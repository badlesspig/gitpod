
#include <iostream>
using namespace std;

int main(void) {
    int a[6] = {8, 3, 6, 10, 45, 12};
    int i, n;

    n = sizeof(a) / sizeof(int);
    for (i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}