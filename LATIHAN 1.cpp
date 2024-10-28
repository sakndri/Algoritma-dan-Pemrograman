#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "a (" << a << ")is greater than b (" << b << ")" << b << endl;
    else if (a < b)
        cout << "b (" << b << ")is greater than a (" << a << ")" << a << endl;
    else
        cout << "a and b are equal." << endl;

    return 0;
    }

//error berada di bagan nomor 14, menambahkan semicolon ";"
