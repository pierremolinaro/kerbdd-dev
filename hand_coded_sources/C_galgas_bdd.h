//---------------------------------------------------------------------------*
//                                                                           *
//  C_galgas_sint32 : this class implements the GALGAS BDD extern type       *
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

#ifndef GALGAS_BDD_CLASS_DEFINED
#define GALGAS_BDD_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "bdd/C_BDD.h"
#include "galgas/GGS_string.h"

//---------------------------------------------------------------------------*

class AC_OutputStream ;
class C_Compiler ;
class AC_galgas_io ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     'C_galgas_bdd' class                                  *
//                                                                           *
//---------------------------------------------------------------------------*

class C_galgas_bdd {
//--- Default constructor and virtual destructor
  public : C_galgas_bdd (void) ;
  public : virtual ~C_galgas_bdd (void) ;

//--- 'empty' constructor
  public : static C_galgas_bdd constructor_empty (C_Compiler & _inLexique
                                                  COMMA_LOCATION_ARGS) ;

  public : GGS_string reader_description (C_Compiler & _inLexique
                                          COMMA_LOCATION_ARGS,
                                          const sint32 inIndentation = 0) const ;

//--- Comparison
  public : GGS_bool _operator_isEqual (const C_galgas_bdd & inOperand) const ;
  public : GGS_bool _operator_isNotEqual (const C_galgas_bdd & inOperand) const ;

//--- Handle 'drop' instruction
  public : void _drop_operation (void) ;

//--- Method '_isBuilt'
  public : inline bool _isBuilt (void) const { return mBuilt ; }

//--- Handle 'init' method
  public : void methode_init (C_Compiler & /* inLexique */,
                              AC_galgas_io & /* ioGalgasOutputStream */) ;

//--- Support for method call handling in GALGAS
  public : inline const C_galgas_bdd * operator () (UNUSED_LOCATION_ARGS) const { return this ; }
  public : inline C_galgas_bdd * operator () (UNUSED_LOCATION_ARGS) { return this ; }

//----------- Data members ----------------------------------
  public : C_BDD mBDD ;
  private : bool mBuilt ;
} ;

//---------------------------------------------------------------------------*

#endif
