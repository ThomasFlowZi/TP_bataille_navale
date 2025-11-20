#include "Case.h"

Case::Case() {
	alive = true;
}

bool Case::getAlive() const {
	return alive;
}

void Case::setAlive(bool alive) {
	this->alive = alive;
}

void Case::killCase() {
	alive = false;
}