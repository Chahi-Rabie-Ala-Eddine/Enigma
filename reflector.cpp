#include "reflector.h"

reflector::reflector()
{

}
reflector::reflector(Reflector reflector_choosed)
{
    this->model = reflector_choosed;
}
reflector::~reflector()
{

}
void reflector::import_alphabet(char selected_reflector[])
{
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = selected_reflector[i];
    }
}
void reflector::set_alphabet()
{
    switch (model)
    {
        case 1:
            import_alphabet(reflect_one);
            break;
        case 2:
            import_alphabet(reflect_two);
            break;
    }
}
char reflector::substitute(char letter)
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
