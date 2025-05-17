#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int nim;
    float nilai;

public:
    Mahasiswa(string n, int i) : nama(n), nim(i), nilai(0) {}

    void tampil() {
        cout << "Nama Mahasiswa : " << nama << endl;
        cout << "NIM            : " << nim << endl;
        cout << "Nilai          : " << nilai << endl << endl;
    }

    friend class Dosen;
};