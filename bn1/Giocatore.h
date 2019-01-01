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
string nome;

public:

  Giocatore(Griglia,Portaerei, Corazzata, Incrociatore, Sottomarino, Cacciatorpediniere, string);
  Griglia getGriglia() const;
  bool gethaPerso() const;
  void posiziona();
  bool incassa(int*);
  int* spara();
  void feedback(bool, int*);
  string getNome() const;






};
#endif
