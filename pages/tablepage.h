/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef TABLEPAGE_H
#define TABLEPAGE_H
#include "commonpage.h"


class TablePage : public CommonPage
{
public:
	TablePage(WContainerWidget* parent, DataSession* session = 0);

	virtual void LoadTable();
	
	
};

#endif // TABLEPAGE_H
