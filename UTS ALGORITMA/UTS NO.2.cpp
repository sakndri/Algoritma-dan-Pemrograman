#include <iostream>
using namespace std;

int main() {
    int N;

    // Meminta pengguna memasukan bilangan positif
    cout << "Masukkan nilai N: ";
    cin >> N;

    // Memastikan bilangan yang diinput adalah bilangan positif
    if (N <= 0) {
        cout << "Harap masukkan bilangan bulat positif!" << endl;
    } else {
        cout << "Bilangan dari 1 hingga " << N << " adalah: ";

        // Menggunakan perulangan untuk mencetak bilangan dari 1 hingga N
        for (int i = 1; i <= N; i++) {
            cout << i << " ";
        }
        cout << endl; // Menambahkan baris baru setelah selesai mencetak
    }

    return 0;
}
