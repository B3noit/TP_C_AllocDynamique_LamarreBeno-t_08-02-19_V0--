#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

//CONST
#define TAILLECHAINE 30

typedef struct tClient
{
    char *pId;
    char *pNom;
    char *pPrenom;
    char *pPostal;
    char *pVille;
}tClient;

extern void initClient(tClient tCarte);
extern void saisirClient(tClient tCarte);



#endif // CLIENT_H_INCLUDED
