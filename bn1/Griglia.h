#ifndef GRIGLIA_H
#define GRIGLIA_H

class Griglia{

private:

int size;
char **m1;
char **m2;

void linea1() const;
void linea2(int) const;




public:
Griglia();
//~Griglia();
void draw() const;
void setm1(char,int,int);
void setm2(char,int,int);
char getm1(int,int) const;
char getm2(int,int) const;
bool isX() const;


};
#endif
