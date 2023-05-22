#include <iostream>
using namespace std;
void minEven (int array[], int n);
bool isOdd (int x);

int main()
{
    int n;
    cout << "Masukkan panjang array : " ;
    cin >> n ;
    int array[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan nilai array index ke-" << i << ":";
        cin >> array[i];
    }

    cout << "Array: ";

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    cout << "\n";

    minEven (array, n);
    return 0;
}


void minEven (int array[], int n)
{
    int min_Even = array[0];
    int min_Idx = 0;
    for (int i=0; i<n; i++){
        if(!isOdd(array[i]) && array[i] < min_Even){
            min_Even = array[i];
            min_Idx = i;
        }
    }
    if (min_Even== array[0]){
        cout << "tidak ada bilangan genap";

    }else {
    cout<<"nilai genap terkecil:"<<min_Even<< endl;
    cout<<"index genap terkecil:"<<min_Idx<< endl;

    }
}

bool isOdd (int x){
    if (x % 2 != 0){
        return true;
    } else {
        return false;
    }
}
