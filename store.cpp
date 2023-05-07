#include <iostream>
using namespace std;

#include "observable/iPhoneObservable.hpp"
#include "observer/emailAlertObserver.hpp"
#include "observer/mobileAlertObserver.hpp"
#include "observer/notificationAlertObserver.hpp"
#include "observable/stockObservable.hpp"

int main()
{
    StockObservable* iPhoneStockObservable = new IPhoneObservable();

    NotificationAlertObserver* observer1 = new EmailAlertObserver("ankit@gmail.com", iPhoneStockObservable);
    NotificationAlertObserver* observer2 = new EmailAlertObserver("sam@gmail.com", iPhoneStockObservable);
    NotificationAlertObserver* observer3 = new MobileAlertObserver("Ank21", "9123421208", iPhoneStockObservable);

    iPhoneStockObservable -> add(observer1);
    iPhoneStockObservable -> add(observer2);
    iPhoneStockObservable -> add(observer3);

    iPhoneStockObservable->setStockCount(10);
}