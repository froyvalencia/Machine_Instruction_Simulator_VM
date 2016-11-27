#ifndef  JMP_H
#define JMP_H
#include "Instruction.h"
class Jump : public Instruction {
 public:
  Jump();
  virtual ~Jump();
  virtual void execute(vector<string> line);
  virtual Instruction * clone();
};
#endif
