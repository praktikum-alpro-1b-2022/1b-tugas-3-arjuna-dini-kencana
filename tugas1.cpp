#include <iostream>
#include <math.h>

using namespace std;

int main () {
    float alas = 8, tinggi = 10;
    float SisiMiring;

    SisiMiring = sqrt ( pow (alas,8) + pow (tinggi,2));

    cout <<"Panjang Sisi Miring Pythagoras Alas = 8cm dan Tinggi = 10 cm Adalah = " << SisiMiring << endl;

    return 0;
}
