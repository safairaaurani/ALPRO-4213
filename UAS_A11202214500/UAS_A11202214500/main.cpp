/*
Nama    : Safaira Aurani
NIM     : A11.2022.14500
Kelas   : A11.4213
*/

#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama, nim;
    int nilai[5];
    void printData()
    {
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai: ";
            for (int i = 0; i < 5; i++) {
                cout << nilai[i] << " ";
            }
        cout << endl;
    }
    void swapNilai(int* nilai1, int* nilai2)
    {
        int temp = *nilai1;
        *nilai1 = *nilai2;
        *nilai2 = temp;
    }
    int sumNilai(int* nilai, int n)
    {
        if (n == 0)
            return 0;
        return nilai[n-1] + sumNilai(nilai, n-1);
    }
    void selectionSort(int* nilai, int n)
    {
        if (n <= 1) {
            return;
        }
        int minIndex = 0;
        for (int i = 1; i < n; i++) {
            if (nilai[i] < nilai[minIndex]) {
                minIndex = i;
            }
        }
        if (minIndex != 0)
            swapNilai(&nilai[0], &nilai[minIndex]);

        selectionSort(nilai + 1, n - 1);
    }
};


int main()
{
    cout << "Program Data Mahasiswa" << endl;
    // Declare m1
    mahasiswa m1 = {"Safaira", "A11.2022.14500", {96, 99, 95, 97, 100}};
    cout << "\nBefore Swap" << endl;
    m1.printData();

    // After swap first and last element
    cout << "\nAfter Swap" << endl;
    m1.swapNilai(&m1.nilai[0], &m1.nilai[4]);
    m1.printData();

    // Average
    int n = sizeof(m1.nilai)/sizeof(m1.nilai[0]);
    cout << "\nNilai Rata-Rata: " << m1.sumNilai(m1.nilai, n) / n << endl;

    // Sorting
    m1.selectionSort(m1.nilai, n);
    cout << "\nNilai Setelah Sortir: ";
    for (int i = 0; i < 5; i++) {
        cout << m1.nilai[i] << " ";
    }
    cout << endl;
    return 0;
}
