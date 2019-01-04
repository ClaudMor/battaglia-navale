#include "Giocatore.h"
#include "Griglia.h"
#include <vector>
#include <cstdlib>
#include <iostream>


using std::vector;
using std::cout;
using std::cin;
using std::endl;


Giocatore::Giocatore(Griglia grgl, Portaerei p, Corazzata c, Incrociatore i, Sottomarino s, Cacciatorpediniere ct, string name){
  this -> griglia = grgl;
  this -> nome = name;
  this -> navi.push_back(p);
  this -> navi.push_back(c);
  this -> navi.push_back(i);
  this -> navi.push_back(s);
  this -> navi.push_back(ct);
}

void Giocatore::posiziona(){
  bool intersez = false;
  vector<Nave>::iterator it;
  for(it = navi.begin(); it != navi.end(); it++){
    std::system("cls");
    cout<<"turno: "<<getNome()<<endl<<endl;
    griglia.draw();
    do {
      if(intersez){
        cout<<"intersezione, per favore riposiziona l'ultima nave"<<endl<<endl;
      }
      cin >> *it;
      for(int i = 0; i < (*it).getSize() ; i++){
        if((*it). getOrient() == 'o'){
        if(griglia.getm1((*it).getCoord()[0], (*it).getCoord()[1] + i) != '_'  || (*it).getCoord()[0]>7 ||  (*it).getCoord()[0]<0 ||  (*it).getCoord()[1]<0 ||((*it).getCoord()[1] + (*it).getSize() - 1)>7 ){
          intersez = true;
          break;
        }
       }
       if( (*it).getOrient() == 'v'){
         if(griglia.getm1((*it).getCoord()[0] + i, (*it).getCoord()[1]) != '_' || ((*it).getCoord()[0] + (*it).getSize() - 1)>7 ||  (*it).getCoord()[0]<0 ||  (*it).getCoord()[1]<0 || (*it).getCoord()[1]>7){
           intersez = true;
           break;
         }
       }
      intersez = false;
     }
    } while( intersez );
    intersez = false;
    if((*it).getOrient() == 'o'){
        for(int i = 0; i < (*it).getSize() ; i++){
          griglia.setm1('x', (*it).getCoord()[0], (*it).getCoord()[1] + i);
        }
    }
    if((*it).getOrient() == 'v') {
      for(int i = 0; i < (*it).getSize() ; i++){
        griglia.setm1('x', (*it).getCoord()[0] + i, (*it).getCoord()[1]);
      }
    }
  }
}

bool Giocatore::incassa(int *a){
  bool colpito = true;
  if(griglia.getm1(a[0], a[1]) == '_'){
  griglia.setm1('m', a[0], a[1]);
  std::system("cls");
  cout<<"Mancato!"<<endl<<endl;
  std::system("pause");
  colpito = false;
 }
 if(griglia.getm1(a[0],a[1]) == '0'){
   std::system("cls");
   cout<<"Sprecato!"<<endl<<endl;
   std::system("pause");
 }
 if(griglia.getm1(a[0], a[1]) == 'x'){
     griglia.setm1('0', a[0], a[1]);
     std::system("cls");
     cout<<"Colpito!"<<endl<<endl;
     std::system("pause");
     colpito = true;
 }
 if(!griglia.isX()){
   haPerso = true;
 }
return colpito;

}

int* Giocatore::spara(){
  std::system("cls");
  cout<<"turno: "<<getNome()<<endl<<endl;
  griglia.draw();
  cout<<getNome()<< " decidi dove sparare!"<<endl<<endl;

  int* a = new int[2];
  cout<<"riga del proiettile =  ";
  cin>> a[0];
  cout<<endl<<"colonna del proiettile = ";
  cin>> a[1];
  cout<<endl;



  return a;
}

bool Giocatore::gethaPerso() const{
  return haPerso;
}

Griglia Giocatore::getGriglia() const{
  return this -> griglia;
}

void Giocatore::feedback(bool colpito, int* a){
  if(colpito == true){
    griglia.setm2('0',a[0],a[1]);
  }
  if(colpito == false){
    griglia.setm2('m',a[0],a[1]);
  }
}

string Giocatore::getNome() const{
  return this -> nome;
}
