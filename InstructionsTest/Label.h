#ifndef LABEL_H
#define LABEL_H
#include "Instruction.h"
class Label : public Instruction {
 private:
 public:
  Label();
  virtual ~Label();
  virtual void execute(vector<string> line);
  virtual Instruction * clone();
};
#endif