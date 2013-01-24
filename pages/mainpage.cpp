/*
 * Copyright (C) 2013 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#include "mainpage.h"
#include <Wt/WBorderLayout>
#include <WText>

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
  
	Wt::WContainerWidget *w = new Wt::WContainerWidget(this);
	Wt::WBorderLayout *layout = new Wt::WBorderLayout();
	layout->addWidget(new Wt::WText("North-side is best"), Wt::WBorderLayout::North);
	layout->addWidget(new Wt::WText("South-side is best"), Wt::WBorderLayout::South);
	layout->addWidget(menu, Wt::WBorderLayout::West);
	layout->addWidget(contentsStack_, Wt::WBorderLayout::Center);

	// use layout but do not justify vertically
	w->setLayout(layout, Wt::AlignTop | Wt::AlignJustify);
	
	addToMenu(menu, "Basics", new CommonPage());
	addToMenu(menu, "Form Widgets", new CommonPage());
	addToMenu(menu, "Form Validators", new CommonPage());

}

void MainPage::addToMenu(Wt::WMenu* menu, const Wt::WString& name, CommonPage* controls)
{
// 	if (controls->hasSubMenu()) {
// 		WSubMenuItem *smi = new WSubMenuItem(name, controls);
// 		WMenu *subMenu = new WMenu(contentsStack_, Vertical, 0);
// 		subMenu->setRenderAsList(true);
// 
// 		smi->setSubMenu(subMenu);
// 		menu->addItem(smi);
// 
// 		subMenu->setInternalPathEnabled();
// 		subMenu->setInternalBasePath("/" + smi->pathComponent());
// 		subMenu->setStyleClass("menu submenu");
// 
// 		controls->populateSubMenu(subMenu);
// 	} else
		menu->addItem(name, controls);
//		app_->setTitle(name);
}
