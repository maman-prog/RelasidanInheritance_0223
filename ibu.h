#ifndef IBU_H
#define IBU_H
#include <iostream>
#include <vector>
#include <string>
#include "anak.h"
using namespace std;

class anak;
class ibu {
public:
    string nama;
    vector<anak*> DaftarAnak;

    ibu(string pNama) : nama(pNama) {
        cout << "Ibu " << nama << " ada" << endl;
    };
~ibu() {
        cout << "Ibu " << nama << " tidak ada" << endl;
    };

    void tambahAnak(anak* pAnak);
    void cetakAnak();
};

void ibu::tambahAnak(anak* pAnak) {
    DaftarAnak.push_back(pAnak);
}

void ibu::cetakAnak() {
    cout << "Daftar anak dari Ibu " << nama << ":" << endl;
    for (size_t i = 0; i < DaftarAnak.size(); i++) {
        cout << "- " << DaftarAnak[i]->nama << endl;
    }
}

#endif