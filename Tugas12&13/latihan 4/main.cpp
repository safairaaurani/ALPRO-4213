#include <iostream>
using namespace std;

typedef struct Mhs
{
    string nim, nama, jurusan;
    int tahunlulus;
}; typedef struct Mhs;

int main() {
    //Statis
    Mhs a[4] = {
        {"A11.2020.00000", "Andi", "Akutansi", 2011},
        {"A11.2010.11111", "Budi", "Sistem Informasi", 2013},
        {"A11.2022.22222", "Andra", "DKV", 2026},
        {"A11.1990.33333", "Siti", "kesehatan", 1993},
    };

    int size = sizeof(a) / sizeof(a[0]);

    cout << "" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Data " << i + 1 << ":" << endl;
        cout << "Nim: " << a[i].nim << endl;
        cout << "Nama: " << a[i].nama << endl;
        cout << "Jurusan: " << a[i].jurusan << endl;
        cout << "Tahun Lulus: " << a[i].tahunlulus << endl;
        cout << endl;
    }

    //Dinamis
    cout << "Masukkan jumlah data: ";
    cin >> size;

    // Alokasi dinamis memori untuk array
    Mhs* data = new Mhs[size];

    for (int i = 0; i < size; i++) {
        cout << "Masukkan data ke-" << i + 1 << ":" << endl;
        cout << "Nim : ";
        cin >> data[i].nim;
        cout << "Nama : ";
        cin >> data[i].nama;
        cout << "Jurusan : ";
        cin >> data[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> data[i].tahunlulus;
        cout << endl;
    }

    cout << "=====================================" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Data " << i + 1 << ":" << endl;
        cout << "Nim: " << data[i].nim << endl;
        cout << "Nama: " << data[i].nama << endl;
        cout << "Jurusan: " << data[i].jurusan << endl;
        cout << "Tahun Lulus: " << data[i].tahunlulus << endl;
        cout << endl;
    }
//    printData(b, size);

    delete[] data;
    return 0;
}
