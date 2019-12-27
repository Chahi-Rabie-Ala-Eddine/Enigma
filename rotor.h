#ifndef ROTOR_H
#define ROTOR_H

#include <constants.h>

class Rotor
{
    public:
    Rotor();
    Rotor(rotors rotor_choosed);
    ~Rotor();
    char* get_alphabet();
    void import_alphabet(char selected_alphabet[]);
    void set_alphabet();
    void move();
    void turn();
    char substitute(char letter);

    private:
    char alphabet[26];
    rotors model;

};

#endif
