#include "GestionnaireNotifications.h"
#include <iostream>
using namespace std;

GestionnaireNotifications::GestionnaireNotifications()
{
    compteur = 0;
}

void GestionnaireNotifications::ajouter(notification* n)
{
    if (compteur < 100)
    {
        tab[compteur] = n;
        compteur++;
    }
    else
    {
        cout << "plein" << endl;
    }
}

void GestionnaireNotifications::envoyerToutes()
{
    for (int i = 0; i < compteur; i++)
    {
        tab[i]->envoyer();
    }
}
