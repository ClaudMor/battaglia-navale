#ifndef GIOCATORE_H
#define GIOCATORE_H

#include <vector>
#include <string>
#include "Griglia.h"
#include "Nave.h"
#include "Portaerei.h"
#include "Corazzata.h"
#include "Incrociatore.h"
#include "Sottomarino.h"
#include "Cacciatorpediniere.h"

using std::vector;

class Giocatore{

private:

bool haPerso = false;
Griglia griglia;
vector<Nave> navi;

public:

  Giocatore(Griglia,Portaerei, Corazzata, Incrociatore, Sottomarino, Cacciatorpediniere);
  Griglia getGriglia() const;
  bool gethaPerso() const;
  void posiziona();
  void incassa(int*);
  int* spara();






};
#endif
