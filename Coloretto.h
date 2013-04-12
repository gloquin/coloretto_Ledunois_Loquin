//
//  coloretto.h
//  Projet_Coloretto
//
//  Created by Simon LEDUNOIS on 10/04/13.
//  Copyright (c) 2013 LEDUNOIS  Simon - LOQUIN Gweltaz. All rights reserved.
//

#ifndef Projet_Coloretto_coloretto_h
#define Projet_Coloretto_coloretto_h

#include "ElementPrimitives.h"
#include "ListePrimitives.h"
#include "pile.h"

typedef struct player{
    
    int id; //allows us to identify which player is it and when he have to play
    int *hand;//hand of the player
    char name;//name of the player
    
}PLAYER;


typedef struct card{
    
    ELEMENT colour;//colour of the card
    ELEMENT type;//type of the card
    
}CARD;

#endif
