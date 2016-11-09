/*
  @author Froylan Valencia
  String Header class
  
  Expected instruction line to be receieved as input:
  VAR<name>,<type>,<optional:sizeincaseofstringonly>,<defaultvalue>
  VAR$mystr,STRING,100,”HelloworldMIS!!!”
  String class inherits from alpha and recieves String value after figuring out the type in VAR
*/
#ifndef STR_H
#define STR_H
#include "Alpha.h"
class StringVar : public Alpha {
private:
  int length;
  std::string value;
  static const size_t MAX = 256;
public:
  StringVar();
  StringVar(std::string n, std::string v, int l);
  ~StringVar();
  void setValue(std::string v, int l);
  int getLength();
  auto getValue();
  //StringVar& operator=(const StringVar& other); // copy assignment
  char &operator[](int i);  //operator overload used for set_ / get_
};
#endif
