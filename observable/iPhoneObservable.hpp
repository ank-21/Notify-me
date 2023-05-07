#ifndef iPhone_observable_hpp
#define iPhone_observable_hpp

#include <iostream>
#include "stockObservable.hpp"
#include "../observer/notificationAlertObserver.hpp"
#include <list>

using namespace std;

class IPhoneObservable : public StockObservable{
    //parameters related to stock Observables
    list<NotificationAlertObserver*> observerList;      //list of observers
    int stockCount=0;
    public:
        void add(NotificationAlertObserver* observer);
        void remove(NotificationAlertObserver* observer);
        void notifySubscribers();
        void setStockCount(int newStockCount);
        int getStockCount();
};

#endif