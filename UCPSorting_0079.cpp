// 1. dibagi 2 sublist, list yang sudah terurut dan list yang belum terurut, kemudian algoritma yang telah kita buat akan membandingkan dan kemudian dimasukkan ke sublist tertentu
// 2. Dengan mencari elemen terkecil 
// 3. untuk mengetahui jumlah langkah bisa menggunakan rumus jumlah data - 1 atau n - 1
// 4. coding dibawah ini

#include <iostream>
using namespace std;

int rafa[79];
int n;

void input() { // Prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal jumhlah 79): ";
        cin >> n;

        if (n <= 79) // jika n kurang dari / sama dengan 79
            break; // keluar dari loop
        else // jika n lebih dari 79
            cout << "\nArray hanya dapat mempunyai maksimal 79 elemen.\n";
    }

    cout << endl;
    cout << "========================" << endl;
    cout << "Masukkan elemen arraynya" << endl;
    cout << "========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke- " << i << ": "; 
        cin >> rafa[i]; 
    }
}

void SelectionSort() {
    int i, j, pass;

    for (i = 0; i < n - 1; i++) {
        pass = i;
        for (j = i + 1; j < n; j++) {
            if (rafa[j] < rafa[pass])
                pass = j;
        }

        int temp = rafa[pass];
        rafa[pass] = rafa[i];
        rafa[i] = temp;
    }
}


void display() {
    cout << endl;
    cout << "======================================" << endl;
    cout << "Elemen nilai array yang telah tersusun" << endl;
    cout << "======================================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << rafa[j];
        if (j < n - 1)
            cout << "-->";
    }

    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    SelectionSort();
    display();
    system("pause");
    return 0;
}