#ifndef GESTIOND_H_INCLUDED
#define GESTIOND_H_INCLUDED

#include<gtk/gtk.h>

typedef struct
{
int jours;
int mois;
int anne;
}DATE;
typedef struct
{
char CIN[50];
char ID_ETS[50] ;
DATE DATE_DON;
char QUANTITE[50];
char NBR_DON[50];
char TYPE_SANG [50];
}GESTIOND;

int ajouter(GESTIOND g, char *filename );
int modifier(char CIN[], GESTIOND nouv, char * filename);
int supprimer(char CIN[], char * filename);
GESTIOND chercher(char CIN[], char * filename);

#endif // GESTIOND_H_INCLUDED
