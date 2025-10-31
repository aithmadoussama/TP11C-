#include <iostream>
using namespace std;

class paiement {
public:
    virtual void effectuerpaiement(double montant) const = 0;
    virtual ~paiement() {}
};

class paiementcarte : public paiement {
public:
    void effectuerpaiement(double montant) const override {
        cout << "paiement de " << montant << " dh par carte bancaire." << endl;
    }
};

class paiementespece : public paiement {
public:
    void effectuerpaiement(double montant) const override {
        cout << "paiement de " << montant << " dh en especes." << endl;
    }
};

int main() {
    paiement* tab[2];
    tab[0] = new paiementcarte();
    tab[1] = new paiementespece();

    tab[0]->effectuerpaiement(150.5);
    tab[1]->effectuerpaiement(80);

    delete tab[0];
    delete tab[1];
    return 0;
}
