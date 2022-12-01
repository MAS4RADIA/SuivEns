#include <gtk/gtk.h>
#include "./Window/Main.h"

int main (void)
    {
       int app_status;
       GtkApplication *EnSuiv;

       EnSuiv = gtk_application_new ("ensuiv.eni.app", G_APPLICATION_FLAGS_NONE);
       g_signal_connect (EnSuiv, "activate", G_CALLBACK (main_window), NULL);
       app_status = g_application_run (G_APPLICATION (EnSuiv), 0, NULL);

       g_object_unref (EnSuiv);
       return (app_status);
     }