#include <string>
#include "Ordi.h"
#include <random>
using namespace std;

void Ordi::joue() {
	if (etat == "cherche") {
		int x = rand() % 5 + 5 * cadran%2;
		int y = rand() % 5 + 5 * cadran/2;
		cadran = (cadran+1)%4;
	}
	if (etat == "calibrage") {
		calibrageNum = (calibrageNum + 1) % 4;
		if (calibrageNum == 0) {
			int x = oldx + 1;
			int y = oldy;
		}
		if (calibrageNum == 1) {
			int x = oldx;
			int y = oldy + 1;
		}
		if (calibrageNum == 2) {
			int x = oldx - 1;
			int y = oldy;
		}
		if (calibrageNum == 3) {
			int x = oldx;
			int y = oldy - 1;
		}

	}
	if (etat == "extermination") {
		if (calibrageNum == 0) {
			int x = oldx + 1;
			int y = oldy;
		}
		if (calibrageNum == 1) {
			int x = oldx;
			int y = oldy + 1;
		}
		if (calibrageNum == 2) {
			int x = oldx - 1;
			int y = oldy;
		}
		if (calibrageNum == 3) {
			int x = oldx;
			int y = oldy - 1;
		}

	}
	if (etat == "finalisation") {

	}

}
