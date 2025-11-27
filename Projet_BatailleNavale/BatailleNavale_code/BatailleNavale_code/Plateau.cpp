#include "Plateau.h"

Plateau::Plateau(int size) {
	this->size = size;

	for (int i = 0; i < size; i++) {
		vector<Case> temp;

		for (int j = 0; j < size; j++) {
			temp.push_back(Case());
		}

		this->tab.push_back(temp);
	}
}

vector<vector<Case>>& Plateau::getTab()
{
	return tab;
}

void Plateau::affiche()
{
	cout << "|X/Y| ";
	for (int i = 0; i < size; i++)
	{
		cout << i << " | ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "| " << i << " | ";
		for (int j = 0; j < size; j++) {
			cout << tab[i][j].getOccupied() << " | ";
		}
		cout << endl;
	}
}


