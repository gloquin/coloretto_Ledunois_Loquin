
/* définition des primitives du type concret ELEMENT caractère */

#include <stdio.h>
#include "ElementPrimitives.h"

/* Lit un élément */
void ElementLire(ELEMENT * elt)	{
	char c;
	scanf("%c",&c);
	fflush(stdin);
	*elt = c;
}

/* affiche un élément */
void ElementAfficher(ELEMENT elt)	{
	printf(" %c ",elt);
}

/* affecte le deuxieme argument dans le premier
qui est donc modifié et passé par adresse */
ELEMENT ElementAffecter(ELEMENT * e1, ELEMENT e2)   {
	return  *e1 = e2  ;
}

/* retourne 1 si les deux arguments sont identiques */
int ElementIdentique(ELEMENT e1, ELEMENT e2)  {
	return 	e1 == e2 ;
}

/* 	compare 2 entiers e1 et e2 passés en paramètres
	retourne un entier > 0  si e1 > e2 
	retourne 0 si e1 = e2
	retourne un entier < 0 si e1 < e2 */
int ElementComparer(ELEMENT e1, ELEMENT e2)  {
  return(e1 - e2) ;
}

/* crée un élément vide   */
ELEMENT ElementCreer () {
	return ELEMENT_VIDE ;
}

/* détruit un élément */
void ElementDetruire (ELEMENT e) {
}
