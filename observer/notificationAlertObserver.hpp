#ifndef notification_alert_hpp
#define notification_alert_hpp

class NotificationAlertObserver{
    public:
        // virtual ~NotificationAlertObserver(){};
        virtual void update() = 0;
};

#endif