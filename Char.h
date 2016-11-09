/*
  Char Header File

  Expected instruction lines to work with:
  VAR<name>,<type>,<optional:sizeincaseofstringonly>,<defaultvalue>
  VAR$mychar,CHAR,’c’

  Char inherits from Alpha to obtain a char value instead of a string value. 
*/
#include "Alpha.h"
class CharVar : public Alpha {  
private:
  char value;
public:
  CharVar(std::string n);
  CharVar(std::string n, char v);
  friend std::ostream& operator<<(std::ostream& os, const CharVar& var);
};



