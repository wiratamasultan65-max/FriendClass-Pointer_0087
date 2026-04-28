#include <iostream>
#include <iomanip>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2;
    double a, b;

public:
    void input() {
        cout << "\n====================================\n";
        cout << "        MASUKKAN LAYANG-LAYANG\n";
        cout << "====================================\n";
        cout << "Diagonal 1        : "; cin >> d1;
        cout << "Diagonal 2        : "; cin >> d2;
        cout << "Sisi a            : "; cin >> a;
        cout << "Sisi b            : "; cin >> b;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 2 * (a + b);
    }

    void output() {
        cout << "\n====================================\n";
        cout << "       HASIL LAYANG-LAYANG\n";
        cout << "====================================\n";
        cout << left << setw(20) << "Luas"      << ": " << luas() << endl;
        cout << left << setw(20) << "Keliling"  << ": " << keliling() << endl;
    }

    friend double kelilingLayang(LayangLayang l);
};

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void input() {
        cout << "\n====================================\n";
        cout << "        MASUKKAN BELAH KETUPAT\n";
        cout << "====================================\n";
        cout << "Diagonal 1        : "; cin >> d1;
        cout << "Diagonal 2        : "; cin >> d2;
        cout << "Sisi              : "; cin >> sisi;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "\n====================================\n";
        cout << "      HASIL BELAH KETUPAT\n";
        cout << "====================================\n";
        cout << left << setw(20) << "Luas"      << ": " << luas() << endl;
        cout << left << setw(20) << "Keliling"  << ": " << keliling() << endl;
    }

    double aksesKelilingLayang(LayangLayang l) {
        return kelilingLayang(l);
    }
};

double kelilingLayang(LayangLayang l) {
    return 2 * (l.a + l.b);
}

int main() {
    LayangLayang ll;
    BelahKetupat bk;

    cout << "==================================\n";
    cout << "   MENGHITUNG BANGUN DATAR\n";
    cout << "==================================\n";

    ll.input();
    ll.output();

    bk.input();
    bk.output();

    cout << "\n==================================\n";
    cout << "   AKSES FRIEND FUNCTION\n";
    cout << "==================================\n";
    cout << "Keliling Layang-Layang (via Belah Ketupat) : "
         << bk.aksesKelilingLayang(ll) << endl;

    cout << "====================================\n";

    return 0;
}