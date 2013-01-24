#include <Wt/WApplication>
#include <Wt/WHBoxLayout>
#include "pages/mainpage.h"

using namespace Wt;

WApplication *createApplication(const WEnvironment& env)
{
	WApplication* app = new WApplication(env);

// 	app->setCssTheme("polished");
// 
// 	// load text bundles (for the tr() function)
// 	app->messageResourceBundle().use(app->appRoot() + "text");
// 	app->messageResourceBundle().use(app->appRoot() + "charts");
// 	app->messageResourceBundle().use(app->appRoot() + "treeview");

	WHBoxLayout *layout = new WHBoxLayout(app->root());
	layout->setContentsMargins(0, 0, 0, 0);
	layout->addWidget(new MainPage(app));

	app->setTitle("Cmst");

// 	app->addMetaHeader("viewport", "width=700, height=1200");

	app->useStyleSheet("css/main.css");

	return app;
}

int main(int argc, char **argv)
{
	return WRun(argc, argv, &createApplication);
}