#ifndef _LISTESIMPLECHAINAGE_
#define _LISTESIMPLECHAINAGE_


#include "ElementPrimitives.h"


/************************************/
/* Déclaration de la structure de données adoptée
pour la réalisation du type concret de données LISTE */

typedef struct cell{
    ELEMENT element;
    struct cell *precedent;
    struct cell *suivant;
	} cellule;

typedef cellule *LISTE;
	
typedef LISTE POSITION; 

#define LISTE_VIDE NULL



#endif