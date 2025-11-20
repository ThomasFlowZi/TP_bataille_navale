#include <iostream>


# include "Joueur.h";
# include "Plateau.h";

int main()
{
	srand(time(NULL));

	int PLATEAU_SIZE = 10;

	int order = rand() % 2;

	cout << order << endl;

	Joueur a(order);
	Joueur b(1-order);

	Plateau pa(PLATEAU_SIZE);
	Plateau pb(PLATEAU_SIZE);

	bool boatValid = false;
	int placementX;
	int placementY;
	int placementDirection;

	int tempX;
	int tempY;
	// Placement des bâteaux joueur A
	for (int i = 0; a.getBoats().size(); i++) {

		while (boatValid == false) {
			cout << "Position du bateau en x : " << a.getBoats()[i]->getName() << " ( " << a.getBoats()[i]->getLength() << " cases )" << endl;
			cin >> placementX;

			cout << "Position du bateau en y : " << a.getBoats()[i]->getName() << " ( " << a.getBoats()[i]->getLength() << " cases )" << endl;
			cin >> placementY;

			cout << "Direction du bateau (0 : Horizontal / 1 = Vertical) : " << a.getBoats()[i]->getName() << " ( " << a.getBoats()[i]->getLength() << " cases )" << endl;
			cin >> placementDirection;

			boatValid = true;

			// On vérifie si il est bien dans le plateau dans un premier temps
			for (int c = 0; c < a.getBoats()[i]->getLength(); c++) {
				if (placementDirection == 0) {
					tempX = placementX + c;
					tempY = placementY;
				}
				else {
					tempX = placementX;
					tempY = placementY + c;
				}

				if (tempX >= 0 && tempX < PLATEAU_SIZE && tempY >= 0 && tempY < PLATEAU_SIZE) {
					// Valid
				}
				else {
					boatValid = false;
				}

			}


		}

	}



 

}

