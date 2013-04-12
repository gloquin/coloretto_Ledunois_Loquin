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

/* create and return a card */
CARD createCard(int colour);

/* create the stock and return an array of 77 cards */
CARD* createStock();

/* mix the stock and return the pile */
PILE mixCards(CARD *stock);

/* return a card and delete it from the pile, this function is using pilepop */
CARD pickCard();

/* creation of the line and return an array of pointers (4 à 5) */
LISTE* createLine(int nbPlayers);

/* Put a card on a line. this function add the card to the struct line */
void putACard();

/* return the last player who picked a line */
PLAYER pickALine();


/* return the first player */
PLAYER firstPlayer();
 
#endif
