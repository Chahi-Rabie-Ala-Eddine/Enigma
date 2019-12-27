#ifndef ENIGMA_H
#define ENIGMA_H

#include <rotor.h>
#include <iostream>
#include <vector>
#include <constants.h>
#include <reflector.h>
#include <connexion_table.h>

using namespace std;

class enigma
{
    public:
    enigma(Rotor* first_rotor, Rotor* second_rotor, Rotor* third_rotor, reflector* reflector, Connexion_table* table);
    ~enigma();
    char reflect(char letter);
    char* cypher(string const& text);

    private:
    Rotor* mon_rotor[3];
    reflector* mon_reflecteur;
    Connexion_table* ma_table;

};

#endif // ENIGMA_H
