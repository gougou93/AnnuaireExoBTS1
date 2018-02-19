#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../Headers/include/annuaire.h"
#include "../Headers/include/contact.h"
using namespace std;

int main()
{
    annuaire annu;
    int choixMenu, nombreContacts;
    do {
        printf("Menu\n1:Ajouter contact\n2:Afficher contacts\n0:Quitter\n");
        do {
            scanf("%d",&choixMenu);
        }while(choixMenu!=1 && choixMenu!=2 && choixMenu!=0);
        if(choixMenu==1)
        {
            contact a;
            annu.ajouter(contact.a);
            nombreContacts++;
        }
        if(choixMenu==2)
        {
            annu.afficher();
        }
    }while(choixMenu!=0);
}
