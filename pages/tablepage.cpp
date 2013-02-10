/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#include "tablepage.h"
#include "Wt/WTableView"
#include "Wt/WSortFilterProxyModel"

TablePage::TablePage(Wt::WContainerWidget* parent, DataSession* session): CommonPage(parent, session)
{

}

void TablePage::LoadTable()
{
	
	
	Wt::WSortFilterProxyModel *proxy = new Wt::WSortFilterProxyModel(this);
	//proxy->setSourceModel(model);
	proxy->setDynamicSortFilter(true);
	proxy->setFilterKeyColumn(0);
	proxy->setFilterRole(Wt::UserRole);
	
	Wt::WTableView* tableView = new Wt::WTableView(this);
	tableView->setAlternatingRowColors(true);
    tableView->setModel(proxy);
    tableView->setSelectionMode(Wt::ExtendedSelection);
    tableView->setDragEnabled(true);

	
}
