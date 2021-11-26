#include <iostream>
using namespace std;

int main() {
  
  int angka;  //deklarasi angka
  cout << "Masukan Angka :"; //output masukan angka
  cin >> angka; //input angka

  int fak = 1; //deklarasi faktorial

  for(int x = 1; x <= angka; x++) //perulangan for dimulai dari x = 1 sampai dengan x kurang dari atau sama dengan angka, nilai x akan naik 1 angka.
{
  fak = fak * x; // rumus mencari faktorial
}

cout << "faktorial of :" << angka << " = " << fak; //untuk menampilkan hasil faktorial dari input yg dimasukan

  return 0;
} 
