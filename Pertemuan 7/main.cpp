#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"
using namespace std;

int main() {
  Input input;
  input.readBarang();
  input.toFile();

  Proses proses;
  proses.getData();
  proses.cariBarang();
  proses.toFile();
  
  Output output;
  output.getData();
  output.hasilcari();
  output.asdesceding();

  return 0;
}




	
