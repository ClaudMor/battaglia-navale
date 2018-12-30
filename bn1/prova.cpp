#include <iostream>
#include <iomanip>
#include "Griglia.h"
#include "Nave.h"
#include "Portaerei.h"
#include "Corazzata.h"
#include "Incrociatore.h"
#include "Sottomarino.h"
#include "Cacciatorpediniere.h"
#include "Giocatore.h"
using std::cout;
using std::endl;



int main(){
cout<<"(main) 10"<<endl;

Griglia gr1, gr2;
Portaerei p1, p2;
Corazzata c1, c2;
Incrociatore i1, i2;
Sottomarino s1, s2;
Cacciatorpediniere ct1, ct2;


Giocatore g1(gr1, p1, c1, i1, s1, ct1);
Giocatore g2(gr2, p2, c2, i2, s2, ct2);
gr1.draw();
g1.posiziona();
/*g2.posiziona();

while(!g1.gethaPerso() && !g2.gethaPerso()){
  g2.incassa(g1.spara());
  if(!g2.gethaPerso()){
  g1.incassa(g2.spara());
}
}

if(g1.gethaPerso()){
  cout<<"Giocatore2 ha vinto"<<endl;
}
else{
  cout<<"Giocatore1 ha vinto"<<endl;
}*/




return 0;
}
