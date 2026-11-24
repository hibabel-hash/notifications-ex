
#pragma once
#include "notification.h"

    class GestionnaireNotifications
    {
    private:
        notification* tab[100];
        int compteur;

    public:
        GestionnaireNotifications();
        void ajouter(notification* n);
        void envoyerToutes();
    };
