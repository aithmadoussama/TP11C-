# TP 11 : Classes Abstraites et Interfaces
## Objectifs :
- Implémenter une hiérarchie de formes géométriques avec une méthode virtuelle pure.
- Simuler une interface d’abstraction pour différents moyens de paiement.
- Utiliser des classes abstraites pour généraliser des comportements animaux.
- Simuler une interface de gestion de fichiers avec abstraction.

## Exercice 1 : Formes géométriques
### Contexe :
- Créer une classe abstraite Forme avec une méthode pure double aire() const. Créer ensuite deux classes dérivées :

  - Cercle (attribut rayon)
  - Rectangle (attributs longueur et largeur)
- Demander à l’utilisateur de saisir les dimensions des formes, les stocker dans un tableau de pointeurs vers Forme et afficher les aires.
### Résultat attendu : 
<img width="1041" height="340" alt="Capture d’écran du 2025-10-31 20-12-20" src="https://github.com/user-attachments/assets/6c9da6e5-f3e3-4630-a6c0-a93f0f41566b" />

## Exercice 2 : Interface de paiement
### Contexe :
- Définir une classe abstraite Paiement avec une méthode pure effectuerPaiement(double montant). Implémenter les classes suivantes :

  - PaiementCarte : affiche "Paiement de X DH par carte bancaire."
  - PaiementEspece : affiche "Paiement de X DH en espèces."
- Créer un tableau de pointeurs vers Paiement, le remplir avec différentes instances, et simuler plusieurs paiements en utilisant le polymorphisme.
### Résultat attendu : 
<img width="1003" height="197" alt="Capture d’écran du 2025-10-31 20-13-02" src="https://github.com/user-attachments/assets/16cbf876-a96c-422b-b9b9-0b32293162b7" />

## Exercice 3 : Gestion d’animaux
### Contexe 
- Créer une classe abstraite Animal contenant :

  - une méthode pure void crier() const
  - une méthode void info() const (non abstraite) qui affiche "Je suis un animal."
Créer des classes concrètes :

  - Chien : affiche "Wouf !"
  - Chat : affiche "Miaou !"
  - Vache : affiche "Meuh !"
- Instancier différents animaux, les stocker dans un vecteur de pointeurs vers Animal et faire appel aux méthodes.
### Résultat attendu :
<img width="1003" height="326" alt="Capture d’écran du 2025-10-31 20-13-37" src="https://github.com/user-attachments/assets/b436d4dd-92da-441f-bf85-b41149b64a84" />

## Exercice 4 : Système de fichiers virtuel
### Contexe 
- Définir une classe abstraite NoeudFichier avec les méthodes suivantes :

  - std::string nom() const
  - int taille() const (méthode pure)
- Implémenter :

  - une classe Fichier (nom, taille)
  - une classe Dossier contenant une liste de NoeudFichier* (fichiers et sous-dossiers), dont la taille est la somme des tailles de ses enfants.
- Permettre à l’utilisateur de créer une structure hiérarchique de fichiers et de dossiers, puis d’afficher la taille totale d’un dossier sélectionné.
### Résultat attendu :
<img width="1003" height="173" alt="Capture d’écran du 2025-10-31 20-14-15" src="https://github.com/user-attachments/assets/06991917-154b-46f2-b0f9-c05290ecd7f1" />
