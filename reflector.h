#ifndef REFLECTOR_H
#define REFLECTOR_H

#include <constants.h>

class reflector
{
    public:
    reflector();
    reflector(Reflector reflector_choosed);
    ~reflector();
    void import_alphabet(char selected_reflector[]);
    void set_alphabet();
    char substitute(char letter);

    private:
    char alphabet[26];
    Reflector model;
};

#endif // REFLECTOR_H
