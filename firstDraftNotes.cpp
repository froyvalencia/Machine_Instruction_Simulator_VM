Class TYPE {/
  //STRIng , CHAR, INT, REAl

};
class alpha : TYPE {
  flag
  size;
};

class char_t : alpha {

}

class str_t : alpha {
}

class num : type {
  void add(){}

};

class dbl_t : num {

};

class int_t : num {

};

template<S *, T *, V *>
Class VAR {
  

  VAR(){
    //    do stuff
  }

  varhelpers(){

  }


};

class Machine {
  MACHINE(){
    //$
    //parser mechanis -> callout to antother classm
    //< >
    //... > 
    //HahsTable[VAR.id] = OBK(VAR)
    //VAR<><><> t = new VAR<><><>();
    
    //submitCommand()


    //I/O
    //
  }
};

  //parse()
  //VAR<><><>
  
class parser {
  parser()
  //  getName();
  //getType();
  //getValue();
    

};

//undetermined
//  string tokenizer(){}

class pasrse_Instruction : parser {
  
  pasrse_Instruction(String instruction){
    string instructionType = getInstructionType();
    List<string> params = getParameters(instructionType);//or get objectType
    //for param : objType.getParams()) //hopefully by refrence or something
    int num = getNumOfParams();
    for(param : params)
      //get some particular thing
  }
  
};

class parse_Asignment : parser {
 
  parse_Asignmnet(String asignment){
    inst = toeknzize(null,'$');
    name = tokenize('$',',' )
    getName();
    getType();
    getValue();
  }
};

int main() {

  return 0;
}
