#include "client.h"

 //////PROCEDURE initClient/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette associe une mémoire de plusieurs caractère à chaque propriété d'un client.
 //
 // Entrée : Les propriété du client dont la mémoire n'est pas allouée.
 //
 // Sortie : Les propriété du client dont la mémoire est allouée.
 //
 // Note :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void initClient(tClient tCarte)
{
tCarte.pId = (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pNom = (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pPrenom = (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pPostal = (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pVille = (char*)malloc(TAILLECHAINE*sizeof (char));
}



 //////PROCEDURE saisirClient/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette procédure permet de remplir le profil d'un client.
 //
 // Entrée : La structure vide d'un client.
 //
 // Sortie : Le profile d'un client renseigné.
 //
 // Note :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void saisirClient(tClient tCarte)
{
    fflush(stdin);
    printf("Saisir un ID.");
    gets(tCarte.pId);
    fflush(stdin);
    printf("Saisir un nom.");
    gets(tCarte.pNom);
    fflush(stdin);
    printf("Saisir un prénom.");
    gets(tCarte.pPrenom);
    fflush(stdin);
    printf("Saisir un code postal.");
    gets(tCarte.pPostal);
    fflush(stdin);
    printf("Saisir une ville.");
    gets(tCarte.pVille);
}
