#include <iostream>
#include "Nave.h"
#include "Portaerei.h"

using std::cout;
using std::endl;

Portaerei::Portaerei(){
  this -> coord = new int[2];
  this -> size = 5;
  this -> nome = "Portaerei";
}

Portaerei::~Portaerei(){
  delete[] this -> coord;
}
