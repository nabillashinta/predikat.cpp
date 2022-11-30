#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int nilai;
  cout << "Masukkan Nilai"; cin >> nilai;
  if (nilai >78){
      cout  << "Lulus";
    }else if (nilai== 78){
      cout << "KKM";
    }else{
      cout << "Tidak Lulus";
      }
}