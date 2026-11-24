#include "notificationEmail.h"

notificationEmail::notificationEmail(string o, string d, string m) : notification(d, m)
{
	this->object = o;
}

void notificationEmail::afficher() const
{
	cout << "A:|" << this->destinateur << "|object:" << this->object<< "|message:" << this->message << endl;
}

void notificationEmail::envoyer()
{
	cout << "envoie dun email" << endl;
	notification::afficher();

}

notificationEmail::~notificationEmail()
{

}
