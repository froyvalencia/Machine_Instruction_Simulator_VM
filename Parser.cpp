// \n, \r, \t

class Parser {  
private:
  List<string> parsed;
public:
  Parser();
  
  //getName();
  //getType();
  //getValue();
};

//undetermined
//string tokenizer(){}
class Pasrse_Instruction : Parser {
private:
  string instruction;  
  string instructionType;
public:
  
  pasrse_Instruction(string instruction){
    string instructionType = getInstructionType();
    List<string> params = getParameters(instructionType);
    int num = getNumOfParams();
    for(param : params){
      //get some particular thin
    }
  }
  
  string getInstructionType(){
    
  }
  
  
  int getNumOfParams(){
    
  }
  
};

class Parse_Asignment : Parser {

private:
  string asignment;
  
public:
  parse_Asignmnet(string asignment){
    inst = toeknzize(null,'$');
    name = tokenize('$',',' );
    getType();
    getName();
    getValue();
  }
  
  VAR createVar(){
  
  }
};
