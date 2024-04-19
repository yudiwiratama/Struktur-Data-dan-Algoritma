#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengecek nomor punggung dapat berfungsi sebagai posisi apa saja
void cekPosisi(int nomorPunggung) {
    cout << "Nomor punggung " << nomorPunggung << " dapat berfungsi sebagai:\n";

    if (nomorPunggung % 2 == 0) {
        cout << "- Target Attacker\n";
    } 
    if (nomorPunggung % 2 == 0 && nomorPunggung >= 50 && nomorPunggung <= 100) {
        cout << "- Capten Team\n";
    }
    if (nomorPunggung % 2 != 0) {
        cout << "- Defender\n";
    } 
    if (nomorPunggung % 2 != 0 && nomorPunggung > 90) {
        cout << "- Playmaker\n";
    }
    if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
        cout << "- Keeper\n";
    }
}

// Fungsi untuk menghitung jumlah kalori yang terbakar setelah melakukan aktivitas olahraga
int hitungKalori(int lari, int pushUp, int plank) {
    int totalKalori = 0;

    totalKalori += lari * (60 / 5); // 60 kalori setiap 5 menit
    totalKalori += pushUp * (200 / 30); // 200 kalori setiap 30 menit
    totalKalori += plank * 5; // 5 kalori setiap 1 menit

    return totalKalori;
}

int main() {
    int nomorPunggung, lari, pushUp, plank;

    // Input nomor punggung dan aktivitas olahraga yang dilakukan
    cout << "Masukkan nomor punggung: ";
    cin >> nomorPunggung;

    cout << "Masukkan jumlah waktu lari (dalam menit): ";
    cin >> lari;

    cout << "Masukkan jumlah waktu push-up (dalam menit): ";
    cin >> pushUp;

    cout << "Masukkan jumlah waktu plank (dalam menit): ";
    cin >> plank;

    // Menampilkan posisi berdasarkan nomor punggung
    cekPosisi(nomorPunggung);

    // Menghitung jumlah kalori yang terbakar
    int totalKalori = hitungKalori(lari, pushUp, plank);
    cout << "Total kalori yang terbakar: " << totalKalori << " kalori\n";

    return 0;
}
