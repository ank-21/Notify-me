#include "mobileAlertObserver.hpp"
#include<iostream>

void MobileAlertObserver::update(){
    MobileAlertObserver::sendMsgOnMobile(userName, mobileNo, "product is in stock");
}

void MobileAlertObserver::sendMsgOnMobile(string userName, string mobileNo, string msg){
    cout<<"Msg sent to " << userName << "with the mobile number " << mobileNo << endl;
    cout<<"message --- " << msg << endl;
}