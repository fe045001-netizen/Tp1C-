#include <iostream>
#include <string>
using namespace std;


class Livre {
private:
    string titre;
    string auteur;
    int anneePublication;

public:

    void definirLivre(string t, string a, int annee);

    void afficher();

    int getAnneePublication();
};


void Livre::definirLivre(string t, string a, int annee) {
    titre = t;
    auteur = a;
    anneePublication = annee;
}

void Livre::afficher() {
    cout << "Titre : " << titre
         << ", Auteur : " << auteur
         << ", Année : " << anneePublication << endl;
}

int Livre::getAnneePublication() {
    return anneePublication;
}

int main() {
    Livre livre1, livre2;

    livre1.definirLivre("Le C++ Moderne", "Bjarne Stroustrup", 2013);
    livre2.definirLivre("Programmation Orientée Objet", "Jean Dupont", 2020);

    livre1.afficher();
    livre2.afficher();

    return 0;
}
