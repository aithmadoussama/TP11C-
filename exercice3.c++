#include <iostream>
#include <vector>
using namespace std;

class animal {
public:
    virtual void crier() const = 0;
    void info() const {
        cout << "je suis un animal." << endl;
    }
    virtual ~animal() {}
};

class chien : public animal {
public:
    void crier() const override {
        cout << "wouf !" << endl;
    }
};

class chat : public animal {
public:
    void crier() const override {
        cout << "miaou !" << endl;
    }
};

class vache : public animal {
public:
    void crier() const override {
        cout << "meuh !" << endl;
    }
};

int main() {
    vector<animal*> animaux;
    animaux.push_back(new chien());
    animaux.push_back(new chat());
    animaux.push_back(new vache());

    for (auto a : animaux) {
        a->info();
        a->crier();
    }

    for (auto a : animaux) {
        delete a;
    }
    return 0;
}
