//---------------------------------------------------------------------------*
//                                                                           *
//  GGS_extern_bdd : this class implements the GALGAS BDD extern type        *
//                                                                           *
//  Copyright (C) 2002, ..., 2008 Pierre Molinaro.                           *
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

#include "semantiqueBDD.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                     'C_galgas_bdd' class                                  *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_extern_bdd::GGS_extern_bdd (void) :
mBDD (),
mBuilt (false) {
}

//---------------------------------------------------------------------------*

GGS_extern_bdd::~GGS_extern_bdd (void) {
  mBuilt = false ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Constructor from empty                                             *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_extern_bdd GGS_extern_bdd::
constructor_empty (C_Compiler & /* _inLexique */
                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extern_bdd bdd ;
  bdd.mBuilt = true ;
  bdd.mBDD.setToFalse () ;
  return bdd ;
}

//---------------------------------------------------------------------------*

GGS_bool GGS_extern_bdd::
operator_isEqual (const GGS_extern_bdd & inOperand) const {
  return GGS_bool (isBuilt () && inOperand.isBuilt (),
                    mBDD.getIntegerValue () == inOperand.mBDD.getIntegerValue ()) ;
}

//---------------------------------------------------------------------------*

GGS_bool GGS_extern_bdd::
operator_isNotEqual (const GGS_extern_bdd & inOperand) const {
  return GGS_bool (isBuilt () && inOperand.isBuilt (),
                    mBDD.getIntegerValue () != inOperand.mBDD.getIntegerValue ()) ;
}

//---------------------------------------------------------------------------*

GGS_string GGS_extern_bdd::
reader_description (C_Compiler & /* _inLexique */
                    COMMA_UNUSED_LOCATION_ARGS,
                    const sint32 /* inIndentation */) const {
  C_String s ;
  s << "<GGS_extern_bdd " ;
  if (isBuilt ()) {
    s << "built" ;
  }else{
    s << "not built" ;
  }
  s << ">" ;
  return GGS_string (true, s) ;
}

//---------------------------------------------------------------------------*

void GGS_extern_bdd::drop (void) {
  mBuilt = false ;
}

//---------------------------------------------------------------------------*

bool GGS_extern_bdd::isBuilt (void) const {
  return mBuilt ;
}

//---------------------------------------------------------------------------*
