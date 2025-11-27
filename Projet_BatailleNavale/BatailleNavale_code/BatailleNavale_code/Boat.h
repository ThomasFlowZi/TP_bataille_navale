#pragma once

# include <iostream>
# include <string>
# include <vector>

using namespace std;

class Boat
{
private:

	string name;
	bool alive;
	int length;
	int nbr_touche;

	bool direction;		// Direction : 0 = horizontal / 1 = Vertical

	int x;
	int y;

	vector<vector<int>> positions;

public:

	Boat(string name, int l);

	void setPosition(int x, int y, bool direction);

	bool getAlive() const;
	int getLength() const;

	int getX() const;
	int getY() const;
	bool getDirection() const;

	int getTouche() const { return nbr_touche; };
	void addTouche()  {nbr_touche+=1; };

	vector<vector<int>> getPosition() {
		return positions;
	}

	vector<int> getHead() { vector<int> head = { x,y }; return head; }


	string getName() const;

	void buildPosVector();

};

