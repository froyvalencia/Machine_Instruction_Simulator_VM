/*
  @author Froylan Valencia
  VAR<name>,<type>,<optional:sizeincaseofstringonly>,<defaultvalue>
  VAR$mychar,CHAR,’c’
*/

#include "Char.h"
//CharVar::CharVar(std::string n) : Alpha(n, "CHAR") {}
//CharVar::CharVar(const CharVar&& other) : Alpha(name,"CHAR") { 
//value = other.getValue();}
CharVar::CharVar(){}
CharVar::CharVar(std::string n, char v) {
  value = v;
}
CharVar::~CharVar(){}
void initialize(vector<string> line){
  name = line.at(1);
  type = line.at(2);
  value = line.at(3);
}

VAR * Numeric::clone(vector<string> line){
  Numeric * numeric = new Numeric();
  numeric->initialize(line);
  return numeric;
}

char CharVar::getValue() const{
  return value;
}

void CharVar::setValue(char c){
  value = c;
}

int main(){
return 0;
}
