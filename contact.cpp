#include "contact.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;
contact::contact()
{
    //ctor
}

void contact::afficherContact()
{
    cout << "Nom: " << nom << " Prenom: "<< prenom<<" Numero: " << telephone << endl;
}
