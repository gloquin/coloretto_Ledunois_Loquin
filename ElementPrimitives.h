#ifndef _ELEMENTPRIMITIVES_
#define _ELEMENTPRIMITIVES_

/* inclusion de la déclaration du type concret ELEMENT */
#include "ElementStructureChoisie.h"


/* Lit un élément */
void ElementLire(ELEMENT *);

/* affiche un élément */
void ElementAfficher(ELEMENT);

/* affecte le deuxieme argument dans le premier
qui est donc modifié et passé par adresse */
ELEMENT ElementAffecter(ELEMENT*, ELEMENT);

/* retourne 1 si les deux arguments sont identiques */
int ElementIdentique(ELEMENT, ELEMENT);

/* 	compare 2 entiers e1 et e2 passés en paramètres
	retourne un entier > 0  si e1 > e2 
	retourne 0 si e1 = e2
	retourne un entier < 0 si e1 < e2 */
int ElementComparer(ELEMENT, ELEMENT);



/* Primitives inutiles pour le stockage direct, Mais obligatoire en
   stockage indirect */

/* crée un élément vide   */
ELEMENT ElementCreer() ;

/* détruit un élément */
void ElementDetruire(ELEMENT) ;

#endif