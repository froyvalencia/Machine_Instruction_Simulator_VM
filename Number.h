/*
  Number Header File

  Expected instruction line examples to work with:      
	VAR<name>,<type>,<optional:sizeincaseofstringonly>,<defaultvalue>
  	VAR$myint,NUMERIC,100
  	VAR$myfloat,REAL,12.14
   
   Number  inherits from VAR and handles the given input which will be passed to Numeric or Real  
*/
#include "VAR.cpp"
class Number : public VAR {
  //string type;
protected:
public:  
  Number(std::string n, std::string t); 
  virtual void printType();
};
