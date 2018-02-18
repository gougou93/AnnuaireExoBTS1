#include "../include/contact.h"
#include <stdlib.h>
#include <stdio.h>
contact::contact()
{
    //ctor
}

void contact::afficherContact()
{
    printf("Nom: %s Prenom: %s Telephone: %s\n", nom, prenom, telephone);
}
