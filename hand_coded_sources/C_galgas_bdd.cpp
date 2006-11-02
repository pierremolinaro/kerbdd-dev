//---------------------------------------------------------------------------*
//                                                                           *
//  C_galgas_bdd : this class implements the GALGAS BDD extern type          *
//                                                                           *
//  Copyright (C) 2002, ..., 2006 Pierre Molinaro.                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "C_galgas_bdd.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                     'C_galgas_bdd' class                                  *
//                                                                           *
//---------------------------------------------------------------------------*

C_galgas_bdd::C_galgas_bdd (void) {
  mBuilt = false ;
}

//---------------------------------------------------------------------------*

C_galgas_bdd::~C_galgas_bdd (void) {
  mBuilt = false ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Constructor from empty                                             *
//                                                                           *
//---------------------------------------------------------------------------*

C_galgas_bdd C_galgas_bdd::
constructor_empty (C_Lexique & /* _inLexique */
                   COMMA_UNUSED_LOCATION_ARGS) {
  C_galgas_bdd bdd ;
  bdd.mBuilt = true ;
  bdd.mBDD.setToFalse () ;
  return bdd ;
}

//---------------------------------------------------------------------------*

GGS_bool C_galgas_bdd::
operator == (const C_galgas_bdd & inOperand) const {
  return GGS_bool (_isBuilt () && inOperand._isBuilt (),
                    mBDD.getIntegerValue () == inOperand.mBDD.getIntegerValue ()) ;
}

//---------------------------------------------------------------------------*

GGS_bool C_galgas_bdd::
operator != (const C_galgas_bdd & inOperand) const {
  return GGS_bool (_isBuilt () && inOperand._isBuilt (),
                    mBDD.getIntegerValue () != inOperand.mBDD.getIntegerValue ()) ;
}

//---------------------------------------------------------------------------*

GGS_string C_galgas_bdd::
reader_description (C_Lexique & /* _inLexique */
                    COMMA_UNUSED_LOCATION_ARGS,
                    const sint32 /* inIndentation */) const {
  C_String s ;
  s << "<C_galgas_bdd " ;
  if (_isBuilt ()) {
    s << "built" ;
  }else{
    s << "not built" ;
  }
  s << ">" ;
  return GGS_string (true, s) ;
}

//---------------------------------------------------------------------------*

void C_galgas_bdd::_drop_operation (void) {
  mBuilt = false ;
}

//---------------------------------------------------------------------------*

void C_galgas_bdd::methode_init (C_Lexique & /* inLexique */,
                                 AC_galgas_io & /* ioGalgasOutputStream */) {
  mBuilt = true ;
}

//---------------------------------------------------------------------------*
