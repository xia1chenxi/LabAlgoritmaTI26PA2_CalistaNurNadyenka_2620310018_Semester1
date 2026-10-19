#include <iostream>
using namespace std;

int main() {
    const float PHI = 3.14159;
    float r, t, tinggi, luasLingkaran, volumeTabung;

    cout << "PROGRAM MENGHITUNG LUAS LINGKARAN & VOLUME TABUNG" << endl;
    cout << "Masukkan jari-jari lingkaran/tabung (r): ";
    cin >> r;
    cout << "Masukkan tinggi tabung (t): ";
    cin >> t;

    luasLingkaran = PHI * r * r;
    volumeTabung = luasLingkaran * t;

    cout << "\nHASIL PERHITUNGAN" << endl;
    cout << "Luas Lingkaran = " << luasLingkaran << endl;
    cout << "Volume Tabung  = " << volumeTabung << endl;

    return 0;
}