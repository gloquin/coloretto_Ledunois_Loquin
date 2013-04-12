#ifndef _LISTEPRIMITIVES_
#define _LISTEPRIMITIVES_

#include "ElementPrimitives.h"		/* le TDA Liste utilise le TDA ELEMENT */

#include "ListeStructureChoisie.h"    		/* inclusion du fichier où est indiquée la structure de donnée retenue pour réaliser le TDA LISTE */


/************************************/
/* Déclaration des primitives du TDA LISTE*/



/* renvoie 1 si la liste est vide et 0 sinon */
int ListeVide (LISTE);
	
/* retourne l'élément à la position p dans la liste, sans modifier la liste
	retourne l'élément vide si la liste est vide ou si la position est mauvaise */
ELEMENT ListeAcceder(POSITION,LISTE);

/* retourne la dernier position de la liste si la liste est non vide */
POSITION ListeDernier(LISTE L);
	
/* retourne la première position de la liste si la liste est non vide */
POSITION ListePremier(LISTE);

/* retourne la position qui suit la position paramètre dans la liste si la liste est non vide
ou ListeSentinelle */
POSITION ListeSuivant(POSITION,LISTE);

/* modifie la liste en insérant l'élément à la position ;
retourne faux si la liste est pleine ou si la position est mauvaise */
int ListeInserer (ELEMENT,POSITION,LISTE *);

/*  supprime de la liste l'élément dont la position est passée en paramètre ;
retourne faux si la liste est vide */
int ListeSupprimer (POSITION, LISTE *);

/* crée et retourne une liste vide en lui allouant de la mémoire dynamique*/
LISTE ListeCreer(void);

/* libére la mémoire dynamique allouée pour la liste */	
void ListeDetruire(LISTE*);

/* accéder à la position précédente */
POSITION ListePrecedent (POSITION, LISTE);

/*afficher les éléments de la liste */
void ListeAfficher(LISTE);

/* rechercher un élément dans la liste */
POSITION ListeRechercher(ELEMENT, LISTE);

	
#endif
