#include <iostream>
using namespace std;

int main() {
  
  int angka;
  cout << "Masukan Angka :";
  cin >> angka; //input angka

  int fak = 1; //deklarasi faktorial

  for(int x = 1; x <= angka; x++) //perulangan for dimulai dari x = 1 sampai dengan x kurang dari atau sama dengan angka, nilai x akan naik 1 angka.
{
  fak = fak * x; 
}

cout << "faktorial of :" << angka << " = " << fak;

  return 0;
} 
