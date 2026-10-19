#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, hadiah;
    double np1, np2, np3, rata_rata;

    cout << "Program Hitung Nilai Rata-Rata" << endl;
    
    cout << "Nama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I  : ";
    cin >> np1;

    cout << "Nilai Pertandingan II : ";
    cin >> np2;

    cout << "Nilai Pertandingan III: ";
    cin >> np3;

    rata_rata = (np1 + np2 + np3) / 3.0;

    if (rata_rata >= 85) {
        hadiah = "Komputer Core i5";
    } 
    else if (rata_rata >= 70) {
        hadiah = "Uang sebesar Rp. 2.500.000";
    } 
    else {
        hadiah = "Hiburan";
    }

    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata << " dari hasil perlombaan yang diikutinya." << endl;
    cout << "Hadiah yang didapat adalah " << hadiah << endl;

    return 0;
}