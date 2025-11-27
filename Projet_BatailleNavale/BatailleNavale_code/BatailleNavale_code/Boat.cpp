#include "Boat.h"

Boat::Boat(string name, int length) {
	this->name = name;
	this->length = length;
	alive = true;
	this->nbr_touche = 0;

	direction = false;
	x = -10;
	y = -10;
}


void Boat::setPosition(int x, int y, bool direction) {
	positions.clear();

	this->x = x;
	this->y = y;
	this->direction = direction;

	vector<int> temp;
	for (int i = 0; i < length; i++) {
		if (direction) {
				temp.push_back(x);
				temp.push_back(y + i);
		}
		else {
			temp.push_back(x + i);
			temp.push_back(y);
		}

	}

}



bool Boat::getAlive() const {
	return alive;
}

int Boat::getLength() const {
	return length;
}

int Boat::getX() const {
	return x;
}

int Boat::getY() const {
	return y;
}


bool Boat::getDirection() const {
	return direction;
}

string Boat::getName() const {
	return name;
}

void Boat::buildPosVector() {
	positions.clear();
	vector<int> currentPos(2);;

	for (int i = 0; i < length; i++) {
		if (direction) {//déploiement vertical, donc on défile vers le bas
			currentPos[0] = x;
			currentPos[1] = y - i;
		}
		else {//déploiement horizontal, on défile vers la droite
			currentPos[0] = x + i;
			currentPos[1] = y;
		}
		positions.push_back(currentPos);
	}
}