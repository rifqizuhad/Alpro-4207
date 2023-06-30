#include <bits/stdc++.h>
using namespace std;

enum Arah { KENDAL, SEMARANG, DEMAK, KUDUS };

int main() {
    int arah = 5;

    switch (arah) {
        case Arah::KENDAL:
            cout << "Berasal Dari Kota Kendal";
            break;
        case Arah::SEMARANG:
            cout << "Berasal Dari Kota Semarang";
            break;
        case Arah::DEMAK:
            cout << "Berasal Dari Kota Demak";
            break;
        case Arah::KUDUS:
            cout << "Berasal Dari Kota Kudus";
            break;
        default:
            cout << "Kota tidak terdaftar";
            break;
    }

    return 0;
}
