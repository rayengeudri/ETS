#include "GESTIOND.h"
#include<stdio.h>
#include<stdlib.h>
#include<gtk/gtk.h>

int ajouter(GESTIOND g , char *filename )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %s %s %d %d %d\n",g.CIN,g.ID_ETS,g.QUANTITE,g.NBR_DON,g.TYPE_SANG,g.DATE_DON.jours,g.DATE_DON.mois,g.DATE_DON.anne);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(char CIN[], GESTIOND nouv, char * filename)
{

GESTIOND g;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("GESTIOND.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %s %s %d %d %d\n",g.CIN,g.ID_ETS,g.QUANTITE,g.NBR_DON,g.TYPE_SANG,&g.DATE_DON.jours,&g.DATE_DON.mois,&g.DATE_DON.anne)!=EOF)
{
if(g.CIN!=CIN)
        fprintf(f2,"%s %s %s %s %s %d %d %d\n",g.CIN,g.ID_ETS,g.QUANTITE,g.NBR_DON,g.TYPE_SANG,g.DATE_DON.jours,g.DATE_DON.mois,g.DATE_DON.anne);
else

  fprintf(f2,"%s %s %s %s %s %d %d %d\n",nouv.CIN,nouv.ID_ETS,nouv.QUANTITE,nouv.NBR_DON,nouv.TYPE_SANG,nouv.DATE_DON.jours,nouv.DATE_DON.mois,nouv.DATE_DON.anne);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("GESTIOND.txt", filename);
        return 1;
    }
  
}

	int supprimer(char CIN[], char * filename)
{
	int tr=0;
	GESTIOND g;
    	FILE * f=fopen(filename, "r");
    	FILE * f2=fopen("GESTIOND.txt", "w");
    	if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %s %s %d %d %d\n",g.CIN,g.ID_ETS,g.QUANTITE,g.NBR_DON,g.TYPE_SANG,&g.DATE_DON.jours,&g.DATE_DON.mois,&g.DATE_DON.anne)!=EOF)
{
if(g.CIN!=CIN)
        fprintf(f2,"%s %s %s %s %s %d %d %d\n",g.CIN,g.ID_ETS,g.QUANTITE,g.NBR_DON,g.TYPE_SANG,g.DATE_DON.jours,g.DATE_DON.mois,g.DATE_DON.anne);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("GESTIOND.txt", filename);
        return 1;
    }
}


GESTIOND chercher(char CIN[], char * filename)
{
GESTIOND g; 
int tr;
    FILE * f=fopen(filename, "r");

 if(f!=NULL )
    {
 while( fscanf(f,"%s %s %s %s %s %d %d %d\n",g.CIN,g.ID_ETS,g.QUANTITE,g.NBR_DON,g.TYPE_SANG,&g.DATE_DON.jours,&g.DATE_DON.mois,&g.DATE_DON.anne) !=EOF && tr==0)
{if(CIN==g.CIN)
tr=1;
}
fclose(f);
}
if(tr==0)
{g.CIN==-1;}
else
{return g;}
}
