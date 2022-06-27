#include <iostream>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < (1 + 2 * i); j++) {
            cout << "* ";
        }
        cout << endl; 
    }
    return 0;
}