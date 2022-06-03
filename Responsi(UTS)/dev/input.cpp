#include <iostream>
#include <fstream>
#include <windows.h>
#include "../library/input.h"

int main(){
  Input input;
  input.login();
  input.menu();
  input.kirim();
  input.toFile();
  return 0;
}
