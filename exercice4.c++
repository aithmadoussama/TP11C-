#include <iostream>
#include <vector>
#include <string>
using namespace std;

class noeudfichier {
public:
    virtual string nom() const = 0;
    virtual int taille() const = 0;
    virtual ~noeudfichier() {}
};

class fichier : public noeudfichier {
    string n;
    int t;
public:
    fichier(const string& nom, int taille) : n(nom), t(taille) {}
    string nom() const override { return n; }
    int taille() const override { return t; }
};

class dossier : public noeudfichier {
    string n;
    vector<noeudfichier*> enfants;
public:
    dossier(const string& nom) : n(nom) {}
    void ajouter(noeudfichier* e) { enfants.push_back(e); }
    string nom() const override { return n; }
    int taille() const override {
        int total = 0;
        for (auto e : enfants) total += e->taille();
        return total;
    }
    ~dossier() {
        for (auto e : enfants) delete e;
    }
};

int main() {
    dossier* racine = new dossier("racine");

    fichier* f1 = new fichier("cv.txt", 10);
    fichier* f2 = new fichier("photo.png", 50);
    dossier* sous = new dossier("documents");
    sous->ajouter(new fichier("note.txt", 5));
    sous->ajouter(new fichier("rapport.pdf", 20));

    racine->ajouter(f1);
    racine->ajouter(f2);
    racine->ajouter(sous);

    cout << "taille totale du dossier racine : " << racine->taille() << " ko" << endl;

    delete racine;
    return 0;
}
