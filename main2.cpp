#include <iostream>
using namespace std;

int main() {
  cout << "Program C++ Menghitung Faktorial" << endl; //output 


  int angka, hasil, x;  //deklarasi angka hasil dan x

  cout << "Masukan Angka :"; //output
  cin >> angka; //input angka

  cout << angka << "! = "; //output ! =

  int fak = 1; //deklarasi fak = 1
  for(x = 1; x <= angka; x++) //perulangan dimulai dari 1 dan kurang dari angka input dan di cetak maju
  {
    fak = fak * x; //rumus menghitung faktorial

    //untuk menampilkan angka
    cout << x;
    if(x != angka)
    {
      cout << "*";
    }
  }
  cout << "=" << fak; //hasil
  cout << endl;

  return 0;
} 
