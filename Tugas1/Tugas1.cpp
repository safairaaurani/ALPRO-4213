#include <iostream>
using namespace std;

int penjumlahan (int x, int y){
    return x+y;
}

int pengurangan (int x, int y){
    return x-y;
}

int hitungTotal(int arr[], int n) {
    int total = 0;
    for(int i=0; i<n; i++) {
        total += arr[i];
    }
    return total;
}

float hitungRataRata(int arr[], int n, int pembagi) {
    int total = 0;
    for(int i=0; i<n; i++) {
        total += arr[i];
    }
    float rata = (float)total / (n * pembagi);
    return rata;
}



int main (){
    int x, y;
    //no1
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan ke 2 : ";
    cin >> y;

    cout << "hasil penjumlahan x+y adalah : " <<penjumlahan(x,y)<<endl;

    //no2
    cout << "Masukkan bilangan pertama: ";
    cin >> x;

    cout << "Masukkan bilangan ke 2: ";
    cin >> y;

    cout << "Hasil pengurangan x-y adalah: " << pengurangan(x,y) << endl;

    //no3
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int total = hitungTotal(arr, n);
    cout << "Jumlah total dari array adalah: " << total << endl;

    //no4
    float rata = hitungRataRata(arr, n, 4);
    cout << "Rata-rata dari array dibagi dengan 4 adalah: " << rata << endl;


    return 0;
}
