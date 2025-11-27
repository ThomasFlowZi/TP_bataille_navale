#pragma once
#include <string>
#include "Joueur.h"

using namespace std;

class Ordi : public Joueur
{
	string etat;
	int calibrageNum;
	int cadran;
	int oldx;
	int oldy;
	
public:
	Ordi(int o, int ox, int oy, string e = "cherche", int cB=0, int c=0) : Joueur(o), etat(e), calibrageNum(cB), cadran(c), oldx(ox), oldy(oy) {}
	void joue();
};

