

#include "fichier.h"

int main()
{
//VAR
tClient tCarte;
//initClient(tCarte);Je travaille encore pour faire fonctionner la procédure.
tCarte.pId= (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pNom= (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pPrenom= (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pPostal= (char*)malloc(TAILLECHAINE*sizeof (char));
tCarte.pVille= (char*)malloc(TAILLECHAINE*sizeof (char));
int nChoix=1;
int nNbClient=0;


while (nChoix!=0)
{
printf("Taper 1 pour entrer un client.\nTaper 2 pour lire le répertoire de client.\nTaper 0 pour quitter.\n");
scanf("%d",&nChoix);

    switch (nChoix)
    {
        case 1 :
            nNbClient=comptCli();
            saisirClient(tCarte);
            ecrirFichier(tCarte,nNbClient);
            break;

        case 2 : lirFichier();
        break;
    }
}
    printf("Bye bye world!\n");
    free(tCarte.pId);
    free(tCarte.pNom);
    free(tCarte.pPrenom);
    free(tCarte.pPostal);
    free(tCarte.pVille);
    return 0;
}
