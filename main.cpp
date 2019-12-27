#include <iostream>
#include <constants.h>
#include <rotor.h>
#include <conduct.h>
#include <enigma.h>
#include <cstring>

using namespace std;

int main(void)
{

    //IL FAUT UTILISER DES LETTRES MAJUCULES JE VAIS IMPLEMENTER LA GESTION DU TEXTE PLUS TARD DANS WORD_PROCESSOR
    //J'AI PAS PUSH LE CHOIX DES POSITION DE DÉPART DU ROTOR J'AI OUBLIÉ

    Rotor* r1 = new Rotor(Rotor_un);
    Rotor* r2 = new Rotor(Rotor_deux);
    Rotor* r3 = new Rotor(Rotor_trois);
    reflector* R = new reflector(Reflector_one);
    R->set_alphabet();
    r1->set_alphabet();
    r2->set_alphabet();
    r3->set_alphabet();
    Connexion_table* T = new Connexion_table();
    T->Add_permutation('A','F');
    T->Add_permutation('C','X');
    T->Add_permutation('Y','D');
    T->Add_permutation('J','E');
    T->Add_permutation('B','I');
    T->Add_permutation('H','J');
    T->Add_permutation('M','K');
    T->Add_permutation('L','G');
    T->Add_permutation('P','N');
    T->Add_permutation('O','R');

    Rotor* ro = new Rotor(Rotor_un);
    Rotor* rot = new Rotor(Rotor_deux);
    Rotor* roto = new Rotor(Rotor_trois);
    reflector* Ref = new reflector(Reflector_one);
    Ref->set_alphabet();
    ro->set_alphabet();
    rot->set_alphabet();
    roto->set_alphabet();
    Connexion_table* Ta = new Connexion_table();
    Ta->Add_permutation('A','F');
    Ta->Add_permutation('C','X');
    Ta->Add_permutation('Y','D');
    Ta->Add_permutation('J','E');
    Ta->Add_permutation('B','I');
    Ta->Add_permutation('H','J');
    Ta->Add_permutation('M','K');
    Ta->Add_permutation('L','G');
    Ta->Add_permutation('P','N');
    Ta->Add_permutation('O','R');

    enigma* e1 = new enigma(r1,r2,r3,R,T);
    enigma* e2 = new enigma(ro,rot,roto,Ref,Ta);

    string CLAIR = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string CHIFFRE =  "OMDZVICPSARHPOPQWHDZFIXRNAJPBEBGMVFNUOECYKJNLHBEMIXPRYKPSNUYQTOVJUIHKQRNQOSGKVDUWCXZJENYMAOPWUSLUVWCDVWI";
    e1->cypher(CLAIR);
    e2->cypher(CHIFFRE);

    return 0;
}
