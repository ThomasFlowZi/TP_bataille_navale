#pragma once

# include "Boat.h"
# include <vector>

using namespace std;

class Joueur
{
private:
	int ordre;

	vector<Boat*> boats;

public:
	Joueur(int o);
};

