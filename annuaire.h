#include "contact.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class annuaire
{
    public:
        annuaire();
        contact tab[100];
        contact ajouter();
        void afficher();
        int nombreContacts =0;
};


