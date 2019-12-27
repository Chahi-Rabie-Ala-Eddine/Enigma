#ifndef CONNEXION_TABLE_H
#define CONNEXION_TABLE_H

#include <constants.h>

class Connexion_table
{
    private:
    int Taille; //un entier compris entre 0 et 10

    public:
    //attributs
    Permutation Table[10];

    //Methods

    //constructeurs
    Connexion_table();
    //accesseurs
    void setTaille(int);
    int getTaille();

    //Destructeur
    virtual ~Connexion_table();

    //Les methodes de la classe
    void toString();
    bool Add_permutation(char,char); //pour ajouter un couple de lettre a la table de connexion / return true si le couple est inséré
    bool delete_permutation(char,char);
    char permute(char); // fonction qui permute une lettre donné
};

#endif // CONNEXION_TABLE_H
