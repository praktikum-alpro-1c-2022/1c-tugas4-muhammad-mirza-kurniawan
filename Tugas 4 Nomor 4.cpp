#include <iostream>
using namespace std;

int main () {
int kode;
    cout << "Daftar Harga Makanan:" <<endl;
    cout << "1. Nasi Goreng Informatika Rp. 5.000,-"<<endl;
    cout << "2. Nasi Soto Ayam Internet Rp. 7.000,-"<<endl;
    cout << "3. Gado-gado Disket        Rp. 4.500,-"<<endl;
    cout << "4. Bubur Ayam LAN          Rp. 4.000,-"<<endl;

    cout << "\nMasukkan Pilihan Anda: ";
    cin >> kode;
    if (kode==1){
        cout << "\nPilihan No.1 Nasi Goreng Informatika Rp. 5.000,-";
    }else if (kode==2) {
        cout << "\nPilihan No.2 Nasi Soto Ayam Internet Rp. 7.000,-";
    }else if (kode==3){
        cout << "\nPilihan No.3 Gado-gado Disket Rp. 4.500,-";
    }else if (kode==4){
        cout << "\nPilihan No.4 Bubur Ayam LAN Rp. 4.000,-";
    }else{
    cout << "Pilihan Anda Salah";
    }
return 0;
}
