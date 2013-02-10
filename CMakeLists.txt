cmake_minimum_required(VERSION 2.8)

project(cmst)

set(wt_project_target cmst.wt)

set(wt_project_source 
datasession.cpp 
model/saledetail.cpp 
model/client.cpp 
model/specialoffer.cpp 
model/shop.cpp 
model/characteristic.cpp 
model/ownerproduct.cpp 
model/featuredproduct.cpp 
model/sale.cpp 
model/category.cpp 
model/productcharacteristic.cpp 
model/company.cpp 
model/collection.cpp 
model/payment.cpp 
model/video.cpp 
model/image.cpp 
model/product.cpp 
pages/clientspage.cpp 
pages/tablepage.cpp 
pages/commonpage.cpp 
pages/mainpage.cpp
main.cpp
)

set(wt_project_libraries
wt 
wthttp 
wtext
boost_signals
wtdbo 
wtdbosqlite3
)

set(wt_includes /usr/include/Wt)

#set(wt_connector "wtfcgi" catch string "Connector used (wthttp or wtfcgi)")

add_executable(${wt_project_target} ${wt_project_source})

target_link_libraries(${wt_project_target} ${wt_project_libraries}) 

include_directories(${wt_includes})

add_subdirectory(pages)