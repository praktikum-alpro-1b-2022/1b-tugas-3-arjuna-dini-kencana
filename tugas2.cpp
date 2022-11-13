#include <iostream>
#include <math.h>

using namespace std;

int main () {
    float praktikum = 75, uts = 70, uas = 88;
    float NilaiAkhir;

    cout << "Nilai Praktikum = " << praktikum << endl;
    cout << "Nilai UTS = " << uts << endl;
    cout << "Nilai UAS = " << uas << endl;

    NilaiAkhir = (praktikum* 20/100 ) + (uts * 30/100) + (uas * 50/100);
    cout << "Nilai Akhirnya Adalah = " <<NilaiAkhir << endl;

    return 0;
}
