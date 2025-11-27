#pragma once
class Case
{
private:
	bool occupied ;
public:
	Case();

	bool getOccupied() ;

	void setOccupied(bool oc);
	void killCase();

};

