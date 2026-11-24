#pragma once
#include "notification.h"
class notificationaPUSH :
    public notification
{  
  private:
      string application;
public:
    notificationaPUSH(string,string,string);
    void afficher()const;
    void envoyer();
    ~notificationaPUSH();
};

