// systeme de notification.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"notification.h"
#include"notificationaPUSH.h"
#include"notificationSMS.h"
#include"notificationEmail.h"
#include"gestionnairenotifications.h"



int main()
{
   notificationEmail E ("Sécurité", "sara@example.com","Nouvelle connexion détectée");
    notificationSMS  S ("Orange", 612345678 ,"0612345678", "Votre code est 4582");
    notificationaPUSH P ("MyBank", "user_102","Paiement confirmé");

    notification* T[3];

    T[0] = &E;
    T[1] = &S;
    T[2] = &P;

    for (int i = 0; i < 3; i++)
    {
        //T[i]->afficher();
       // T[i]->envoyer();
    }
    GestionnaireNotifications g;

    g.ajouter(&E);
    g.ajouter(&S);
    g.ajouter(&P);

    g.envoyerToutes();

    return 0;
}
    


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
