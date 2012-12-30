#include <iostream>

#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>
#include <Wt/Ext/Container>
#include <Wt/Ext/Panel>
#include <Wt/WFitLayout>
#include <Wt/WBorderLayout>


using namespace Wt;

/*
 * A simple hello world application class which demonstrates how to react
 * to events, read input, and give feed-back.
 */
class Cmst : public WApplication
{
public:
  Cmst(const WEnvironment& env);

private:
  WLineEdit *nameEdit_;
  WText *greeting_;

  void greet();
};

/*
 * The env argument contains information about the new session, and
 * the initial request. It must be passed to the WApplication
 * constructor so it is typically also an argument for your custom
 * application constructor.
*/
Cmst::Cmst(const WEnvironment& env)
  : WApplication(env)
{
  setTitle("Templates");                               // application title

  //Wt::Ext::Container *rootContainer = new Wt::Ext::Container(root());
   Wt::Ext::Panel *rootPanel = new Wt::Ext::Panel();
  Wt::WContainerWidget *w = new Wt::WContainerWidget(root());
  Wt::WBorderLayout *layout = new Wt::WBorderLayout();
  layout->addWidget(new Wt::WText("North-side is best"), Wt::WBorderLayout::North);
  layout->addWidget(new Wt::WText("West-side is best"), Wt::WBorderLayout::West);
  layout->addWidget(new Wt::WText("East-side is best"), Wt::WBorderLayout::East);
  layout->addWidget(rootPanel, Wt::WBorderLayout::Center);
  layout->addWidget(new Wt::WText("South-side is best"), Wt::WBorderLayout::South);

  // use layout but do not justify vertically
  w->setLayout(layout, Wt::AlignTop | Wt::AlignJustify);

   
   
/*   Wt::WBorderLayout *layout = new Wt::WBorderLayout();

      // create the root panel and fit it inside the container
   //rootContainer->layout()->addWidget(rootPanel);
   layout->addWidget(new Wt::WText("West-side is best"), Wt::WBorderLayout::West); 
   layout->addWidget(new Wt::WText("East-side is best"), Wt::WBorderLayout::East);
   layout->addWidget(rootPanel, Wt::WBorderLayout::Center);
   rootContainer->setLayout(layout);*/
  

  //rootPanel->setLayout(new WFitLayout());
  rootPanel->layout()->addWidget(new WText("Your name, please ? "));  // show some text
  nameEdit_ = new WLineEdit();                     // allow text input
  rootPanel->layout()->addWidget(nameEdit_);  // show some text
  nameEdit_->setFocus();                                 // give focus

  WPushButton *b = new WPushButton("Greet me."); // create a button
  rootPanel->layout()->addWidget(b);  // show some text
  //b->setMargin(5, Left);                                 // add 5 pixels margin

  rootPanel->layout()->addWidget(new WBreak());                       // insert a line break

  greeting_ = new WText();                         // empty text
  rootPanel->layout()->addWidget(greeting_);  // show some text*/
  
  /*
   * Connect signals with slots
   *
   * - simple Wt-way
   */
  b->clicked().connect(this, &Cmst::greet);

  /*
   * - using an arbitrary function object (binding values with boost::bind())
   */
  nameEdit_->enterPressed().connect
    (boost::bind(&Cmst::greet, this));
}

void Cmst::greet()
{
  /*
   * Update the text, using text input into the nameEdit_ field.
   */
  greeting_->setText("Hello there, " + nameEdit_->text());
  const std::string path = "/" + nameEdit_->text().toUTF8();
  setInternalPath(path);
  setTitle(nameEdit_->text());
}

WApplication *createApplication(const WEnvironment& env)
{
  /*
   * You could read information from the environment to decide whether
   * the user has permission to start a new application
   */
  return new Cmst(env);
}

int main(int argc, char **argv)
{
  /*
   * Your main method may set up some shared resources, but should then
   * start the server application (FastCGI or httpd) that starts listening
   * for requests, and handles all of the application life cycles.
   *
   * The last argument to WRun specifies the function that will instantiate
   * new application objects. That function is executed when a new user surfs
   * to the Wt application, and after the library has negotiated browser
   * support. The function should return a newly instantiated application
   * object.
   */
  return WRun(argc, argv, &createApplication);
}
