#include <iostream>
using namespace std;

int main() {
    // Print multiplication tables from 2 to 10
    for (int i = 1; i <= 10; i++) {
        for (int j = 2; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
