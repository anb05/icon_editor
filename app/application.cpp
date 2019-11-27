#include "application.h"

namespace i_e {

Application::Application(int& argc, char** argv)
	: QApplication(argc, argv)
{  }

	Application::~Application() = default;

} // namespace i_e
