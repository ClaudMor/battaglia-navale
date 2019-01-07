  #include <iostream>
  #include <iomanip>
  #include "Griglia.h"

  using std::cout;
  using std::setw;
  using std::endl;

Griglia::Griglia(){
size = 8;
  for(int i=0; i<size;i++){
    m1 = new char*[size];
    m2 = new char*[size];
  }
    for(int i = 0; i<size; i++){
      m1[i] = new char[size];
      m2[i] = new char[size];
    }
    for(int i = 0; i<size; i++){
    for(int j=0; j<size;j++){
      m1[i][j]='_';
      m2[i][j]='_';
    }
  }
  }

/*Griglia::~Griglia(){
 for(int i = 0; i<size; i++){
    delete[] m1[i];
    delete[] m2[i];
  }
  delete[] m1;
  delete[] m2;
}*/

void Griglia::setm1(char o,int x, int y){
  m1[x][y] = o;
}

void Griglia::setm2(char o,int x, int y){
  m2[x][y] = o;
}

char Griglia::getm1(int x, int y) const
{
  return m1[x][y];
}

char Griglia::getm2(int x, int y) const
{
  return m2[x][y];
}


  void Griglia::linea1() const
  {
    cout<<"  ";
    for(int i=0; i<8;i++){
      cout<<" "<<i;
    }
  cout<<"       ";//5 spazi
  for(int i=0; i<8;i++){
    cout<<" "<<i;
  }
  cout<<endl<<"  ";
  for(int i=0; i<17;i++)
  cout<<"_";
  cout<<"      "; //6 spazi
  for(int i=0; i<17;i++)
  cout<<"_";
  cout<<endl;
  }


  void Griglia::linea2(int i) const
  {
cout<<i<<" ";
    for(int j = 0; j<8; j++){
  cout<<"I"<<m1[i][j];
    }
    cout<<"I"<<"    "<<i<<" ";//4 spazi,1 spazio
    for(int j = 0; j<8; j++){
  cout<<"I"<<m2[i][j];
    }
    cout<<"I"<<endl;


  }

  void Griglia::draw() const
  {

 cout<<"  La tua flotta"<<"          "<<"Il mare dell'avversario"<<endl<<endl;
 linea1();
 for(int i = 0; i<8; i++){
    linea2(i);
      }
      cout<<endl<<"Legenda: "<<endl<<" _"<<endl<<"I_I = casella vuota/ignota"<<endl<<"IxI = blocco nave"<<endl<<"I0I = blocco nave distrutto"<<endl<<"ImI = colpo mancato"<<endl<<endl;
    }

    bool Griglia::isX() const {
      bool alive = false;
      for(int i = 0; i<8; i++){
        for(int j = 0; j < 8; j++){
          if(m1[i][j] == 'x'){
            alive = true;
          }
        }
      }
      return alive;
    }
