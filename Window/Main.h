#ifndef __ENSUIV_MAIN_WINDOW__
#define __ENSUIV_MAIN_WINDOW__

void main_window (GtkApplication *app)
    {
       GtkWidget *main;

       main = gtk_application_window_new (app);
       gtk_window_set_title (GTK_WINDOW (main), "Suivi d\'enseignement");
       gtk_window_set_default_size (GTK_WINDOW (main), 1000, 500);
       gtk_widget_show_all (main);
     }

#endif