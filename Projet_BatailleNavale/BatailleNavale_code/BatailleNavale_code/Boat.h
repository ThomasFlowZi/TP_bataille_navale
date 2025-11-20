#pragma once

# include <iostream>
# include <string>

using namespace std;

class Boat
{
private:

	string name;
	bool alive;
	int length;

	bool direction;		// Direction : 0 = horizontal / 1 = Vertical

	int x;
	int y;

public:

	Boat(string name, int l);

	void setPosition(int x, int y, bool direction);

	bool getAlive() const;
	int getLength() const;

	int getX() const;
	int getY() const;
	bool getDirection() const;


};

