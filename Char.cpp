/*
  @author Froylan Valencia
  VAR<name>,<type>,<optional:sizeincaseofstringonly>,<defaultvalue>
  VAR$mychar,CHAR,’c’
*/

#include "Char.h"
CharVar::CharVar(std::string n) : Alpha(n, "CHAR") {}
CharVar::CharVar(const CharVar&& other){
  value = other.getValue();
}
CharVar::CharVar(std::string n, char v) : Alpha(n, "CHAR") {
  value = v;
}
char CharVar::getValue(){
  return value;
}
void CharVar::setValue(char c){
  value = c;
}

//int main(){
//return 0;
//}



