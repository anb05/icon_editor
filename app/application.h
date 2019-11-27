#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

namespace i_e {

class Application : public QApplication
{
public:
	explicit Application(int& argc, char** argv);
	~Application() override;

	explicit Application(const Application& )    = delete ;
	explicit Application(Application&& )         = delete ;

	Application& operator= (const Application& ) = delete ;
	Application& operator= (Application&& )      = delete ;
};

} // namespace i_e

#endif // APPLICATION_H
