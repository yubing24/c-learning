#include <gtk/gtk.h>
#include <stdbool.h>

void add_print_button(GtkWidget *widget, gpointer data) {
	g_print("It works!\n");
}

_Bool gui_init(GtkWidget *window) {
	// Create a Window Object
	//GtkWidget *window;
	// Corresponding Java Syntax:
	// JFrame window;
	
	// Initialize this window
	//window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	// Corresponding Java Syntax:
	// window = new Window();
	
	GtkWidget *menubar;
	GtkWidget *file_menu;
	GtkWidget *file_item;
	
	menubar = gtk_menu_bar_new ();
	file_menu = gtk_menu_new ();
	gtk_menu_set_title(file_menu, "File");
	//file_item = gtk_menu_item_new_with_label ("File");
	
	gtk_container_add (GTK_CONTAINER (window), menubar);
	gtk_widget_show (menubar);
	//gtk_widget_show (file_item);
	//gtk_menu_item_set_submenu (GTK_MENU_ITEM (file_item), file_menu);
	//gtk_menu_bar_attach(GTK_MENU_BAR (menubar), file_menu);
	// Corresponding Java Syntax:
	// JMenuBar bar;
	// bar = new JMenuBar();
	
	// Set the title of this Window
	gtk_window_set_title( GTK_WINDOW (window), "DanceInsight");
	// Corresponding Java Syntax:
	// window.setTitle("DanceInsight");
	
	// Set the default close action
	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
	// Corresponding Java Syntax:
	// window.setDefaultCloseOperation(JFRAME.EXIT_ON_CLOSE);
	
	// Show this window on screen
	gtk_widget_show(window);
	// Corresponding Java Syntax:
	// window.setVisible(true);
	
	gtk_main();
	/*GtkWidget *menubar;
	
	gtk_init(&argc, &argv);
	
	mainwd = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	menubar = gtk_menu_bar_new();
	
	GtkWidget *menu_file;
	GtkWidget *item_file;
	GtkWidget *item_open;
	GtkWidget *item_save;
	GtkWidget *item_exit;
	
	menu_file = gtk_menu_new ();
	item_file = gtk_menu_item_new_with_label ("File");
	item_open = gtk_menu_item_new_with_label ("Open");
	item_save = gtk_menu_item_new_with_label ("Save");
	item_exit = gtk_menu_item_new_with_label ("Exit");
	
	gtk_menu_shell_append (GTK_MENU_SHELL (menu_file), item_open);
	gtk_menu_shell_append (GTK_MENU_SHELL (menu_file), item_save);
	gtk_menu_shell_append (GTK_MENU_SHELL (menu_file), item_exit);
	
	gtk_widget_show (item_file);
	gtk_widget_show (item_open);
	gtk_widget_show (item_save);
	gtk_widget_show (item_exit);
	
	gtk_menu_item_set_submenu (GTK_MENU_ITEM (item_file), menu_file);
	gtk_menu_shell_append (GTK_MENU_BAR (menubar), item_file);
	
	gtk_container_add(GTK_CONTAINER(mainwd), menubar);
	
	gtk_widget_show(mainwd);
	
	*/
	return true;
}

