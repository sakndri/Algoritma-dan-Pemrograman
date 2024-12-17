#include <iostream>
using namespace std;

int main() {
    int number;

    // Meminta input bilangan dari pengguna
    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    // Mengecek apakah bilangan genap atau ganjil
    if (number % 2 == 0) {
        cout << number << " adalah bilangan genap." << endl;
    } else {
        cout << number << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
