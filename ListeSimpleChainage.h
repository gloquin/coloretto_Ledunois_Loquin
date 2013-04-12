#ifndef _LISTESIMPLECHAINAGE_
#define _LISTESIMPLECHAINAGE_


#include "ElementPrimitives.h"


/************************************/
/* D�claration de la structure de donn�es adopt�e
pour la r�alisation du type concret de donn�es LISTE */

typedef struct cell{
    ELEMENT element;
    struct cell *precedent;
    struct cell *suivant;
	} cellule;

typedef cellule *LISTE;
	
typedef LISTE POSITION; 

#define LISTE_VIDE NULL



#endif