#include "Boat.h"

Boat::Boat(string name, int length) {
	this->name = name;
	this->length = length;
	alive = true;

	direction = false;
	x = -10;
	y = -10;
}


void Boat::setPosition(int x, int y, bool direction) {
	this->x = x;
	this->y = y;
	this->direction = direction;
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