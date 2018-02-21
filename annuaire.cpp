#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "annuaire.h"

using namespace std;

annuaire::annuaire()
{

}

contact annuaire::ajouter()
{
    contact c;
    printf("Entrez le nom: ");
    cin >> c.nom;
    printf("Entrez le prenom: ");
    cin >> c.prenom;
    printf("Entrez le numero: ");
    cin >> c.telephone;

    nombreContacts++;
    return c;
}

void annuaire::afficher()
{
    int i;
    for(i=0;i<nombreContacts;i++)
    {
        tab[i].afficherContact();
    }
}
