#ifndef subject_hpp
#define subject_hpp

#include "../observer/notificationAlertObserver.hpp"

class StockObservable{
    public:
        // virtual ~StockObservable(){};
        virtual void add(NotificationAlertObserver* observer) = 0;
        virtual void remove(NotificationAlertObserver* observer) = 0;
        virtual void notifySubscribers() = 0;
        virtual void setStockCount(int newStockCount) = 0;
        virtual int getStockCount() = 0;
};

#endif