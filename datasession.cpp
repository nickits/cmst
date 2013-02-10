/*

 Copyright (C) 2013 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#include "datasession.h"
#include "model/defines.h"
#include <iostream>

DataSession::DataSession(): connection_("data.db")
{
  initialize();
}

void DataSession::initialize()
{
    setConnection(connection_);
    
    mapClass<Product>("Product");
    mapClass<Category>("Category");
    mapClass<Collection>("Collection");
    mapClass<Image>("Image");
    mapClass<Video>("Video");
    mapClass<Client>("Client");
    mapClass<OwnerProduct>("OwnerProduct");
    mapClass<SpecialOffer>("SpecialOffer");
    mapClass<FeaturedProduct>("FeaturedProduct");
    mapClass<Characteristic>("Characteristic");
    mapClass<ProductCharacteristic>("ProductCharacteristic");
    mapClass<Company>("Company");
    mapClass<Shop>("Shop");
    mapClass<Sale>("Sale");
    mapClass<Payment>("Payment");
    mapClass<SaleDetail>("SaleDetail");

    try{
      dbo::Transaction t(*this);
      
      createTables();
      
	  std::stringstream st;
	  
	  for(int i = 1; i <= 10; i++){
		Collection* collection = new Collection();
	    st << "Collection" << i;
		collection->name = st.str();
	    st.str("");
	    st << "Description" << i;
		collection->description = st.str();
		st.str("");
		add<Collection>(collection);
	  }
	  
      t.commit();
      
      std::cerr << "Database created";
	  
	  
    }
    catch(std::exception e){
      std::cerr << e.what() << std::endl;
      //std::cerr << "Using existing database";
    }
}

