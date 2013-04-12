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

CARD createCard(int colour); //return a card
CARD* createStock(); //return an array of 77 cards

PILE mixCards(); //return a pile
CARD pickCard(); //return a card and delete it from the pile (PilePop)

LISTE* createLine(int nbPlayers); //return an array of pointers (4 à 5)
void putACard(); //put a card on a line
PLAYER pickALine(); // return the last player who picked a line

PLAYER firstPlayer();//return id of the first player

#endif
