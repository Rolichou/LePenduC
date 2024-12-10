#include <iostream>
#include <cstring>

#include "pointeurs.h"

int compte_char (const char* chaine){
    int longueur = 0 ; 

    while ( *chaine !=  '\0' ) {
        longueur++ ;
        chaine++ ;
    }

return longueur;
}

void copie ( char* dest, const char* source){

    while ( *source != '\0'){
        *dest = *source;
        dest = dest + 1;
        source++;
    }

    *dest = '\0';
}

void concatene  (char *dest, const char *source){

    while ( *dest != '\0') dest++;
        while ( *source != '\0'){
            *dest = *source;
            dest++;
            source++;
        }
        *dest = '\0';
}
int compare ( const char *chaine1, const char *chaine2){

    while ( *chaine1 != '\0' && *chaine2 != '\0'){
        if ( *chaine1 != *chaine2){
            return ( *chaine1 < *chaine2) ? 2 : -2 ;
        }
        chaine1++;
        chaine2++;
    }
    if ( *chaine1 == '\0' && *chaine2 == '\0'){
        return 0;
    }
    return ( *chaine1 == '\0' ) ? -1 : 1 ;
}

const char* cherche_char (const char* chaine, char caractere){

    while ( *chaine != '\0'){
        if ( *chaine == caractere ) return chaine; 
        chaine++;
    }
    return nullptr;
}

void inverse ( char *chaine){
    char *fin_chaine = chaine;
    while ( *fin_chaine != '\0'){
        fin_chaine++;
    }
    fin_chaine--;

    while ( chaine < fin_chaine ){
        char aux = *chaine;
        *chaine = *fin_chaine ;
        *fin_chaine = aux ;

        chaine++;
        fin_chaine--;
    } 
}

void to_upper ( char *chaine){
    while ( *chaine != '\0'){
        if ( *chaine >= 'a' && *chaine <= 'z'){
            *chaine = *chaine - 32 ;
        }
    chaine++;
    }
}

void to_lower (char *chaine){
    while ( *chaine != '\0'){
        if (*chaine >= 'A' && *chaine <= 'Z'){
            *chaine = *chaine + 32;
        }
    chaine++;
    }
}

const char *cherche_mot ( const char *phrase,  const char *mot){
    const char *p = phrase;
    while ( *p != '\0') {
        const char *auxP = p;
        const char *auxM = mot;
        while ( *auxP == *auxM && *auxM != '\0'){
            auxP++;
            auxM++;
        }
        if ( *auxM == '\0') return p;
        p++;
    }
return nullptr;
}

void sous_chaine ( const char *source, char *dest, int debut, int longueur){

    source = source + debut;
    for ( int i = 0; i < longueur && *source != '\0'; i++){
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}

void supprime_caractere ( char *chaine, char caractere ){

    char *del = chaine;
    while ( *chaine != '\0' ){
        if ( *chaine != caractere){
            *del = *chaine ;
            del++;
        }
        chaine++;
    }
    *del = '\0';
}

int compte_mot ( const char *phrase){

int compteur = 0;
bool inmot = false;

while ( *phrase != '\0'   ){
    if ( *phrase != ' ' && !inmot){
        inmot = true;
        compteur++;
    } else if ( *phrase == ' '){
        inmot = false;
    }
    phrase++;
}
return compteur;
}
