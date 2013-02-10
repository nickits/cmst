/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#include "clientspage.h"
#include "../model/defines.h"
#include <Wt/WSortFilterProxyModel>
#include <Wt/WTableView>
#include <Wt/Dbo/QueryModel>

ClientsPage::ClientsPage(Wt::WContainerWidget* parent, DataSession* session): TablePage(parent, session)
{
	LoadTable();
}

void ClientsPage::LoadTable()
{
	//TablePage::LoadTable();
	
	//Clients clients = session_->find<Client>();
	Wt::Dbo::QueryModel<Wt::Dbo::ptr<Collection> >* model = new Wt::Dbo::QueryModel<Wt::Dbo::ptr<Collection> >();
	model->setQuery(session_->find<Collection>());
	model->addAllFieldsAsColumns();
	
	Wt::WTableView* tableView = new Wt::WTableView(this);
	tableView->resize(800, 300);
	tableView->setAlternatingRowColors(true);
    tableView->setModel(model);
    tableView->setSelectionMode(Wt::ExtendedSelection);
    tableView->setDragEnabled(true);

}
