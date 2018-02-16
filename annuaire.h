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
        void ajouter(contact);
        void afficher();

};


