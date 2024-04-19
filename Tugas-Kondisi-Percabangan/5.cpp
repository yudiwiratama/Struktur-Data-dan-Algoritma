#include <iostream>
#include <string>
using namespace std;

int main() {
    int umur;
    float tinggi;
    cout << "Masukkan umur anak: ";
    cin >> umur;

    if (umur < 1) {
        cout << "Dilarang masuk.\n";
        return 0;
    }

    cout << "Masukkan tinggi anak (cm): ";
    cin >> tinggi;

    if (umur < 3) {
        cout << "Tarif: Rp 30.000";
        if (umur == 2 && tinggi > 70) {
            cout << " (tarif tambahan Rp 10.000 karena tinggi anak melebih 70 cm)";
        }
        cout << endl;
    } else if (umur < 7) {
        cout << "Tarif: Rp 40.000";
        if (umur >= 4 && umur <= 7 && tinggi > 120) {
            cout << " (tarif tambahan Rp 15.000 karena tinggi anak melebih 120 cm)";
        }
        cout << endl;
    } else if (umur < 10) {
        cout << "Tarif: Rp 50.000";
        if (umur >= 8 && umur <= 10 && tinggi > 150) {
            cout << " (tarif tambahan Rp 20.000 karena tinggi anak melebih 150 cm)";
        }
        cout << endl;
    } else {
        cout << "Tarif: Rp 80.000\n";
    }

    return 0;
}
