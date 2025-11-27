#pragma once

# include "Boat.h"
# include <vector>

# include "PorteAvion.h"
# include "ContreTorpilleur.h"
# include "Croiseur.h";
# include "SousMarin.h";
# include "Torpilleur.h";

using namespace std;

class Joueur
{
private:
	int ordre;

	vector<Boat*> boats;

public:
	Joueur(int o);

	vector<Boat*> getBoats();

	void joue();
};

