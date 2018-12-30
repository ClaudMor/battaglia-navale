#include <iostream>
#include "Nave.h"
#include "Sottomarino.h"

using std::cout;
using std::endl;

Sottomarino::Sottomarino(){
  this -> coord = new int[2];
  this -> size = 3;
  this -> nome = "Sottomarino";
}

Sottomarino::~Sottomarino(){
  delete[] this -> coord;
}
