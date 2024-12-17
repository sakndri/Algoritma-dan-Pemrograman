#include <iostream>
using namespace std;

// Fungsi untuk menghitung hasil kali dua bilangan
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int bilangan1, bilangan2;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Memastikan kedua bilangan positif
    if (bilangan1 <= 0 || bilangan2 <= 0) {
        cout << "Harap masukkan bilangan bulat positif!" << endl;
    } else {
        // Memanggil fungsi untuk menghitung hasil kali
        int hasil = multiply(bilangan1, bilangan2);

        // Menampilkan hasil
        cout << "Hasil kali dari " << bilangan1 << " dan " << bilangan2 << " adalah: " << hasil << endl;
    }

    return 0;
}
