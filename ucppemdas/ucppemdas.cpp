//Nama : Regina rana nabila
// TI - D

// 1.   Int, contohnya int umur, biasanya digunakan yang membutuhkan operasi matematika / bilangan bulat
//      String, contohnya string alamat, dibutuhkan untuk karakter yang panjangnya bervariasi / memiliki karakter khusus
//      float, contohnya float pembagian, dibutuhkan untuk bilangan pecahan / desimal yang jumlah nya kecil dibandingkan dengan double

// 2.   if else statement, akan lanjut menjalankan perintah apabila perintah tersebut benar
//      dan akan menampilkan sesuai dengan perintahmya
//      misalnya,  if (nBilanganA == nBilanganB) {status = "Sama Besar";}
//      else if (nBilanganA > nBilanganB) {status = "Bilangan A lebih besar dari Bilangan B";}
//      else {status = "Bilangan A lebih kecil dari Bilangan B";}

// 3.   Structur adalah menggabungkan beberapa jenis data/ informasi menjadi satu, 
//      misalnya struct Mahasiswa yg mendefinisikan sebuah struct untuk Mahasiswa didalamnya terdapat informasi lain seperti
//	    string nim, string nama, string alamat, int umur.

// 4.   Prosedure dan fungsi adalah sebuah perintah yang digunakan untuk tugas tertentu
//      perbedaannya adalah jika prosedure tidak akan menyimpan dan tidak mengembalikan nilai,
//      prosedure hanya akan melewatkan nilal, misalnya void ProsedureLuas (int p, int l) {luas = p * l;}

//      sedangkan fungsi akan mengembaikan dan menyimpan nilai, dan rata rata akan di akhiri dengan return
//      apabila nilai dikembalikan misalnya int fungsiluas(int p, int l) {return p * l;}

// 5.   looping adalah perulangan. misalnya for yang digunakan untuk mengelola suatu program 
//      yang aturannya sudah ditentukan sebelumya.
//      misalnya, for (i = 0; i < 5; i++) // {cout << "Data Array Ke-" << i << " :" << arr[i] << endl;}
//      itu berarti indeks akan dimulai dari 0, jika kurang dari 5 maka akan terus melooping dengan cara (i + 1)

//6.

#include <iostream>
using namespace std;

int main()
{
    int nilaiMatematika, nilaiFisika, nRerata;
    string status;
    string Nama;

    cout << "Masukkan Nama Kandidat = ";
    cin >> Nama;

    cout << "Masukkan Nilai Matematika = ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai Fisika = ";
    cin >> nilaiFisika;

    nRerata = (nilaiMatematika + nilaiFisika) / 2;

    if (nRerata > 60) {
        status = "Lulus";
    }
    else if (nilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai MTK = " << nilaiMatematika << endl;
    cout << "Nilai Fisika = " << nilaiFisika << endl;
    cout << "Rata-ratanya adalah = " << nRerata << endl;
    cout << "Statusnya adalah = " << status << endl;
}