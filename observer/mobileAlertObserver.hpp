#ifndef mobile_alert_hpp
#define mobile_alert_hpp

#include "notificationAlertObserver.hpp"
#include "../observable/stockObservable.hpp"
#include <string>

using namespace std;

class MobileAlertObserver : public NotificationAlertObserver{
    string userName, mobileNo, msg;
    //we are using this observable as in future there can be many observables and then we have tp check instance of for objects
    StockObservable* observerable;
public:
    MobileAlertObserver(string pUserName, string pMobileNo, StockObservable* pObservable){
        userName = pUserName;
        mobileNo = pMobileNo;
        observerable = pObservable;
    }
    void update();
    void sendMsgOnMobile(string userName, string mobileNo, string msg);
};

#endif