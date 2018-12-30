#include "Giocatore.h"
#include "Griglia.h"
#include <vector>
#include <cstdlib>
#include <iostream>


using std::vector;
using std::cout;
using std::cin;
using std::endl;


Giocatore::Giocatore(Griglia grgl, Portaerei p, Corazzata c, Incrociatore i, Sottomarino s, Cacciatorpediniere ct){
  cout<<"(Giocatore) 12: constructor called"<<endl;
  this -> griglia = grgl;
  this -> navi.push_back(p);
  this -> navi.push_back(c);
  this -> navi.push_back(i);
  this -> navi.push_back(s);
  this -> navi.push_back(ct);
}

void Giocatore::posiziona(){
  bool intersez = false;
  vector<Nave>::iterator it;
  //for(it = navi.begin(); it != navi.end(); it++){
    std::system("cls");
    griglia.draw();
  /*  do {
      if(intersez){
        cout<<"intersezione, per favore riposiziona l'ultima nave"<<endl;
      }
      cin >> *it;
      for(int i = 0; i < (*it).getSize() ; i++){
        if((*it). getOrient() == 'v'){
        if(griglia.getm1((*it).getCoord()[0], (*it).getCoord()[1] + i) != '_' ){
          intersez == true;
          break;
        }
       }
       if( (*it).getOrient() == 'o'){
         if(griglia.getm1((*it).getCoord()[0] + i, (*it).getCoord()[1]) != '_' ){
           intersez == true;
           break;
         }
       }
      }
    } while( intersez );
    intersez = false;
    if((*it).getOrient() == 'v'){
        for(int i = 0; i < (*it).getSize() ; i++){
          griglia.setm1('x', (*it).getCoord()[0], (*it).getCoord()[1] + i);
        }
    } else if((*it).getOrient() == 'o') {
      for(int i = 0; i < (*it).getSize() ; i++){
        griglia.setm1('x', (*it).getCoord()[0] + i, (*it).getCoord()[1]);
      }
    }
  }*/
}

void Giocatore::incassa(int *a){
  if(griglia.getm1(a[0], a[1]) == '_'){
  griglia.setm1('m', a[0], a[1]);
  cout<<"Mancato!"<<endl;
 }
 if(griglia.getm1(a[0], a[1]) == 'x'){
     griglia.setm1('0', a[0], a[1]);
     cout<<"Colpito!";
 }
 if(griglia.getm1(a[0], a[1]) == '0'){
   cout<<"Sprecato!";
 }

 if(!griglia.isX()){
   haPerso = true;
 }
}

int* Giocatore::spara(){

  griglia.draw();

  int* a = new int[2];
  cout<<"Coordinata x del proiettile =  ";
  cin>> a[0];
  cout<<endl<<"Coordinata y del proiettile = ";
  cin>> a[1];
  cout<<endl;

  griglia.setm2('x',a[0], a[1]);

  return a;
}

bool Giocatore::gethaPerso() const{
  return haPerso;
}
