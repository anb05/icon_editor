#include "icon_editor/iconeditor.h"

#include <./app/application.h>

int main(int argc, char *argv[])
{
	i_e::Application a(argc, argv);
	i_e::IconEditor w;
	w.show();
	return a.exec();
}
