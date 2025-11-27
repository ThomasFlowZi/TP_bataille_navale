#include "Case.h"

Case::Case() {
	occupied = false;
}

bool Case::getOccupied() {
	return occupied;
}

void Case::setOccupied(bool oc) {
	occupied = oc;
}

void Case::killCase() {
	occupied = false;
}