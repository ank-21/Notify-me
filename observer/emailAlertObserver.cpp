#include "emailAlertObserver.hpp"
#include <iostream>

void EmailAlertObserver::update(){
    sendMail(emailId, "product is in stock");
    //send the actual mail to end user
}

void EmailAlertObserver::sendMail(string emailId, string msg){
    cout<<"Message sent to user with emaild id " << emailId << msg;
}