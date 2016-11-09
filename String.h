/*
  String Header class
  
  Expected instruction line to be receieved as input:
  VAR<name>,<type>,<optional:sizeincaseofstringonly>,<defaultvalue>
  VAR$mystr,STRING,100,”HelloworldMIS!!!”

  String class inherits from alpha and recieves String value after figuring out the type in VAR
*/
#include <string>
using namespace std;

class StringVar : public Alpha {
private:
  int length;
  std::string value;
  static const MAX_L = 256;
public:
  StringVar();
  StringVar(std::string n, std::string v, int l);
  ~StringVar();
  void StringVar::setValue(std::string v, int l);
  int getLength();
  std::string getValue();
  StringVar& StringVar::operator=(const StringVar& other); // copy assignment
  char &StringVar::operator[](int i);  //operator overload used for set_ / get_
};
