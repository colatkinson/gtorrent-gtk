#include "Gtk.hpp"
#include "GtkMainWindow.hpp"

/**
* Sets up the main window.
*/
GuiGtk::GuiGtk(int argc, char **argv)
{
	Gtk::Main kit(argc, argv);

	GtkMainWindow mainWindow;
	kit.run(mainWindow);
}
