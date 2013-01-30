/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#include "mainpage.h"
#include <Wt/WBorderLayout>
#include <Wt/WText>
#include <Wt/WSubMenuItem>

MainPage::MainPage(Wt::WApplication* app): WContainerWidget()
{
	app_ = app;
	contentsStack_ = new Wt::WStackedWidget();
	contentsStack_->setOverflow(WContainerWidget::OverflowAuto);
	contentsStack_->setStyleClass("contents");

	/*
	* Setup the menu (and submenus)
	*/
	Wt::WMenu *menu = new Wt::WMenu(contentsStack_, Wt::Vertical, 0);
	menu->setRenderAsList(true);
	menu->setStyleClass("menu");
	menu->setInternalPathEnabled();
	menu->setInternalBasePath("/");
	menu->itemSelected().connect(this, &MainPage::selectedMenuItem);
	
	Wt::WContainerWidget *w = new Wt::WContainerWidget(this);
	Wt::WBorderLayout *layout = new Wt::WBorderLayout();
	layout->addWidget(new Wt::WText("North-side is best"), Wt::WBorderLayout::North);
	layout->addWidget(new Wt::WText("South-side is best"), Wt::WBorderLayout::South);
	layout->addWidget(menu, Wt::WBorderLayout::West);
	layout->addWidget(contentsStack_, Wt::WBorderLayout::Center);

	// use layout but do not justify vertically
	w->setLayout(layout, Wt::AlignTop | Wt::AlignJustify);
	
	menu->addItem("Basics", new CommonPage());
	menu->addItem("Form Widgets", new CommonPage());
	menu->addItem("Form Validators", new CommonPage());

	Wt::WSubMenuItem *smi = new Wt::WSubMenuItem("Sub menu", new CommonPage());
	Wt::WMenu *subMenu = new Wt::WMenu(contentsStack_, Wt::Vertical, 0);
	subMenu->setRenderAsList(true);

	smi->setSubMenu(subMenu);
	
	menu->addItem(smi);

	subMenu->setInternalPathEnabled();
	subMenu->setInternalBasePath("/" + smi->pathComponent());
	subMenu->setStyleClass("menu submenu");
	subMenu->itemSelected().connect(this, &MainPage::selectedMenuItem);
	
	subMenu->addItem("Sub Item 1", new CommonPage());
	subMenu->addItem("Sub Item 2", new CommonPage());
}

void MainPage::selectedMenuItem(Wt::WMenuItem* menuItem)
{
	app_->setTitle(menuItem->text());
}
