/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/
 
#ifndef COMMONPAGE_H
#define COMMONPAGE_H

#include <Wt/WContainerWidget>
#include <WMenu>


class CommonPage : public Wt::WContainerWidget
{
	virtual Wt::WString* getTitle();
	virtual void populateContextMenu(Wt::WMenu* contextMenu) ;
	
};

#endif // COMMONPAGE_H
