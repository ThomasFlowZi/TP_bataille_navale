#pragma once

# include <vector>
#include <iostream>
using namespace std;
# include "Case.h"

using namespace std;

class Plateau
{
private:
	int size;	// Le plateau est de taille size*size
	vector<vector<Case>> tab;
public:
	Plateau(int size);
	vector<vector<Case>>& getTab();
	void affiche();
	
	int getSize() { return size; };

};

