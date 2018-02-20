#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../include/annuaire.h"

using namespace std;

annuaire::annuaire()
{

}

void annuaire::ajouter(contact c)
{
    printf("Entrez le nom: ");
    scanf("%s",&c.nom);
    printf("Entrez le prenom: ");
    scanf("%s",&c.prenom);
    printf("Entrez le numero: ");
    scanf("%s",&c.telephone);
    tab[nombreContacts]= c;
    nombreContacts++;
}

void annuaire::afficher()
{
    int i;
    for(i=0;i<nombreContacts;i++)
    {
        tab[i].afficherContact();
    }
}
