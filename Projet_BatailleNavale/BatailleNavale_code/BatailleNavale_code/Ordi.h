#pragma once
#include <string>
#include "Joueur.h"

using namespace std;

class Ordi : public Joueur
{
	string etat;
	int calibrageNum;
	bool cadranx;
	bool cadrany;
	int oldx;
	int oldy;
	
public:
	Ordi(int o, int ox, int oy, string e = "cherche", int cB=0, bool cx=0, bool cy=0) : Joueur(o), etat(e), calibrageNum(cB), cadranx(cx), cadrany(cy), oldx(ox), oldy(oy) {}
	void joue();
};

