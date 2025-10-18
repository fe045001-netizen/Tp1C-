#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    string titulaire;
    double solde;

public:
 
    CompteBancaire() : solde(0.0) {}

    void definirTitulaire(string nom);
    void depot(double montant);
    void retrait(double montant);
    void afficher();
};
void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    if (montant > 0) {
        solde += montant;
        cout << "Solde apres depot : " << solde << endl;
    } else {
        cout << "Montant de dépôt invalide !" << endl;
    }
}

void CompteBancaire::retrait(double montant) {
    if (montant <= 0) {
        cout << "Montant de retrait invalide !" << endl;
    } else if (montant > solde) {
        cout << "Solde insuffisant pour le retrait !" << endl;
    } else {
        solde -= montant;
        cout << "Solde apres retrait : " << solde << endl;
    }
}

void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
}


int main() {
    CompteBancaire compte1;

    compte1.definirTitulaire("Mohamed Lachgar");
    compte1.afficher();        
    compte1.depot(500.0);      
    compte1.retrait(200.0);   

    return 0;
}




