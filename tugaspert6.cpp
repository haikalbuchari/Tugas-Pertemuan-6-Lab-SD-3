#include<iostream>
#include<string>
using namespace std;

void cetak(string data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main (){
    string data[100];
    int n;

    cout << "Masukkan jumlah kata: ";
    cin >> n;

    cout << "Masukkan " << n << " kata:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "\nData awal : ";
    cetak(data, n);

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "\nLangkah " << i << " (key = " << key << ")" << endl;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            cout << "  Geser \"" << data[j] << "\" dari indeks " << j
                 << " ke indeks " << j + 1 << " : ";
            cetak(data, n);
            j--;
        }

        data[j + 1] = key;
        cout << "  Sisipkan \"" << key << "\" di indeks " << j + 1 << " : ";
        cetak(data, n);
    }

    cout << "\nHasil insertion sort: ";
    cetak(data, n);

    return 0;
}