#ifndef ANAK_H
#define ANAK_H
#endif

#include <iostream>
using namespace std;

class anak {
public:
    string nama;
    anak(string pNama) : nama(pNama) {
        cout << "Anak " << nama << " ada" << endl;
    }
    
    ~anak() {
        cout << "Anak " << nama << " tidak ada" << endl;
    }
};