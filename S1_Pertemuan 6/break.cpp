#include <iostream>
using namespace std;

int main() 
{
    int a = 3, b = 2, c = 1;

    cout << "Bil-A \t| Bil-B \t| Bil-C" << endl;
    cout << "------------------------------------";

    for (int bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        cout << "\n" << a << " \t| " << b << " \t\t| " << c;

        if (c == 13) {
            break;
        }
    }

    cout << endl;

    return 0;
}