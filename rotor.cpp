#include <iostream>
#include "rotor.h"
#include "constants.h"

using namespace std;

//constructeur par défaut
Rotor::Rotor()
{

}
//constructeur surchargé
Rotor::Rotor(rotors rotor_choosed)
{
    this->model = rotor_choosed;
}
//Destructeur
Rotor::~Rotor()
{

}
//Obtenir l'alphabet
char* Rotor:: get_alphabet()
{
    return this->alphabet;
}
//Importer l'alphabet choisi depuis le fichier.cpp constantes
void Rotor::import_alphabet(char selected_alphabet[])
{
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = selected_alphabet[i];
    }
}
//Assigner l'alphabet au rotor selon le choix de l'utilisateur
void Rotor::set_alphabet()
{
    switch (model)
    {
        case 1:
            import_alphabet(alphabet_one);
            break;
        case 2:
            import_alphabet(alphabet_two);
            break;
        case 3:
            import_alphabet(alphabet_three);
            break;
        case 4:
            import_alphabet(alphabet_four);
            break;
        case 5:
            import_alphabet(alphabet_five);
            break;
    }
}
//Selectionner la position de départ
void Rotor::move()
{
    //Modifier l'alphabet à l'initialisation du rotor
}
//Faire tourner le rotor d'un cran
void Rotor::turn()
{
    char new_alphabet[26];
    new_alphabet[0] = this->alphabet[25];
    for(int i = 1 ; i < 26 ; i++)
    {
        new_alphabet[i] = alphabet[i-1];
    }
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = new_alphabet[i];
    }
}
//Faire la substitution monoalphabétique du rotor
char Rotor::substitute(char letter)
{
    char lettre_sub;
    switch (letter) {
    case 'A':
        lettre_sub = this->alphabet[0];
        break;
    case 'B':
        lettre_sub = this->alphabet[1];
        break;
    case 'C':
        lettre_sub = this->alphabet[2];
        break;
    case 'D':
        lettre_sub = this->alphabet[3];
        break;
    case 'E':
        lettre_sub = this->alphabet[4];
        break;
    case 'F':
        lettre_sub = this->alphabet[5];
        break;
    case 'G':
        lettre_sub = this->alphabet[6];
        break;
    case 'H':
        lettre_sub = this->alphabet[7];
        break;
    case 'I':
        lettre_sub = this->alphabet[8];
        break;
    case 'J':
        lettre_sub = this->alphabet[9];
        break;
    case 'K':
        lettre_sub = this->alphabet[10];
        break;
    case 'L':
        lettre_sub = this->alphabet[11];
        break;
    case 'M':
        lettre_sub = this->alphabet[12];
        break;
    case 'N':
        lettre_sub = this->alphabet[13];
        break;
    case 'O':
        lettre_sub = this->alphabet[14];
        break;
    case 'P':
        lettre_sub = this->alphabet[15];
        break;
    case 'Q':
        lettre_sub = this->alphabet[16];
        break;
    case 'R':
        lettre_sub = this->alphabet[17];
        break;
    case 'S':
        lettre_sub = this->alphabet[18];
        break;
    case 'T':
        lettre_sub = this->alphabet[19];
        break;
    case 'U':
        lettre_sub = this->alphabet[20];
        break;
    case 'V':
        lettre_sub = this->alphabet[21];
        break;
    case 'W':
        lettre_sub = this->alphabet[22];
        break;
    case 'X':
        lettre_sub = this->alphabet[23];
        break;
    case 'Y':
        lettre_sub = this->alphabet[24];
        break;
    case 'Z':
        lettre_sub = this->alphabet[25];
        break;
    }

    return lettre_sub;
}
