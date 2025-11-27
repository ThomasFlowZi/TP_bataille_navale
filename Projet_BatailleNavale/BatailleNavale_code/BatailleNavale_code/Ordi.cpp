#include <string>
#include "Ordi.h"
#include <random>
using namespace std;

void Ordi::joue(vector<vector<bool>> config) {
	int x = 0;
	int y = 0;
	if (etat == "cherche") {
		x = rand() % 5 + 5 * cadran % 2;
		y = rand() % 5 + 5 * cadran / 2;
		cadran = (cadran + 1) % 4;
	}
	if (etat == "calibrage") {
		calibrageNum = (calibrageNum + 1) % 4;
		if (calibrageNum == 0) {
			x = oldx + 1;
			y = oldy;
		}
		if (calibrageNum == 1) {
			x = oldx;
			y = oldy + 1;
		}
		if (calibrageNum == 2) {
			x = oldx - 1;
			y = oldy;
		}
		if (calibrageNum == 3) {
			x = oldx;
			y = oldy - 1;
		}

	}
	if (etat == "extermination") {
		if (calibrageNum == 0) {
			x = oldx + 1;
			y = oldy;
		}
		if (calibrageNum == 1) {
			x = oldx;
			y = oldy + 1;
		}
		if (calibrageNum == 2) {
			x = oldx - 1;
			y = oldy;
		}
		if (calibrageNum == 3) {
			x = oldx;
			y = oldy - 1;
		}

	}
	if (etat == "finalisation") {
		// on parcours le bateau en revenant en arriere sans modifier calibrageNum
		if (calibrageNum == 0) {
			x = oldx - 1;
			y = oldy;
		}
		if (calibrageNum == 1) {
			x = oldx;
			y = oldy - 1;
		}
		if (calibrageNum == 2) {
			x = oldx + 1;
			y = oldy;
		}
		if (calibrageNum == 3) {
			x = oldx;
			y = oldy + 1;
		}
	}
	oldx = x;
	oldy = y;
	if (etat_plateau[oldx][oldy] == 0 && config[oldx][oldy]) {
		etat_plateau[oldx][oldy] = 1;
	}
	changement_etat();
}

void Ordi::changement_etat() {

	if (touchecoule) {
		if (futures_cases.size() != 0) {
			oldx = futures_cases[-1][0];
			oldy = futures_cases[-1][1];
			futures_cases.pop_back();
			etat = "calibrage";
		}
		else {
			etat = "cherche";
		}
	}
	else if (etat == "cherche" && etat_plateau[oldx][oldy] == 1) {
		etat = "calibrage";
	}
	else if (etat == "calibrage" && etat_plateau[oldx][oldy] == 1) {
		etat = "extermination";
	}
	else if (etat == "extermination" && etat_plateau[oldx][oldy] != 1) {
		etat = "finalisation";
	}
	else if (etat == "finalisation" && etat_plateau[oldx][oldy] != 1) {
		int x;
		int y;
		for (int i = 0; i < nbtouche; i++) {
			if (calibrageNum == 0) {
				x = oldx + 1;
				y = oldy;
			}
			if (calibrageNum == 1) {
				x = oldx;
				y = oldy + 1;
			}
			if (calibrageNum == 2) {
				x = oldx - 1;
				y = oldy;
			}
			if (calibrageNum == 3) {
				x = oldx;
				y = oldy - 1;
			}
			vector<int> case_ajoute;
			case_ajoute.push_back(x);
			case_ajoute.push_back(y);
			futures_cases.push_back(case_ajoute);
			oldx = x;
			oldy = y;
		}
		oldx = futures_cases[-1][0];
		oldy = futures_cases[-1][1];
		futures_cases.pop_back();
		etat = "calibrage";
	}

	etat_plateau[oldx][oldy] = 2;
}

void Ordi::setToucheCoule(bool tc) {
	touchecoule = tc;
}
