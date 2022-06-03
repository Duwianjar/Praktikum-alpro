#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"
using namespace std;

int main() {
	
	Input input;
	input.login();
	input.menu();
	input.kirim();
	input.toFile();
	
	Proses proses;
	proses.getData();
	proses.diskon();
	proses.proteksi();
	proses.ekspedisi();
	proses.fiturongkir();
	proses.tofile();
  
	Output output;
	output.getData();
	output.daftarpesanan();
  
  
  return 0;
}




	