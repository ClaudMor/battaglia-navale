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

cout<<"Posizionamento "<<nave.nome<<": inserire v x y affinchè la nave sia disposta in verticale con blocco più alto avente riga x e colonna y, oppure o x y affinchè la nave sia disposta in orizzontale con blocco più a sinistra avente riga x e colonna y. Non sono ammesse intersezioni."<<endl;
bool failure = false;
do{
  if(failure){
    cout<<"coordinate non valide, per favore ripeta: "<<endl;
  }
  failure = false;
input>>setw(2)>>nave.orient;
if(nave.orient != 'v' && nave.orient != 'o'){
  failure = true;
  input.clear();
  input.ignore(70, '\n');
  goto label;
}
input.ignore();
input>>setw(2)>>nave.coord[0];
if(input.fail()){
  failure = true;
  input.clear();
  input.ignore(70, '\n');
    goto label;
}
input.ignore();
input>>setw(2)>>nave.coord[1];
if(input.fail()){
  failure = true;
  input.clear();
  input.ignore(70, '\n');
    goto label;
}
label: ;
}while(failure);


return input;

}
