#include "Joueur.h"

Joueur::Joueur(int o) {
	ordre = o;

	boats.push_back(new PorteAvion());
	boats.push_back(new Croiseur());
	boats.push_back(new ContreTorpilleur());
	boats.push_back(new SousMarin());
	boats.push_back(new Torpilleur());

}

vector<Boat*> Joueur::getBoats() {
	return boats;
}

<<<<<<< Updated upstream
void Joueur::joue() {
	int x, y;
	bool invalidCoordinates = true;
	cout << "c'est a votre tour de jouer" << endl;
	while(invalidCoordinates){
		cout << "choix des coordonnes de tir, entrer deux entiers (ligne puis colonne)" << endl;
		cin >> x;
		cin >> y;
		if ((x < 11) && (y < 11) && (x > 0) && (y > 0)) { invalidCoordinates = false; }
		else { cout << "coordonees erronees" << endl; }
	}
	

	cout << "x = " << x << " ; y = " << y << endl;
}
=======
void Joueur::affiche()
{
	for (auto it : boats)
	{
		cout << " votre bateau : " << it->getName() << " de taille : " << it->getLength() << " a comme position de tete : ( " << it->getHead()[0] << " , " << it->getHead()[1] << " ) et a ete touche : " << it->getTouche() << " fois" << endl;

	}

}
>>>>>>> Stashed changes
