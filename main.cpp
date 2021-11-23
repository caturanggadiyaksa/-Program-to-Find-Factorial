#include <iostream>
using namespace std;

int main() {
  
  int angka;
  cout << "Masukan Angka :";
  cin >> angka; //input angka

  int fak = 1; //deklarasi faktorial

  for(int x = 1; x <= angka; x++) 
{
  fak = fak * x; 
}

cout << "faktorial of :" << angka << " = " << fak;

  return 0;
} 
