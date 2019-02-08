#include "client.h"

 //////PROCEDURE initClient/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette associe une m�moire de plusieurs caract�re � chaque propri�t� d'un client.
 //
 // Entr�e : Les propri�t� du client dont la m�moire n'est pas allou�e.
 //
 // Sortie : Les propri�t� du client dont la m�moire est allou�e.
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
 // Description :Cette proc�dure permet de remplir le profil d'un client.
 //
 // Entr�e : La structure vide d'un client.
 //
 // Sortie : Le profile d'un client renseign�.
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
    printf("Saisir un pr�nom.");
    gets(tCarte.pPrenom);
    fflush(stdin);
    printf("Saisir un code postal.");
    gets(tCarte.pPostal);
    fflush(stdin);
    printf("Saisir une ville.");
    gets(tCarte.pVille);
}
