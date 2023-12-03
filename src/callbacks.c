#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include"GESTIOND.h"
#include"GESTIOND.c"
#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_ajouter_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{

	 GESTIOND g;

	GtkWidget *input1, *input2,*input3,*input4;
	GtkWidget *fenetre_ajouter;
	GtkWidget *comboboxentry1;
	GtkWidget *spinbutton1;
	GtkWidget *spinbutton2;
	GtkWidget *spinbutton3;

	fenetre_ajouter=lookup_widget(objet,"fenetre_ajouter");

	input1=lookup_widget(objet,"CIN");
	input2=lookup_widget(objet,"ID_ETS");
	input3=lookup_widget(objet,"QUANTITE");
	input4=lookup_widget(objet,"NBR_DON");

	
	


	strcpy(g.CIN,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(g.ID_ETS,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(g.NBR_DON,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(g.TYPE_SANG,gtk_entry_get_text(GTK_ENTRY(input4)));

	g.DATE_DON.jours=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(spinbutton1));
	g.DATE_DON.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(spinbutton2));
	g.DATE_DON.anne=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(spinbutton3));


	comboboxentry1=lookup_widget(objet,"comboboxentry1");

	g_print("Jours: %d, Mois: %d, Année: %d\n", g.DATE_DON.jours, g.DATE_DON.mois, g.DATE_DON.anne);


	if (input1 == NULL || input2 == NULL || input3 == NULL || input4 == NULL) {
   	 g_print("Erreur : Un des widgets est nul.\n");
    	return;

}


	ajouter(g,"GESTIOND.txt");

}

void
on_supprimer_clicked                   (GtkButton       *objet,
                                        gpointer         user_data)
{	GESTIOND g;
	char CIN;
	int S;
	GtkWidget *fenetre_supprimer,*supprimer;
	GtkWidget *treeview;

	fenetre_supprimer=lookup_widget(objet,"supprimer");
	fenetre_supprimer=lookup_widget(objet,"CIN_supp");

	strcpy(g.CIN,gtk_entry_get_text(GTK_ENTRY(CIN)));


	S=fenetre_supprimer(CIN);
	if(S==1)
	{
	printf("SUPPRESSION Réussite!");
	}

	}





void
on_modifier_clicked                    (GtkButton       *objet,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajouter, *fenetre_afficher;
	fenetre_ajouter=lookup_widget(objet,"fenetre_ajouter");
	gtk_widget_destroy(fenetre_ajouter);
	fenetre_afficher=create_fenetre_afficher();
	gtk_widget_show (fenetre_afficher);

}






void
on_afficher_clicked                    (GtkButton       *objet,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajouter;
	
	GtkWidget *treeview1;
	
	fenetre_ajouter=lookup_widget(objet,"fenetre_ajouter");
	gtk_widget_destroy(fenetre_ajouter);
	
	fenetre_ajouter=create_fenetre_ajouter();
	
	gtk_widget_show(fenetre_ajouter);
	
	treeview1=lookup_widget(fenetre_ajouter,"treeview1");
	
	
}



void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar* CIN;
	gchar* ID_ETS;
	gchar* NBR_DON;
	gchar* TYPE_SANG;
	gchar* QUANTITE;
	gchar* jours;
	gchar* mois;
	gchar* anne;
	
	GESTIOND g ;
	
}


void
on_buttonajoutergestionfiche1_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifiergestionfiche1_clicked (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttongestionfiche1homme_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttongestionfiche1femme_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_treeviewgestionfiche2_row_activated (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_buttonsupperimergestionfiche2_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttongestionfiche2NON_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttongestionfiche2OUI_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_buttonretourgestionfiche2_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeviewgestionfiche3_row_activated (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_buttonretourgestionfiche3_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonaffichergestionfihe3_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ButtonG_F_D_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonG_D_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonback1_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonG_RDV_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonG_D_F_D_S_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonG_D_E_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeviewUti_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_Bach_main_Uti_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_goToDeleteUti_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_GoToEditUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_goToAddUti_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_goToEditUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_HoleGesUti_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttonResponsable_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_Infermier_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonMedecin_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonF_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_gotoAddUti_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_GoToConsultUti_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttonH_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonInfermier_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_SaveEditUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_back_modif_uti_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeviewAffich_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_goToBackUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_goToShowUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_goToBackPoucentage__clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}

