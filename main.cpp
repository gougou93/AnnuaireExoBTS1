#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "annuaire.h"

using namespace std;

int main()
{
    annuaire annu;
    int choixMenu;
    int i = 0;
    do {
        printf("\nMenu\n1:Ajouter contact\n2:Afficher contacts\n0:Quitter\n");
        do {
            scanf("%d",&choixMenu);
        }while(choixMenu!=1 && choixMenu!=2 && choixMenu!=0);
        if(choixMenu==1)
        {
            contact a;

            annu.tab[i] = annu.ajouter();
            i++;
        }
        if(choixMenu==2)
        {
            annu.afficher();
        }
    }while(choixMenu!=0);
}
