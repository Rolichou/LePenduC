#include <iostream>
#include <cstring>

#include "pointeurs.h"


    /*int longueur (const char* chaine);
    void copie ( char* dest, const char* source);
    void concatene  (char *dest, const char *source);
    int compare ( const char *chaine1, const char *chaine2);
    const char* cherche_char (const char * chaine, char caractere);
    void inverse ( char *chaine);
    void to_upper ( char *chaine);
    const char* cherche_char (const char* chaine, char caractere);
    void sous_chaine ( const char *source, char *dest, int debut, int longueur);
    void supprime_caractere ( char *chaine, char caractere );
    int compte_mot ( const char *phrase);*/


int main (int argc, char** argv){

    const char *chaine;
    chaine = "bonjour\0";
    char* dest;
    dest = new char[20];

    int lon =  longueur(chaine);
    std :: cout << "cette chaine compte " << lon << " caractere."<< std :: endl;
    copie( dest , chaine );
    std :: cout <<"copie : " << dest << std :: endl;
    concatene ( dest , chaine);
     
    const char *m = " salut ";
    const char *p = " salue ";
    char letter;
    

    int comp = compare ( p , p);
    int comp1 = compare ( p , m);
    std :: cout << comp <<" et "<< comp1 << std :: endl;
    const char* res = cherche_char ( chaine , letter); 
    std :: cout << res;

    
   
   
    delete dest;
    return 0;
}

