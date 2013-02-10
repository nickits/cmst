/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef CLIENTSPAGE_H
#define CLIENTSPAGE_H
#include "tablepage.h"

class ClientsPage : public TablePage
{
public:
	ClientsPage(WContainerWidget* parent, DataSession* session = 0);
	void LoadTable();
};

#endif // CLIENTSPAGE_H
