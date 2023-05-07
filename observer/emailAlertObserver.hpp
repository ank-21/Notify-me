#ifndef email_alert_hpp
#define email_alert_hpp

#include "notificationAlertObserver.hpp"
#include "../observable/stockObservable.hpp"
#include <string>
using namespace std;

class EmailAlertObserver : public NotificationAlertObserver{
    string emailId;
    StockObservable* stockobservable;
public:
//constructor injection
    EmailAlertObserver(string pEmailId, StockObservable* pStockObservable){
        emailId = pEmailId;
        stockobservable = pStockObservable;
    }
    void update();
    void sendMail(string emailId, string msg);
};

#endif