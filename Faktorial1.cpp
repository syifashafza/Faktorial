#include <iostream>
using namespace std;

int faktorial_rekursif(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial_rekursif(n-1);
    }
}

int faktorial_iteratif(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}


int main() {
    int n, pilihan;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;
    cout << "Pilih mode faktorial:\n";
    cout << "1. Iteratif\n";
    cout << "2. Rekursif\ninput pilihan: ";
    cin >>pilihan;

    switch (pilihan) {
        case 1:
            cout << "Faktorial dari " << n << " adalah " << faktorial_iteratif(n) << endl;
            break;
        case 2:
            cout << "Faktorial dari " << n << " adalah " << faktorial_rekursif(n) << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}

