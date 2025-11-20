#pragma once
class Case
{
private:
	bool alive;
public:
	Case();

	bool getAlive() const;

	void setAlive(bool alive);
	void killCase();

};

