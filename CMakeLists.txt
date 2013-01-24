cmake_minimum_required(VERSION 2.8)

project(cmst)

set(wt_project_target cmst.wt)

set(wt_project_source pages/commonpage.cpp pages/mainpage.cpp
main.cpp
)

set(wt_project_libraries
wt 
wthttp 
wtext
boost_signals
)

set(wt_includes /usr/include/Wt)

#set(wt_connector "wtfcgi" catch string "Connector used (wthttp or wtfcgi)")

add_executable(${wt_project_target} ${wt_project_source})

target_link_libraries(${wt_project_target} ${wt_project_libraries}) 

include_directories(${wt_includes})

add_subdirectory(pages)