#ifndef __POINTEURS_H__
#define __POINTEURS_H__

    int compte_char (const char* chaine);
    void copie ( char* dest, const char* source);
    void concatene  (char *dest, const char *source);
    int compare ( const char *chaine1, const char *chaine2);
    const char* cherche_char (const char * chaine, char caractere);
    void inverse ( char *chaine);
    void to_upper ( char *chaine);
    const char* cherche_char (const char* chaine, char caractere);
    void sous_chaine ( const char *source, char *dest, int debut, int longueur);
    void supprime_caractere ( char *chaine, char caractere );
    int compte_mot ( const char *phrase);


#endif