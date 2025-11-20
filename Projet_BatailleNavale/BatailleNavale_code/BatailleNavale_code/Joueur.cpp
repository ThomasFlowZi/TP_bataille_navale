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