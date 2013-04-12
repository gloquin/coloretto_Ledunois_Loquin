//
//  ColorettoPrimitives.h
//  Projet_Coloretto
//
//  Created by Simon LEDUNOIS on 10/04/13.
//  Copyright (c) 2013 LEDUNOIS  Simon - LOQUIN Gweltaz. All rights reserved.
//

#ifndef Projet_Coloretto_ColorettoPrimitives_h
#define Projet_Coloretto_ColorettoPrimitives_h

#include "Coloretto.h"

createCard(int colour); //return a card
createStock(); //return an array of 77 cards

mixCards(); //return a pile
pickCard(); //return a card and delete it from the pile (PilePop)

createLine(int nbPlayers); //return an array of pointers (4 à 5)
putACard();
pickALine(); // return the last player who picked a line

firstPlayer();//return id of the first player

#endif
