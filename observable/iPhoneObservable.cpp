#include "iPhoneObservable.hpp"
#include <iostream>
using namespace std;

void IPhoneObservable::add(NotificationAlertObserver* observer){
    observerList.push_back(observer);
}

void IPhoneObservable::remove(NotificationAlertObserver* observer){
    observerList.remove(observer);
    //IPhoneObservable::print();
}

void IPhoneObservable::notifySubscribers(){
    for(auto observer : observerList){
        observer->update();
    }
}

void IPhoneObservable::setStockCount(int newStockCount){
    if(stockCount == 0){
        //earlier stock is 0 and new stock is coming
        notifySubscribers();
    }
    stockCount = newStockCount;
}

int IPhoneObservable::getStockCount(){
    return stockCount;
}

