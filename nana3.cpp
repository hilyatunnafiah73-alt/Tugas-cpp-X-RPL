
#include <iostream>
#include <string>
using namespace std;

int main() {
    string menu[5] = {"soto", "rawon", "pecel", "teh", "kopi"};
    int harga[5] = {15000, 20000, 10000, 3000, 5000};
    int porsi[5];
    int total[5];
    int grandtotal;
    int i;
    char ulang;

    do {
        grandtotal = 0;

        for (i = 0; i < 5; i++) {
            cout << "Menu: " << menu[i] << endl;
            cout << "Harga: " << harga[i] << endl;
            cout << "Masukkan porsi: ";
            cin >> porsi[i];

            total[i] = porsi[i] * harga[i];

            cout << "Total: " << total[i] << endl;
            cout << "____________" << endl;

            grandtotal += total[i];
        }

        cout << "------------------------------------" << endl;
        cout << "TOTAL SEMUA PESANAN ADALAH: "
             << grandtotal << endl;
        cout << "------------------------------------" << endl;

        cout << "Apakah anda mau mengulang? Tekan y atau Y: ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih!" << endl;

    return 0;
}
