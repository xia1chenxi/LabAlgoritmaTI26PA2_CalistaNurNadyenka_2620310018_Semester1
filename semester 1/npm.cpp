#include <iostream>
using namespace std;

int main() 
{
    string nama;
    string npm;

    cout << "Masukkan Nama : ";
    getline(cin, nama);

    cout << "Masukkan NPM : ";
    getline(cin, npm);

    cout << endl;
    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;

    return 0;
}