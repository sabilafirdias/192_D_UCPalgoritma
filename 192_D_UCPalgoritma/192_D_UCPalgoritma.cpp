
// 1. Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen?
// Dengan meng-scan data secara berulang, membandingkan satu data dengan data di sampingnya, dan menukarnya apabila belum berurutan dari yang nilainya kecil ke besar, tidak perlu ditukar apabila sudah urut.

// 2. Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen!
// Dengan memecah data menjadi beberapa bagian, kemudian mengaplikasikan cara kerja Insertion Sort (membagi data menjadi sorted list dan unsorted list, lalu data dari unsorted list diambil satu per satu dari index terkecil kemudian dibandingkan dengan data di sorted list dan diletakkan secara urut) di masing-masing bagian.

// 3. Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
// Selection Sort, karena cara kerja dari algoritma ini adalah dengan mencari data terkecil lalu data tersebut di geser ke index 0. Algoritma ini lebih menghemat waktu pengerjaan dibanding algortima lain dalam kasus ini.

// 4. Konversi Algorithma berikut kedalam C++
// Jawab:

#include <iostream>
using namespace std;

int sabila[92];            //Membuat array dengan panjang data 92
int n;                     //Membuat variable inputan n

void input() {                  //Procedure untuk input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array: ";        //Membuat inputan jumlah elemen array
        cin >> n;                                      //Memanggil variable inputan n

        if (n <= 92) {                                 //Membuat kondisi n tidak lebih dari 92          
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 92 elemen.\n";     //Menampilkan pesan jika data lebih dari 92
        }
    }
    cout << endl;                                               //Membuat jarak per baris program              
    cout << "=====================" << endl;                    //Membuat tampilan susunan data elemen array
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)                       //Menggunakan perulangan for untuk menyimpan data pada array 
    {
        cout << "Data ke-" << (i + 1) << ": ";        //Memasukkan nilai data n
        cin >> sabila[i];                                //Menyimpan nilai data n ke dalam array sabila
    }
}

void selectionsort() {                      //Procedure Selection Sort

    int i, j;                              //Membuat variable j sebagai penanda
   
    for (j = 0; j <= n - 2; j++) {          //1. Looping dengan j dimulai dari 0 hingga n-2
        for (i = j + 1; i <= n - 1) {
            if sabila[i] < sabila[j]{
            j = i
            }
        }
    }
}

void display() {                //Procedure display
    cout << endl;               //Output baris kosong
    cout << "==================================" << endl;       //Output ke layar
    cout << "Elemenet Array yang telah tersusun" << endl;       //Output ke layar
    cout << "==================================" << endl;       //Output ke layar

    for (int j = 0; j < n; j++) {           //Looping dengan j dimulai dari 0 hingga n-1
        cout << sabila[j] << endl;             //Output ke layar
    }
    cout << endl;                           //Output baris kosong

}

int main() {
    input();                // Memanggil read()
    selectionsort();        // Memanggil selectionsort()
    display();              // Memanggil display()
    return 0;
}


