/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <WContainerWidget>
#include <WStackedWidget>
#include <WApplication>
#include "commonpage.h"


class MainPage : public Wt::WContainerWidget
{
public:
	MainPage(Wt::WApplication* app);
	
private:
	Wt::WStackedWidget *contentsStack_;
	Wt::WApplication* app_;
	
	void addToMenu(Wt::WMenu *menu, const Wt::WString& name,
		 CommonPage *controls);
};

#endif // MAINPAGE_H
