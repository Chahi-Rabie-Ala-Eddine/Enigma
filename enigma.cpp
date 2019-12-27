#include "enigma.h"
#include <iostream>
#include <string.h>
#include <cstring>
#include <constants.h>
#include <connexion_table.h>
#include <rotor.h>
#include <word_processor.h>

using namespace std;

//Constructeur de la machine
enigma::enigma(Rotor* first_rotor, Rotor* second_rotor, Rotor* third_rotor, reflector* m_reflector, Connexion_table* table)
{
    this->mon_rotor[0] = first_rotor;
    this->mon_rotor[1] = second_rotor;
    this->mon_rotor[2] = third_rotor;
    this->mon_reflecteur = m_reflector;
    this->ma_table = table;
}
//Destructeur de la machine
enigma::~enigma()
{
    delete mon_rotor[2];
    delete mon_reflecteur;
}
//Rendre le chiffrement symétrique (chiffrer = déchiffrer)
char enigma::reflect(char letter)
{
    int letter_f_r = 0;
    int letter_s_r = 0;
    int letter_t_r = 0;
    char substitued = mon_reflecteur->substitute(letter);
    char* alphabet_rotor_one = this->mon_rotor[0]->get_alphabet();
    char* alphabet_rotor_two = this->mon_rotor[1]->get_alphabet();
    char* alphabet_rotor_three = this->mon_rotor[2]->get_alphabet();
    while(alphabet_rotor_three[letter_t_r] != substitued)
    {
        letter_t_r++;
    }
    substitued = real_alphabet[letter_t_r];
    while(alphabet_rotor_two[letter_s_r] != substitued)
    {
        letter_s_r++;
    }
    substitued = real_alphabet[letter_s_r];
    while(alphabet_rotor_one[letter_f_r] != substitued)
    {
        letter_f_r++;
    }
    substitued = real_alphabet[letter_f_r];
   // cout << "\nsubstitution avec le Rotor 1 : " << substitued << endl;

    return substitued;
}
//Chiffrer et déchiffrer un message avec Enigma ( Master piece )
char* enigma::cypher(string const& text)
{
    char* cyphred = (char*)malloc(text.size() * sizeof(char));
    int rotor_one_lap = 0, rotor_two_lap = 0;
    for(int i = 0 ; i < (int)text.size() ; i++)
    {
        cyphred[i] = this->ma_table->permute(this->reflect(this->mon_rotor[2]->substitute(this->mon_rotor[1]->substitute(this->mon_rotor[0]->substitute(this->ma_table->permute(text[i]))))));
        this->mon_rotor[0]->turn();
        rotor_one_lap++;
        if(rotor_one_lap > 25)
        {
            this->mon_rotor[1]->turn();
            rotor_one_lap = 0;
            rotor_two_lap++;
        }
        if(rotor_two_lap > 25)
        {
            this->mon_rotor[2]->turn();
            rotor_two_lap = 0;
        }
    }
    cout <<"\nLe clair est   : " << text << endl;
    cout <<"\nLe chiffré est : " << cyphred << endl << endl;

    free(cyphred);

    return cyphred;
}
