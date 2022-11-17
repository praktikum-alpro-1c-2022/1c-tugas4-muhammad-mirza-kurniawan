#include <iostream>
using namespace std;

int main () {
    string username,password;

cout << "Program Login sederhana Dengan menggunakan Nested If\n";
cout << "Username yang harus diinputkan: mirzakur\nPassword yang harus diinputkan: mirza123\n\n";
cout << "Masukkan Username: " ; cin >> username;
cout << "Masukkan Password: " ; cin >> password;


    if (username == "mirzakur"){
        if (password == "mirza123"){
            cout << "Username dan Password sesuai, Login Berhasil." << endl;
        }else{
            cout << "Username Sesuai, Password Tidak Sesuai. Mohon Coba Kembali." << endl;
    }
    }else{
        if (password == "mirza123"){
            cout << "Password Sesuai, Username Tidak Sesuai. Mohon Coba Kembali." << endl;
        }else{
            cout << "Username dan Password Tidak Sesusai, Coba Kembali." << endl;
        }
    }
return 0;
}
