#pragma once
class Case
{
private:
	int status ;//vide=0, intact=1,touché=2
public:
	Case();

	int getStatus() ;

	void setStatus(int stat);
	void killCase();

};

