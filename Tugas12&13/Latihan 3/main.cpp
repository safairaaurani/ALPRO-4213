#include <iostream>
using namespace std;

typedef struct PersegiPanjang {
    int p, l;
    int luas() {
        return p * l;
    }
} LuasPersPan;

typedef struct lingkaran {
    int r;
    float phi;
    float luas() {
        return phi * r * r;
    }
} luaslingkaran;

typedef struct kerucut {
    int r, t;
    float phi;
    float volume() {
        return 0.3 * phi * r * r * t;
    }
} VolumeKerucut;

typedef struct bola{
    int r;
    float phi;
    float volume() {
        return 1.3 * phi * r * r * r;
    }
} VolumeBola;

int main() {
    LuasPersPan PersPan;
    PersPan.p = 12;
    PersPan.l = 10;
    cout << "Luas Persegi Panjang   = " << PersPan.luas() << endl;

    luaslingkaran Lingkaran;
    Lingkaran.r = 7;
    Lingkaran.phi = 3.14;
    cout << "Luas Lingkaran         = " << Lingkaran.luas() << endl;

    VolumeKerucut Kerucut;
    Kerucut.r = 10;
    Kerucut.t = 10;
    Kerucut.phi = 3.14;
    cout << "Volume Kerucut         = " << Kerucut.volume() << endl;

    VolumeBola Bola;
    Bola.r = 10;
    Bola.phi = 3.14;
    cout << "Volume Bola            = " << Bola.volume() << endl;

    return 0;
}
