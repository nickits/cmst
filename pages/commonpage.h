/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/
 
#ifndef COMMONPAGE_H
#define COMMONPAGE_H

#include <Wt/WContainerWidget>
#include <Wt/WMenu>
#include "../datasession.h"


class CommonPage : public Wt::WContainerWidget
{
public:
	virtual Wt::WString* getTitle();
	virtual void populateContextMenu(Wt::WMenu* contextMenu) ;
	CommonPage(WContainerWidget* parent = 0, DataSession* session = 0);
	
protected:
	DataSession*  session_;
};

#endif // COMMONPAGE_H
