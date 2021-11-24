#include <iostream>
using namespace std;

int main() {
  cout << "Program C++ Menghitung Faktorial" << endl;


  int angka, hasil, x;

  cout << "Masukan Angka :";
  cin >> angka;

  cout << angka << "! = ";

  int fak = 1;
  for(x = 1; x <= angka; x++)
  {
    fak = fak * x;

    //untuk menampilkan angka
    cout << x;
    if(x != angka)
    {
      cout << "*";
    }
  }
  cout << "=" << fak;
  cout << endl;

  return 0;
} 
