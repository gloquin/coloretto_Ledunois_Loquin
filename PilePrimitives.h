#ifndef H_PILE
#define H_PILE

#include "Pile.h"

/* cr�e une pile */
PILE PileCreer ();

/* indique si la pile est vide */
int PileVide (PILE p);

/* ajoute une element au sommet de la pile */
void PileEmpiler (PILE *p, ELEMENT element);

/* positionne le pointeur au sommet de la pile */		
void PileSommet (PILE *p);

/* renvoie la element de l'�l�ment au sommet de la pile, mais ne modifie pas la pile */
ELEMENT PileValeurSommet (PILE *p);

/* renvoie l'�l�ment au sommet de la pile et le supprime */
ELEMENT PilePop (PILE *p);

/* supprime l'�l�ment au sommet de la pile */
void PileDepiler(PILE *p);

/* d�place le pointeur sur le "pr�c�dent" de l'�l�ment point� */
int PilePrecedent (PILE *p);

/* d�truit tous les �l�ments de la pile */
void PileDetruire (PILE *p);

/* Affiche la pile */
void PileAfficher (PILE *p);

#endif /* not H_PILE */