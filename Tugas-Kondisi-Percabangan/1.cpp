#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int umur, uang;
    string tempat;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tempat tinggal: ";
    cin.ignore();
    getline(cin, tempat);

    cout << "Masukkan uang tabungan dalam dollar: ";
    cin >> uang;

    if (umur > 40 && (tempat == "Nevada" || tempat == "New York" || tempat == "Havana") && uang > 10000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Don.\n";
    } else if (umur >= 25 && umur <= 40 && (tempat == "New Jersey" || tempat == "Manhattan" || tempat == "Nevada") && uang >= 1000000 && uang <= 2000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss.\n";
    } else if (umur >= 18 && umur <= 24 && (tempat == "California" || tempat == "Detroit" || tempat == "Boston") && uang < 1000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Capo.\n";
    } else {
        cout << nama << " tidak mencurigakan.\n";
    }

    return 0;
}
