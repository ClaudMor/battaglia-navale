#include <iostream>
#include "Nave.h"
#include "Cacciatorpediniere.h"

using std::cout;
using std::endl;

Cacciatorpediniere::Cacciatorpediniere(){
  this -> coord = new int[2];
  this -> size = 2;
  this -> nome = "Cacciatorpediniere";
}

Cacciatorpediniere::~Cacciatorpediniere(){
  delete[] this -> coord;
}
