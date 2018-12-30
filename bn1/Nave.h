#ifndef NAVE_H
#define NAVE_H

#include <iostream>
#include <string>


using std::istream;
using std::string;

class Nave {

friend istream &operator>>(istream &, Nave &);

public:


  void setNome(string);

  char getOrient() const;
  int getSize() const;
  int* getCoord() const;
  string getNome() const;


protected:
  string nome;
  char orient;
  int size;
  int* coord;


};

#endif
