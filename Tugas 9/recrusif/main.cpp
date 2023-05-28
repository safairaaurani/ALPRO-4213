#include <iostream>
using namespace std;

int Penjumlahan(int a, int b){
    if (b<=0&&a<=0){
        return a+b;
    }else if(a>0)
        return 1 + Penjumlahan(a-1,b);
    else if (b>0)
        return 1 + Penjumlahan(a,b-1);

}
int Pengurangan(int a, int b) {
    if (b == a) {
        return 0;
    }else if (b==0) {
        return a;
    }else{
        return Pengurangan(a - 1, b - 1);
    }
}

int perkalian(int a, int b) {
    if (b==1) {
        return a;
    }else {
        return a+perkalian(a,b-1);
    }
}

int Pembagian(int a, int b) {
    if (b == 0) {
        cout<<"tdk dpt dibagi nol"<<endl;
    } else if (a==b){
        return 1;
    }else if(a<b){
        return 0;
    }else {
        return 1+Pembagian(a-b,b);
    }
}

int pangkat(int a, int b){
    if (b==0){
		 return 1 ;
    }else{
        return a * pangkat(a,b-1);
    }
}
int main()
{
    int bil1,bil2;
    int pilih= 0;

    while (pilih != 6) {
        cout << "Menu:" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Pangkat" << endl;
        cout << "6. Selesai" << endl;



        cout << "Masukkan pilihan Anda (1-6): ";
        cin >> pilih;

        if(pilih==1){
            cout<<"Masukkan bilangan pertama:";
            cin>>bil1;
            cout<<"Masukkan bilangan kedua:";
            cin>>bil2;

            int hasil= Penjumlahan(bil1,bil2);
            cout<<"Hasil Penjumlahan:"<<hasil<<endl;
        }
        else if(pilih==2){
            cout<<"Masukkan bilangan pertama:";
            cin>>bil1;
            cout<<"Masukkan bilangan kedua:";
            cin>>bil2;

            int hasil= Pengurangan(bil1,bil2);
            cout<<"HasilPengurangan:"<<hasil<<endl;
        }
        else if(pilih==3){
            cout<<"Masukkan bilangam pertama:";
            cin>>bil1;
            cout<<"Masukkan bilangam kedua:";
            cin>>bil2;

            int hasil= perkalian(bil1,bil2);
            cout<<"Hasil Perkalian:"<<hasil<<endl;
        }
        else if(pilih==4){
            cout<<"Masukkan bilangam pertama:";
            cin>>bil1;
            cout<<"Masukkan bilangam kedua:";
            cin>>bil2;

            int hasil= Pembagian(bil1,bil2);
            cout<<"Hasil Pembagian:"<<hasil<<endl;
        }
        else if(pilih==5){
            cout<<"Masukkan bilangam pertama:";
            cin>>bil1;
            cout<<"Masukkan bilangam kedua:";
            cin>>bil2;

            int hasil= pangkat(bil1,bil2);
            cout<<"Hasil dari: "<<bil1<<" dipangkatkan dengan: "<<bil2<<" adalah "<<hasil<<endl;
        }
        else if(pilih==6){
            cout<<"selesai...\n"<<endl;
        }
        else{
            cout<<"Pilihan tidak valid\n"<<endl;
        }
    }


return 0;
}


