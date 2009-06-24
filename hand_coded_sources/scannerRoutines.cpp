//----------------------------------------------------------------------------*

#include "lexiqueBDD.h"
#include "bdd/C_BDD.h"

//---------------------------------------------------------------------*

void scanner_routine_formerCompEgal (C_Lexique &, uint32 & ioValue) {
  ioValue = C_BDD::kEqual ;
}

//---------------------------------------------------------------------*

void scanner_routine_formerCompNonEgal (C_Lexique &, uint32 & ioValue) {
  ioValue = C_BDD::kNotEqual ;
}

//---------------------------------------------------------------------*

void scanner_routine_formerCompInfEgal (C_Lexique &, uint32 & ioValue) {
  ioValue = C_BDD::kLowerOrEqual ;
}

//---------------------------------------------------------------------*

void scanner_routine_formerCompInf (C_Lexique &, uint32 & ioValue) {
  ioValue = C_BDD::kStrictLower ;
}

//---------------------------------------------------------------------*

void scanner_routine_formerCompSupEgal (C_Lexique &, uint32 & ioValue) {
  ioValue = C_BDD::kGreaterOrEqual ;
}

//---------------------------------------------------------------------*

void scanner_routine_formerCompSup (C_Lexique &, uint32 & ioValue) {
  ioValue = C_BDD::kStrictGreater ;
}

//----------------------------------------------------------------------------*
