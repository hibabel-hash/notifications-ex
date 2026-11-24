#include "notificationSMS.h"

notificationSMS::notificationSMS(string app,int n, string d, string m) : notification(d, m)
{
	this->operateur = app;
	this->numero = n;
}

void notificationSMS::afficher() const
{
	cout << "SMS|numero:" << this->numero << "|operateur:" << this->operateur<< "|message:" << this->message << endl;
}

void notificationSMS::envoyer()
{
	cout << "envoie dun sms" << endl;
	notification::afficher();
}

notificationSMS::~notificationSMS()
{
}
