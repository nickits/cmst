/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#include "commonpage.h"

CommonPage::CommonPage(Wt::WContainerWidget* parent, DataSession* session): WContainerWidget(parent)
{
	session_ = session;
}

Wt::WString* CommonPage::getTitle()
{
	return new Wt::WString("Common");
}

void CommonPage::populateContextMenu(Wt::WMenu* contextMenu)
{

}
