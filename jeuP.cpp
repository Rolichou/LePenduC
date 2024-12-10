#include <iostream>
#include <cstring>

#include "jeuP.h"
#include "pointeurs.h"

void afficherPendu (int erreurs){

    switch ( erreurs){
        case 0:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |      |" << std :: endl;
            std :: cout << "        |" << std :: endl;
            std :: cout << "        |" << std :: endl;
            std :: cout << "        |" << std :: endl;
            std :: cout << "        |" << std :: endl;
        break;
        case 1:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |      |" << std :: endl;
            std :: cout << " O      |" << std :: endl;
            std :: cout << "        |" << std :: endl;
            std :: cout << "        |" << std :: endl;
            std :: cout << "        |" << std :: endl;
        break;
         case 2:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |       |" << std :: endl;
            std :: cout << " O       |" << std :: endl;
            std :: cout << " |       |" << std :: endl;
            std :: cout << "         |" << std :: endl;
            std :: cout << "         |" << std :: endl;
        break;
        case 3:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |       |" << std :: endl;
            std :: cout << " O       |" << std :: endl;
            std :: cout << "/|       |" << std :: endl;
            std :: cout << "         |" << std :: endl;
            std :: cout << "         |" << std :: endl;
        break;
        case 4:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |       |" << std :: endl;
            std :: cout << " O       |" << std :: endl;
            std :: cout << "/|\\      |" << std :: endl;
            std :: cout << "         |" << std :: endl;
            std :: cout << "         |" << std :: endl;
        break;
        case 5:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |       |" << std :: endl;
            std :: cout << " O       |" << std :: endl;
            std :: cout << "/|\\      |" << std :: endl;
            std :: cout << "/         |" << std :: endl;
            std :: cout << "        |" << std :: endl;
        break;
        case 6:
            std :: cout << "+-----------+" << std :: endl;
            std :: cout << " |       |" << std :: endl;
             std :: cout <<" O       |" << std :: endl;
            std :: cout << "/|\\      |" << std :: endl;
            std :: cout << "/ \\      |" << std :: endl;
            std :: cout << "         |" << std :: endl;
        break;

    }
}


void jeuPendu (const char *mot ){

    int longueur = compte_char(mot);
    char *cache = new char[ longueur + 1] ;
    
    int erreurs = 0;
    char lettre;
    int erreur_max = 6;

    int choice = 0;
        
    while ( erreurs < erreur_max){

        if ( choice == 0 ){

            std :: cout << "Essayer de touver le mot!"<< std :: endl;
            afficherPendu ( erreurs );
            std :: cout << " Mot :  ";
            for (int i = 0 ; i < longueur ; i++){
                cache [i] = '_';
                std :: cout << cache[i];
            }
        }

        if ( choice != 0){
            afficherPendu ( erreurs) ;
             for ( int j = 0 ; j < longueur ; j++){

                std :: cout << cache[j];

             }
        }
        
        choice++;
        *cache = '\0';

        std :: cout << std :: endl;
        
        std :: cout << " Entrer une lettre " << std :: endl;
        std :: cin >> lettre;

        if (lettre =='0') break;

        bool bonresult = false;
        for ( int i = 0 ; i < longueur ; i++){
            if ( mot[i] == lettre && cache[i]=='_'){
                cache[i] = lettre ;
                bonresult = true ;
            std :: cout << cache;
            }
        }
        if ( !bonresult) {
            erreurs++;
        }
        bool victoire = true;
        for ( int i = 0; i < longueur ; i++){
            if ( cache [i] == '_'){
                victoire = false;
                break;
            }
        }
        if (victoire) {
            afficherPendu (erreurs);
            std :: cout << " Mot : " ;
            for ( int i = 0; i < longueur ; i++ ){
                std :: cout << cache [i];
            }
            std :: cout << std :: endl;
            std :: cout << "Vous avez gagne! felicitation!!!!!!"<< std :: endl;
            break;
        }
    }
    if (erreurs == erreur_max) {
        afficherPendu (erreurs);
        std :: cout <<" Mot : " << mot << std :: endl;
        std :: cout << " Vous avez perdu "<< std :: endl;
    }

    delete[] cache;
}







