#pragma once

# include <vector>

# include "Case.h"

using namespace std;

class Plateau
{
private:
	int size;	// Le plateau est de taille size*size
	vector<vector<Case>> tab;
public:
	Plateau(int size);


};

