#ifndef  OUT_H
#define OUT_H
#include "Instruction.h"
class Out : public Instruction {
 public:
  Out();
  virtual ~Out();
  virtual void execute(vector<string> line);
  virtual Instruction * clone();
};
#endif
