#pragma once
#include <string>
#include "Joueur.h"

using namespace std;

class Ordi : public Joueur
{
	string etat; // Defini l'etat actuelle: ...
	int calibrageNum; // defini la case dans laquelle on va tenter de tirer apres avoir touche une premiere fois
	int cadran; //Defini la zone où on va chercher un bateau si on est dans l'état cherche
	int oldx; // ancienne touche
	int oldy; // ancienne touche
	int nbtouche; // nombre de touche. Utile quand il y a des bateaux collés.
	bool touchecoule; //indique si on vient de touche coule un bateau au tour d'avant
	vector<vector<int>> futures_cases; //contient les futures cases a explorer si on est rentre dans le cas ou on a 2 bateau colles
	vector<vector<int>> etat_plateau; //contient l'état de chaque case du point de vue de l'ordi.
	//etat plateau contient des 0,1,2: 0 = case jamais touche mais vide ; 1 = case jamais touche mais avec un bateau; 2 = case deja touche


public:
	Ordi(int o, int ox, int oy, string e = "cherche", int cB = 0, int c = 0) : Joueur(o), etat(e), calibrageNum(cB), cadran(c), oldx(ox), oldy(oy) {}
	void joue(vector<vector<bool>> config);
	void changement_etat();
	void setToucheCoule(bool tc);
};