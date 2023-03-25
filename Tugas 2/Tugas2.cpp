#include<iostream>
using namespace std;

bool isEven(int x){
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x,int f){
    return f % x == 0;
}

int maxArray(int arr[],int n){
    int result = arr[0];
    for(int i = 0; i < n; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[],int n){
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int maxx(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}

int minn(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int sumEven(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void swapp(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai a : " << a << "\n Nilai b : " << b << endl;
}

bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    //isEven
    cout << "---Menentukan Suatu Bilangan Genap atau Tidak---\n";
    cout << "Masukkan satu bilangan genap: ";
    cin >> n;
    string even = (isEven(n) == 1)? " Merupakan Bilangan Genap" : " Bukan Bilangan genap";
    cout << n << even << endl;

    //isodd
    cout << "\n---Menentukan Suatu Bilangan Ganjil atau Tidak---\n";
    cout << "Masukkan satu bilangan ganjil: ";
    cin >> n;
    string odd = (isOdd(n) == 1)? " Merupakan Bilangan Ganjil" : " Bukan Bilangan ganjil";
    cout << n << odd << endl;

     //isFactor
    int x,f;
    cout << "\n---Menentukan Faktor atau Tidak---\n";
    cout << "Masukan bilangan pertama : ";
    cin >> x;
    cout << "Masukan bilangan kedua : ";
    cin >> f;
    string faktor = (isFactor(x,f)==1) ? " faktor " : " bukan faktor ";
    cout << x << " merupakan " << faktor << "dari " << f<< endl;

     //Max Min (a,b)
    int a,b;
    cout << "\n---Menentukan Bilangan Terbesar dan Terkecil---\n";
    cout << "Masukan nilai a : ";
    cin >> a;
    cout << "Masukan nilai b : ";
    cin >> b;
    cout << "Nilai terbesar diantara a&b: " << maxx(a,b) << endl;
    cout << "Nilai terkecil diantara a&b: " << minn(a,b) << endl;

     //Max Min Array
    cout << "\n---Menentukan Bilangan Terbesar dan Terkecil dari Array---\n";
    cout << "Masukkan banyak bilangan yang diinginkan: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai: ";
        cin >> arr[i];
    }
    int maxArr = maxArray(arr,n);
    int minArr = minArray(arr,n);
    //sumevenodd
    int sumGenap = sumEven(arr, n);
    int sumGanjil = sumOdd(arr, n);
    cout << "Nilai terbesar dari array tersebut adalah: " << maxArr << endl;
    cout << "Nilai terkecil dari array tersebut adalah: " << minArr << endl;
    //coutsum
    cout << "Jumlah nilai bilangan genap dari array tersebut adalah : " << sumGenap << endl;
    cout << "Jumlah nilai bilangan ganjil dari array tersebut adalah : " << sumGanjil << endl;

    //sswap
    cout << "\n--tukar nilai---\n";
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    swap(a, b);
    cout << "\n---nilai setelah ditukar---\n";
    cout <<" Nilai a:  " << a << endl;
    cout <<" Nilai b:  " << b << endl;



    //isFound
    cout << "Masukkan jumlah array : ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan angka : ";
        cin >> ar[i];
    }
    cout << "Masukkan angka yang dicari : ";
    cin >> x;
    string cari = (isFound(ar, x, n) == 1)? "Angka ditemukan" : "Angka tidak ditemukan";
    cout << cari << endl;

    return 0;
}
