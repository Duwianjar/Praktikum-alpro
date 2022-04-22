#include <iostream>
#include "sks.h"
using namespace std;
int main(){
  int a;
  cout <<"Masukkan Jumlah Mahasiswa\t: ";
  cin >> a;
  cout<<"======================================\n";
  SKS x;
  x.rekursif(a);
  return 0;
}
