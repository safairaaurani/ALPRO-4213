#include <iostream>
using namespace std;

enum ProdiFIK {TeknikInformatika = 11, SistemInformasi = 12, DKV = 14, Ilkom = 15, Aninmasi = 17, FTV = 16};

int main(){
    int ProdiFIK;
    cout << "Input Kode Prodi A: ";
    cin >> ProdiFIK ;
    cout << "A "<<ProdiFIK<<" Merupakan Prodi: ";
    switch (ProdiFIK) {
        case 11:
            cout << "TeknikInformatika";
            break;
        case 12:
            cout << "SistemInformasi";
            break;
        case 14:
            cout << "DKV";
        case 15:
            cout << "Ilkom";
            break;
        case 17:
            cout << "Aninmasi";
            break;
        case 16:
            cout << "FTV";
            break;

    }
    cout << endl;
    return 0;
}
