#include <iostream>
#include <iomanip>
#include <string>
#include "Nave.h"

using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;


char Nave::getOrient() const{
return this->orient;
}

int Nave::getSize() const{
  return this -> size;
}

int* Nave::getCoord() const{
  return this -> coord;
}

string Nave::getNome() const{
  return this -> nome;
}

void Nave::setNome(string s){
  this -> nome = s;
}



istream &operator>>( istream &input, Nave &nave){

cout<<"Posizionamento "<<nave.nome<<": inserire v x y affinchè la nave sia disposta in verticale con blocco più alto avente ascissa x e ordinata y, oppure o x y affinchè la nave sia disposta in orizzontale con blocco più a sinistra avente ascissa x e ordinata y"<<endl;


input>>setw(2)>>nave.orient;
input.ignore();
input>>setw(2)>>nave.coord[0];
input.ignore();
input>>setw(2)>>nave.coord[1];

cout<<"(Nave, >>) 47: "<<nave.nome<<": Nave.getOrient() = "<<nave.getOrient()<<" nave.getCoord()[0] = "<<nave.getCoord()[0]<<" nave.getCoord()[1] = "<<nave.getCoord()[1]<<endl;

return input;

}
