#ifndef _LISTEPRIMITIVES_
#define _LISTEPRIMITIVES_

#include "ElementPrimitives.h"		/* le TDA Liste utilise le TDA ELEMENT */

#include "ListeStructureChoisie.h"    		/* inclusion du fichier o� est indiqu�e la structure de donn�e retenue pour r�aliser le TDA LISTE */


/************************************/
/* D�claration des primitives du TDA LISTE*/



/* renvoie 1 si la liste est vide et 0 sinon */
int ListeVide (LISTE);
	
/* retourne l'�l�ment � la position p dans la liste, sans modifier la liste
	retourne l'�l�ment vide si la liste est vide ou si la position est mauvaise */
ELEMENT ListeAcceder(POSITION,LISTE);

/* retourne la dernier position de la liste si la liste est non vide */
POSITION ListeDernier(LISTE L);
	
/* retourne la premi�re position de la liste si la liste est non vide */
POSITION ListePremier(LISTE);

/* retourne la position qui suit la position param�tre dans la liste si la liste est non vide
ou ListeSentinelle */
POSITION ListeSuivant(POSITION,LISTE);

/* modifie la liste en ins�rant l'�l�ment � la position ;
retourne faux si la liste est pleine ou si la position est mauvaise */
int ListeInserer (ELEMENT,POSITION,LISTE *);

/*  supprime de la liste l'�l�ment dont la position est pass�e en param�tre ;
retourne faux si la liste est vide */
int ListeSupprimer (POSITION, LISTE *);

/* cr�e et retourne une liste vide en lui allouant de la m�moire dynamique*/
LISTE ListeCreer(void);

/* lib�re la m�moire dynamique allou�e pour la liste */	
void ListeDetruire(LISTE*);

/* acc�der � la position pr�c�dente */
POSITION ListePrecedent (POSITION, LISTE);

/*afficher les �l�ments de la liste */
void ListeAfficher(LISTE);

/* rechercher un �l�ment dans la liste */
POSITION ListeRechercher(ELEMENT, LISTE);

	
#endif
