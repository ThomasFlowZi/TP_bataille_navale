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

