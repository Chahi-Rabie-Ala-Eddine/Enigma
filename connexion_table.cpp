#include <iostream>
#include "connexion_table.h"

using namespace std;

//Constructeur de la table de connexion
Connexion_table::Connexion_table()
{
    for(int i=0;i<10;i++){ //zyada
        Table[i].Letter1='-';
        Table[i].Letter2='-';
    }
    Taille=0;
}
//Modifer le nombre de substitution émises
void Connexion_table::setTaille(int taille)
{
    this->Taille=taille;
}
//Avoir le nombre de substitution émises
int Connexion_table::getTaille()
{
    return Taille;
}
//Décrire les différents substitution
void Connexion_table::toString(){
    for(int i=0; i<10 ;i++)
    {
        cout<<"( "<<Table[i].Letter1<<" , "<<Table[i].Letter2<<" )"<<endl;
    }
}
//Destructeur de la table de connexion
Connexion_table::~Connexion_table()
{
    //dtor
}
//Ajouter une permutation au tableau des permutation
bool Connexion_table::Add_permutation(char a,char b){
//verifie si le nombre de permutations < 10
//verifie si les lettres ne sont pas déja liés
//insere le couple de lettre
    if (!(getTaille() <10) || a==b)   {/*cout<<"Table de connexion remplie || Attention !! les lettres doivent etre differentes "<<endl;*/ return false;}
    else{   for(int i=0; i<getTaille();i++)
            {
                if (Table[i].Letter1 == a || Table[i].Letter1 == b || Table[i].Letter2 == a || Table[i].Letter2 == b)
                    {   //cout<<"la lettre est déja liée "<<endl;
                        return false;
                    }
            }
            Table[getTaille()].Letter1=a;
            Table[getTaille()].Letter2=b;
            setTaille(getTaille()+1);

            return true;
        }
}
//Supprimer une permutation du tableau des permutation
bool Connexion_table::delete_permutation(char a,char b){
//verifie si le couple existe
//supprimer le couple (a,b)

   for(int i=0; i<getTaille();i++)
            {
                if ((Table[i].Letter1 == a && Table[i].Letter2 == b) || ( Table[i].Letter1 == b && Table[i].Letter2 == a ) )
                    {

                        for(int j=i ;j<getTaille();j++){
                            Table[j]=Table[j+1];
                        }

                        setTaille(getTaille()-1);
                        Table[getTaille()].Letter1='-';
                        Table[getTaille()].Letter2='-';
                        return true;
                    }
            }

    return false;
}
//Effectuer la permutation entre deux caractères
char Connexion_table::permute(char c){
    for(int i=0 ; i < getTaille() ; i++)
    {
        if(Table[i].Letter1 == c ) { c = Table[i].Letter2;  i=10; }
        if(Table[i].Letter2 == c ) { c=Table[i].Letter1;   i=10; }
       //le i=10 est une condition pour sortir de la boucle dés que la lettre est permuté
    }

    return c;
}

