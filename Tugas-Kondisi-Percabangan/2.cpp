#include <iostream>
using namespace std;

int main() {
    int nilai_coding;
    char nilai_interview;

    cout << "Masukkan nilai tes coding: ";
    cin >> nilai_coding;

    cout << "Masukkan nilai tes interview (A/B): ";
    cin >> nilai_interview;

    if ((nilai_coding > 80 || (nilai_coding >= 60 && nilai_coding <= 80)) && (nilai_interview == 'A' || nilai_interview == 'B')) {
        cout << "Selamat, kamu berhasil menjadi calon programmer.\n";
    } else {
        cout << "Maaf, kamu belum berhasil menjadi calon programmer.";
    }

    return 0;
}
