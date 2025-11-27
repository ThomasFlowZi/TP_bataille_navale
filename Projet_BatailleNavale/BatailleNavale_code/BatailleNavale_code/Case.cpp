#include "Case.h"

Case::Case() {
	status = 0;
}

int Case::getStatus() {
	return status;
}

void Case::setStatus(int stat) {
	status = stat;
}

void Case::killCase() {
	status = 0;
}