#include <iostream>
using namespace std;

int main () {
    long int harga,jum,tot;
    char kode,uk;
    string merk;

    cout << "\t====== Program Untuk Membuat Sistem penjualan Susu =======\n";
  cout << "Kode Susu  : 1.\nNama Produk: Dancow\nUkuran     : B=Besar / S=Sedang / K=Kecil\nHarga      : Rp. 10.000,- / Rp. 4.250,- / Rp. 2.100,- ";
    cout<< "\n\nKode Susu  : 2.\nNama Produk: Indomilk\nUkuran     : B=Besar / S=Sedang / K=Kecil\nHarga      : Rp. 8.500,- / Rp. 4.000,- / Rp. 2.025,- ";
    cout<< "\n\nKode Susu  : 3.\nNama Produk: Sustacal\nUkuran     : B=Besar / S=Sedang / K=Kecil\nHarga      : Rp. 17.000,- / Rp. 14.500,- / Rp. 8.300,- "<<endl;

    cout << "\nMasukkan Kode Susu (1-3):";cin >> kode;
    cout << "Masukkan Jumlah Pembelian:";cin >> jum;
    cout << "Masukkan Ukuran (B/S/K):";cin >> uk;

//kondisi 1 susu dancow

if (kode == '1'){
merk = "\nSusu Dancow";
    if (uk == 'b' || uk == 'B'){
            harga = 10000; cout << ",-";
    }else if (uk == 's' || uk == 'S'){
            harga = 4250;
    }else if (uk == 'k' || uk == 'k'){
           harga = 2100;
           }
  //kondisi 2 susu indomilk
}
else if (kode == '2'){
 merk = "\nSusu Indomilk";
    if (uk == 'b' || uk == 'B'){
        harga = 8500;
    }else if (uk == 's' || uk == 'S'){
        harga = 4000;
    }else if (uk == 'k' || uk == 'k'){
        harga = 2025;
        }
        //kondisi 3 susu sustacal
}
else if (kode=='3'){
merk = "\nSusu Sustacal";
    if (uk == 'b' || uk == 'B'){
        harga = 17000;
    }else if (uk == 's' || uk == 'S'){
        harga = 14500;
    }else if (uk == 'k' || uk == 'k') {
    harga = 8300;

}
    //kondisi 4 (salah input)
}
else {
    cout << "\nAnda Salah Input";
}

    //output transaksi
    cout << merk << endl;
    cout << "Harga Susu Rp."<< harga << endl;
    tot = harga * jum;
    cout << "Jumlah Pembelian Rp." << tot << endl;






return 0;
}
