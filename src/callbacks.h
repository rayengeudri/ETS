#include <gtk/gtk.h>


void
on_ajouter_clicked                     (GtkButton       *objet,
                                        gpointer         user_data);


/*
void
on_supprimer_clicked                   (GtkButton       *objet,
                                        gpointer         user_data);
*/

void
on_afficher_clicked                    (GtkButton       *objet,
                                        gpointer         user_data);
/*
void
on_modifier_clicked                    (GtkButton       *modifier,
                                        gpointer         user_data);*/

void
on_afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonajoutergestionfiche1_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonModifiergestionfiche1_clicked (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobuttongestionfiche1homme_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttongestionfiche1femme_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_treeviewgestionfiche2_row_activated (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonsupperimergestionfiche2_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobuttongestionfiche2NON_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttongestionfiche2OUI_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonretourgestionfiche2_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeviewgestionfiche3_row_activated (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonretourgestionfiche3_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonaffichergestionfihe3_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_ButtonG_F_D_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonG_D_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonback1_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonG_RDV_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonG_D_F_D_S_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonG_D_E_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeviewUti_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_Bach_main_Uti_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_goToDeleteUti_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_GoToEditUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_goToAddUti_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_goToEditUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_HoleGesUti_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobuttonResponsable_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Infermier_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonMedecin_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonF_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_gotoAddUti_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_GoToConsultUti_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobuttonH_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonInfermier_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_SaveEditUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_back_modif_uti_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeviewAffich_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_goToBackUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_goToShowUti_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_goToBackPoucentage__clicked         (GtkButton       *button,
                                        gpointer         user_data);
