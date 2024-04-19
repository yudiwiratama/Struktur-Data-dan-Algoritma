#include <iostream>
#include <string>
using namespace std;

int main() {
    int nomor_punggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomor_punggung;

    if (nomor_punggung % 2 == 0) {
        cout << "Nomor punggung genap digunakan untuk posisi target attacker.\n";
        if (nomor_punggung >= 50 && nomor_punggung <= 100) {
            cout << "Nomor punggung antara 50-100 digunakan untuk pemain yang berhak menjadi capten team.\n";
        }
    } else {
        cout << "Nomor punggung ganjil digunakan untuk posisi defender.\n";
        if (nomor_punggung > 90) {
            cout << "Nomor punggung ganjil lebih dari 90 digunakan untuk posisi playmaker.\n";
        } else if (nomor_punggung % 3 == 0 || nomor_punggung % 5 == 0) {
            cout << "Nomor punggung ganjil kelipatan dari 3 dan 5 digunakan untuk posisi keeper.\n";
        }
    }

    return 0;
}
