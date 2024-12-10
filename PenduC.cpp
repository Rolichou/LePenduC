#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

#include "jeuP.h"
#include "pointeurs.h"


int main (int argc, char** argv){

    int x = 0;
    do {

    srand (time(0));

    const int nombreMots = 9;
    const char* mots[nombreMots] ={
        "  programmation",
        " maison",
        " telephone",
        " sauterelle",
        " jeu",
        " cahier",
        " cameroun",
        " yaourt",
        " enseignant"
    };
    
    int randomIndex = rand () % nombreMots;
    const char *motchoisi = mots[randomIndex];

    jeuPendu ( motchoisi);

    } while ( x != 0 );

    return 0;
}


