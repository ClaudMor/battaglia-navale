#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Griglia.h"
#include "Nave.h"
#include "Portaerei.h"
#include "Corazzata.h"
#include "Incrociatore.h"
#include "Sottomarino.h"
#include "Cacciatorpediniere.h"
#include "Giocatore.h"
using std::system;
using std::cout;
using std::endl;



int main(){


Griglia gr1, gr2;
Portaerei p1, p2;
Corazzata c1, c2;
Incrociatore i1, i2;
Sottomarino s1, s2;
Cacciatorpediniere ct1, ct2;


Giocatore g1(gr1, p1, c1, i1, s1, ct1, "Giocatore1");
Giocatore g2(gr2, p2, c2, i2, s2, ct2, "Giocatore2");

g1.posiziona();
g2.posiziona();

while(!g1.gethaPerso() && !g2.gethaPerso()){
  int* a = g1.spara();
  g1.feedback(g2.incassa(a),a);
  delete[] a;
  if(!g2.gethaPerso()){
    int*b = g2.spara();
  g2.feedback(g1.incassa(b),b);
  delete[] b;
 }
}

if(g1.gethaPerso()){
  system("cls");
  cout<<"Giocatore2 ha vinto"<<endl;
}
else{
  system("cls");
  cout<<"Giocatore1 ha vinto"<<endl;
}




return 0;
}
