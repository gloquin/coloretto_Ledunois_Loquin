
#include "ListePrimitives.h"

#include <stdlib.h>
#include <stdio.h>


/* Implantation des primitives du TAD LISTE*/

/* crée et retourne une liste vide en lui allouant de la mémoire dynamique*/
LISTE ListeCreer(void)	{
			/*une liste vide est une liste qui ne contient que sa cellule d'en-tete*/
	return LISTE_VIDE;
}
	
/* renvoie 1 si la liste est vide et 0 sinon */
int ListeVide(LISTE L) {			
	return L==LISTE_VIDE;
}
	
/* retourne l'élément à la position p dans la liste, sans modifier la liste
	retourne l'élément vide si la liste est vide ou si la position est mauvaise */
ELEMENT ListeAcceder(POSITION p, LISTE L) {      
	if (! ListeVide(L))
		return  p->element;
	else return ELEMENT_VIDE ;
}

/* retourne la dernier position de la liste si la liste est non vide */
POSITION ListeDernier(LISTE L) {	
	POSITION p = L  ;
	if (! ListeVide(L)) {
		while (p->suivant != NULL ) 
			p = p -> suivant;
	}
	return p ;
}
	
/* retourne la première position de la liste si la liste est non vide */
POSITION ListePremier(LISTE L) {              
	return L;
}

/* retourne la position qui suit la position donnée en paramètre dans la liste si la liste est non vide */
POSITION ListeSuivant(POSITION p,LISTE L){	 
  if( p->suivant == NULL )
    return( NULL );
  return p -> suivant;
}

/* modifie la liste en insérant une nouvelle cellule apres la cellule à la position p 
retourne 0 si position invalide ou problème mémoire */
int ListeInserer (ELEMENT x, POSITION p, LISTE *L){
		
	LISTE ptcellule = ListeCreer();
	// malloc renvoie un void * donc un pointeur
	ptcellule = (LISTE) malloc (sizeof (LISTE)); // on définit un pointeur sur la nouvelle à ajouter
	
	if (!ListeVide(ptcellule)){
		ElementAffecter(&ptcellule->element, x);
		if (!ListeVide(p)) {
			if (!ListeVide(*L)){
				//insertion au milieu ou à la fin
				ptcellule->suivant = p->suivant;
				p->suivant = ptcellule;
			}
			else {
				// la position n'est pas vide mais la liste est vide : 
				// la position est invalide
				return 0;
			}
		} else {
			// si la position est vide : insertion en début de liste
			if (ListeVide(*L)) {
				// c'est l'insertion du premier élément de la liste
				*L = ptcellule;
				ptcellule->suivant = NULL;

			} else {
				// c'est l'insertion du premier élément de la liste
				// on définit un pointeur temporaire sur L
				LISTE temp = *L;
				// on fait pointer L vers la nouvelle cellule
				*L = ptcellule;
				// le suivant de la nouvelle cellule pointe sur temp
				(*L)->suivant = temp;

			}
		}
		return 1;
	}
    else	{
		// probleme allocation : pointe sur un emplacement occupé
		return 0;	
	}
}

/*  supprime de la liste l'élément dont la position est passée en paramètre ;
retourne 0 si position invalide */
int ListeSupprimer (POSITION p, LISTE *L){      
	LISTE  precedent ;
	
	if (! ListeVide(*L)) {
		precedent = ListePremier(*L);
		if (precedent == p) {
			// premier élément pointé et il faut le supprimer
			*L = p->suivant;
			p->suivant = NULL;
			p = NULL;
			free(p);
		} else {
			while (! ListeVide(precedent) && precedent->suivant != p) {
				precedent = precedent->suivant;
			}
			// precedent pointe sur la cellule précédent p
			if (! ListeVide(precedent)) {
				precedent->suivant = p->suivant;
				p->suivant = NULL;
				p = NULL;
				free(p);
			}
			else
				// p n'est pas une position valide
				return 0;
		}
		return 1;
	}
	else return 0 ;
	
	
		
	
}



/* libére la mémoire dynamique allouée pour la liste */	
void ListeDetruire(LISTE *L)	{              
	while (!ListeVide(*L)) {
		ListeSupprimer(ListePremier(*L), L);
	}
}


/* accéder à la position précédente */
POSITION ListePrecedent (POSITION p, LISTE l) {
	POSITION temp = l;
	if (ListeVide(p) || ListeVide(l) || (p==l))
		return NULL;
	else {
		while (temp->suivant != NULL && temp->suivant != p) {
			temp = temp->suivant;
		}
		return temp;
	}

}

/*afficher les éléments de la liste */
void ListeAfficher(LISTE l) {
	POSITION temp = l;
	while (temp  != NULL) {
		ElementAfficher(temp->element);
		temp = temp->suivant;
	}

}

/* rechercher un élément dans la liste */
POSITION ListeRechercher(ELEMENT e, LISTE l) {
	POSITION temp = l;
	while (temp != NULL && temp->element !=e) {
		temp = temp->suivant;
	}
	// si trouvé = renvoie temp
	//sinon on est arrivé au bout et temp vaut null
	// --> dans tous les cas, on renvoie temp
	return temp;
}

