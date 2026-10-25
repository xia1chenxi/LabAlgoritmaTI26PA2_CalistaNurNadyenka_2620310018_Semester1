#include <iostream>
using namespace std;

int main() 
{
    int bilangan, jumlah_faktor = 0;

    cout << "=== Program Penentu Bilangan Prima ===\n";
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    for (int i = 1; i <= bilangan; i++) {
        if (bilangan % i == 0) {
            jumlah_faktor++;
        }
    }
    if (bilangan > 1 && jumlah_faktor == 2) {
        cout << bilangan << " Termasuk bilangan PRIMA" << endl;
    } else {
        cout << bilangan << " Bukan termasuk bilangan prima" << endl;
    }

    return 0;
}