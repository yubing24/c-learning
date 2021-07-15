#include <gtk/gtk.h>
#include "GuiInit.h"

int main (int argc, char *argv [] ) {
	GtkWidget *mainwd;
	GtkWidget *pbutn;
	gtk_init(&argc, &argv);
	mainwd = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gui_init(mainwd);
	return 0;
}
