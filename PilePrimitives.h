#ifndef H_PILE
#define H_PILE

#include "Pile.h"

/* crée une pile */
PILE PileCreer ();

/* indique si la pile est vide */
int PileVide (PILE p);

/* ajoute une element au sommet de la pile */
void PileEmpiler (PILE *p, ELEMENT element);

/* positionne le pointeur au sommet de la pile */		
void PileSommet (PILE *p);

/* renvoie la element de l'élément au sommet de la pile, mais ne modifie pas la pile */
ELEMENT PileValeurSommet (PILE *p);

/* renvoie l'élément au sommet de la pile et le supprime */
ELEMENT PilePop (PILE *p);

/* supprime l'élément au sommet de la pile */
void PileDepiler(PILE *p);

/* déplace le pointeur sur le "précédent" de l'élément pointé */
int PilePrecedent (PILE *p);

/* détruit tous les éléments de la pile */
void PileDetruire (PILE *p);

/* Affiche la pile */
void PileAfficher (PILE *p);

#endif /* not H_PILE */