#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>

using namespace std;

//Structure du tableau des permutation
struct Permutation{
    char Letter1;
    char Letter2;
};

//Les alphabets des rotors
static char real_alphabet[26]  = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
static char reflect_one[26]    = {'C','Z','A','F','I','D','L','O','E','T','X','G','P','Y','H','M','S','V','Q','J','W','R','U','K','N','B'};
static char reflect_two[26]    = {'F','P','V','G','O','U','D','Z','N','W','S','G','R','I','E','B','T','M','K','Q','F','C','J','Y','X','H'};
static char alphabet_one[26]   = {'G','Z','D','X','A','L','C','W','E','R','H','B','P','Q','U','S','F','N','J','I','M','V','O','T','K','Y'};
static char alphabet_two[26]   = {'L','K','N','I','Q','Z','S','H','O','V','W','U','M','A','C','J','B','D','F','X','P','R','E','Y','G','T'};
static char alphabet_three[26] = {'Q','A','H','L','G','X','R','P','T','C','D','J','W','Z','M','F','U','O','B','Y','S','K','N','E','V','I'};
static char alphabet_four[26]  = {'J','D','G','P','C','A','I','R','H','W','E','T','X','N','V','U','Y','Q','Z','M','L','S','K','B','O','F'};
static char alphabet_five[26]  = {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};

//Les rotors :
enum rotors {Rotor_un = 1, Rotor_deux = 2, Rotor_trois = 3, Rotor_quatre = 4, Rotor_cinq = 5};

//Les reflecteurs :
enum Reflector{Reflector_one = 1, Reflector_two = 2};

#endif
