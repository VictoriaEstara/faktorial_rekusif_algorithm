// Kode ini dibagikan oleh Dedad Fajar dan dapat diakses melalui https://github.com/VictoriaEstara
#include <iostream> 

int faktorial(int n) {
    if (n <= 1) { 
        return 1; 
    } else {
        return n * faktorial(n - 1); 
    }
}

int main() {
    using namespace std;
    
    int angka; 
    char pilihan; 

    do {
        cout << "\nMasukkan sebuah angka: "; 
        cin >> angka; 

        if (angka < 0) { 
            cout << "Faktorial tidak terdefinisi untuk angka negatif." << endl; 
        } else {
            int hasil = faktorial(angka); 
            cout << "Faktorial dari " << angka << " adalah " << hasil << endl; 
        }

        cout << "\nApakah Anda ingin memasukkan angka lagi? (y/n): "; 
        cin >> pilihan; 

    } while (pilihan == 'y' || pilihan == 'Y'); 

    return 0; 
}
