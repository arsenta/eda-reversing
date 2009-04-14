// InstructionARM.h -- Apr 13, 2009
//    by geohot

#ifndef EDA_INSTRUCTIONARM_H_
#define EDA_INSTRUCTIONARM_H_

#include "../Instruction.h"
#include "../../edaMacros.h"

#include "InstructionARM.h"

namespace eda {

class InstructionARM : public Instruction
{
public:
  InstructionARM(Data opcode);  //disassembler
private:
  bool init(Data opcode);
  bool initDataProcessing();
  bool initLoadStore();
  bool initMiscellaneous();
  bool initBranches();
  int mEncodingARM;
  Data mOpcode;
  bool mValid;
  //will probably have private functions
};

}

#endif /* EDA_INSTRUCTIONARM_H_ */