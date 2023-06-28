#include <iostream>
#include <string>
using namespace std;

//lat1
struct luasPersPan{
    float p, l, luas;
};

struct luaslingkaran{
    float phi,r,luas;
};

struct volkerucut{
    float phi,r,t,volume,rumus;
};

struct volBola{
    float phi,r,volume,rumus;
};

//lat2
struct Sepeda {
    string merk;
    string type;
    int harga;
    int tahun;
};

int main()
{
    cout<<"----------------------------"<<endl;
    cout<<"|      Safaira Aurani      |"<<endl;
    cout<<"|      A11.2022.14500      |"<<endl;
    cout<<"|         A11.4213         |"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"|          PPT 12          |"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Latihan1"<<endl;

    struct luasPersPan Luas;
    Luas.p = 3;
    Luas.l = 7;
    Luas.luas= Luas.l*Luas.p;
    cout<<"Luas Persegi Panjang: "<<Luas.luas<<endl;

    struct luaslingkaran luas;
    luas.phi = 3.14;
    luas.r = 7;
    luas.luas=luas.phi*luas.r*luas.r;
    cout<<"Luas Lingkaran: "<<luas.luas<<endl;

    struct volkerucut Volume;
    Volume.r=14;
    Volume.t=7;
    Volume.phi=3.14;
    Volume.rumus=0.3;
    Volume.volume=Volume.rumus*Volume.phi*Volume.r*Volume.r*Volume.t;
    cout<<"Volume Kerucut: "<<Volume.volume<<endl;

    struct volBola Vol;
    Vol.r=7;
    Vol.phi=3.14;
    Vol.rumus=1.3;
    Vol.volume=Vol.rumus*Vol.phi*Vol.r*Vol.r*Vol.r;
    cout<<"Volume Bola: "<<Vol.volume<<endl;

//lat2

    struct Sepeda sepeda1;
    sepeda1.merk = "Polygon";
    sepeda1.type = "Sepeda Gunung";
    sepeda1.harga = 2000000;
    sepeda1.tahun = 2013;
    cout << "\nLatihan 2" <<endl;
    cout << "Type: " << sepeda1.type << endl;
    cout << "Merk: " << sepeda1.merk << endl;
    cout << "Harga: " << sepeda1.harga <<endl;
    cout << "Tahun: " << sepeda1.tahun <<endl;



    return 0;
}
