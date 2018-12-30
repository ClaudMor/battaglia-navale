#include <iostream>
#include "Nave.h"
#include "Incrociatore.h"

using std::cout;
using std::endl;

Incrociatore::Incrociatore(){
  this -> coord = new int[2];
  this -> size = 3;
  this -> nome = "Incrociatore";
}

Incrociatore::~Incrociatore(){
  delete[] this -> coord;
}
