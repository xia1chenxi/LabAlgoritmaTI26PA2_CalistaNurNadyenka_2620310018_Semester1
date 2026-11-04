#include <iostream>
using namespace std;

int main() {
    int pil, g;

menu_utama:
    cout << "\n===== Selamat Datang =====\n";
    cout << "1. Tentukan Bilangan Genap/Ganjil\n";
    cout << "2. Tentukan Bilangan Prima\n";
    cout << "0. Hentikan Program\n";
    cout << "Pilihan: ";
    cin >> pil;

    if (pil ==1) {
        cout << "==== Menu Bilangan Genap/Ganjil =====\n";
        cout << "Masukkan Bilangan: ";
        cin >> g;
        if (g%2 ==0) {
            cout << g << " adalah Bilangan Genap";
        } else {
            cout << g << " adalah Bilangan Ganjil";
        }
    } 
    
    else if (pil ==2) {
        int b, jum_faktor = 0;
        cout << "\n===== Menu Bilangan Prima =====";
        cout << "\nMasukkan Bilangan: ";
        cin >> b;
        for (int i=1; i<=b; i++) {
            if (b%i ==0) {
                jum_faktor++;
            }
        }
        if (b>1 && jum_faktor==2) {
            cout << b << " Bilangan Prima";
        } else {
            cout << b << " Bukan Bilangan Prima";
        }
    } 
    
    else if (pil==0) {
        cout << "Program dihentikan.\n";
        return 0;
    } 
    else {
        cout << "never gonna give you up, never gonna let you down...\n";
    }

    cout << endl;
    goto menu_utama;

    return 0;
}
