#include <iostream>
using namespace std;

int main () {
    int bil;

    cout << "Program Untuk Menentukan Tahun Kabisat\n------------------------------------------------------------------------------------------------";

    cout << "\nMasukkan tahun yang ingin diperiksa: ";
    cin >> bil;

    if(bil%4==0){
        cout << bil << " Adalah tahun kabisat";

    }else{
    cout << bil << " Bukan tahun kabisat";
    }


return 0;
}
