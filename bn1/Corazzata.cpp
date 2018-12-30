#include <iostream>
#include "Nave.h"
#include "Corazzata.h"

using std::cout;
using std::endl;

Corazzata::Corazzata(){
  this -> coord = new int[2];
  this -> size = 4;
  this -> nome = "Corazzata";
}

Corazzata::~Corazzata(){
  delete[] this -> coord;
}
