#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "./include/annuaire.h"

using namespace std;

int main()
{
    annuaire annu;
    int choixMenu;
    do {
        printf("Menu\n1:Ajouter contact\n2:Afficher contacts\n0:Quitter\n");
        do {
            scanf("%d",&choixMenu);
        }while(choixMenu!=1 && choixMenu!=2 && choixMenu!=0);
        if(choixMenu==1)
        {
            contact a;
            annu.ajouter(a);

        }
        if(choixMenu==2)
        {
            annu.afficher();
        }
    }while(choixMenu!=0);
}
