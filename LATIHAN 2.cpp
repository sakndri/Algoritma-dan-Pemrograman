\#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "enter a number: ";
    cin >> num;

    switch (num){
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        default:
            cout << "other number" << endl;
    }

    return 0;
}

// error berada di bagan nomor 20, menambahkan semicolon ";"
