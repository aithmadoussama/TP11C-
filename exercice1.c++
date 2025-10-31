#include <iostream>
#include <string>
using namespace std;

class Forme
{
public:
    virtual float aire() const = 0;
    Forme() {}
    virtual ~Forme() {}
};

class Cercle : public Forme
{
public:
    float rayon;
    Cercle(float rayon) : rayon(rayon) {}
    float aire() const override
    {
        return rayon * rayon * 3.14;
    }
};

class Rectangle : public Forme
{
public:
    float longueur;
    float largeur;
    Rectangle(float lo, float la) : longueur(lo), largeur(la) {}
    float aire() const override
    {
        return longueur * largeur;
    }
};

int main() {
    int taille;
    cout << "nombre de formes: ";
    cin >> taille;

    Forme** tab = new Forme*[taille];

    cout << "1 -> cercle\n2 -> rectangle\n";

    for (int i = 0; i < taille; i++) {
        int choix;
        cout << "type de la forme #" << i + 1 << ": ";
        cin >> choix;

        if (choix == 1) {
            float rayon;
            cout << "rayon: ";
            cin >> rayon;
            tab[i] = new Cercle(rayon);
        } else {
            float longueur, largeur;
            cout << "longueur: ";
            cin >> longueur;
            cout << "largeur: ";
            cin >> largeur;
            tab[i] = new Rectangle(longueur, largeur);
        }
    }

    for (int i = 0; i < taille; i++) {
        cout << "aire de la forme #" << i + 1 << ": " << tab[i]->aire() << endl;
    }

    for (int i = 0; i < taille; i++) {
        delete tab[i];
    }
    delete[] tab;

    return 0;
}
