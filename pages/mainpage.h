/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <Wt/WContainerWidget>
#include <Wt/WStackedWidget>
#include <Wt/WApplication>
#include "commonpage.h"


class MainPage : public Wt::WContainerWidget
{
public:
	MainPage(Wt::WApplication* app);
	
private:
	Wt::WStackedWidget *contentsStack_;
	Wt::WApplication* app_;
	DataSession session_;
	
	void addToMenu(Wt::WMenu *menu, const Wt::WString& name,
		 CommonPage *controls);
	
	void selectedMenuItem(Wt::WMenuItem* menuItem);
};

#endif // MAINPAGE_H
