#pragma once
#include "notification.h"
class notificationSMS :
    public notification
{  private:
    string operateur;
    int numero;
public:
    notificationSMS(string, int,string, string);
    void afficher()const;
    void envoyer();
    ~notificationSMS();


};

