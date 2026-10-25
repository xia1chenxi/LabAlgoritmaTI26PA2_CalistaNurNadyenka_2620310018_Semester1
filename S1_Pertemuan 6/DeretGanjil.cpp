#include <iostream>
using namespace std;

int main() 
{
    int total = 0;
    int bilangan = 1;

    for (int i = 1; i <= 10; i++) {
        cout << bilangan;
        total += bilangan;

        if (i < 10) {
            cout << " + ";
        } else {
            cout << " = ";
        }

        bilangan += 2; 
    }

    cout << total << endl;

    return 0;
}