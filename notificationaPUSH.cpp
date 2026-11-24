#include "notificationaPUSH.h"

notificationaPUSH::notificationaPUSH(string app, string d, string m) : notification(d, m)
{
	this->application = app;
}

void notificationaPUSH::afficher() const
{
	cout << "PUSH|utilisateur:" << this->destinateur << "|application:" << this->application << "|message:" << this->message << endl;
}

void notificationaPUSH::envoyer()
{
	cout << "envoie dun push" << endl;
	notification::afficher();

}

notificationaPUSH::~notificationaPUSH()
{
}
