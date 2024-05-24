#include <iostream>
#include <sstream> // String Stream untuk parsing input
#include <string>
#include <vector> // Untuk menggunakan tipe data vector

using namespace std;

int main() {
    // Deklarasi array untuk daftar menu dan harga
    string menu[5] = {"Soto", "Rawon", "Pecel", "Bakso", "Siomay"};
    int harga[5] = {15000, 20000, 10000, 12500, 25000};

    // Output sambutan program dan menampilkan tiap menu beserta harga
    cout << "Selamat datang di Warung Makan Kami!" << endl;
    cout << "Daftar Menu:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << menu[i] << ": " << harga[i] << " IDR" << endl;
    }
    cout << endl;

    // Inputan untuk memesan makanan
    string pesanan;
    cout << "Isikan Makanan yang dipesan: "; 
    getline(cin, pesanan);

    // Menggunakan stringstream untuk memisahkan inputan menjadi item dan jumlah
    stringstream ss(pesanan);
    string item;
    vector<string> orderedItems; // untuk menyimpan item yang dipesan
    vector<int> quantities; // untuk menyimpan jumlah item yang dipesan
    int totalHarga = 0; // untuk menghitung total harga

    // Memproses inputan dan menghitung total harga
    while (ss >> item) {
        string makanan = item;
        int jumlah;
        ss >> jumlah;

        // Mencari menu yang sesuai dengan inputan dan menghitung harga
        for (int i = 0; i < 5; i++) {
            if (makanan == menu[i]) {
                orderedItems.push_back(makanan);
                quantities.push_back(jumlah);
                totalHarga += harga[i] * jumlah;
                break;
            }
        }
    }

    // Output total harga dan rincian pesanan
    cout << "Total Harga:" << endl;
    for (int i = 0; i < orderedItems.size(); i++) {
        for (int j = 0; j < 5; j++) {
            if (orderedItems[i] == menu[j]) {
                cout << "✅ " << orderedItems[i] << " @"
                     << harga[j] << " * " << quantities[i]
                     << " = " << harga[j] * quantities[i] << endl;
                break;
            }
        }
    }
    cout << "Total = " << totalHarga << " IDR" << endl;

    return 0;
}
