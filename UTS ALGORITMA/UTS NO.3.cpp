#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Meminta pengguna memasukkan bilangan bulat positif
    cout << "Masukkan nilai N: ";
    cin >> N;

    // Memastikan input adalah bilangan positif
    if (N <= 0) {
        cout << "Harap masukkan bilangan bulat positif!" << endl;
    } else {
        // Menggunakan perulangan untuk menghitung bilangan genap
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) { // Mengecek apakah sudah bilangan genap
                sum += i;    // Menambahkan bilangan genap ke total
            }
        }

        // Menampilkan hasil dari penjumlahan bilangan genap
        cout << "Jumlah semua bilangan genap dari 1 hingga " << N << " adalah: " << sum << endl;
    }

    return 0;
}
