#pragma once
#include "notification.h"
class notificationEmail :
    public notification
{private :
    string object;
public:
    notificationEmail(string,string,string);
    void afficher()const;
    void envoyer();
    ~notificationEmail();


};

