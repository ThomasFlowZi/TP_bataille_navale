#include <iostream>


# include "Joueur.h";
# include "Plateau.h";

static void Fill_plateau(Joueur a, Plateau& pa)
{
	bool boatValid = false;
	int placementX;
	int placementY;
	int placementDirection;

	int tempX;
	int tempY;
	// Placement des bâteaux joueur A
	for (int i = 0; i < a.getBoats().size(); i++) {

		pa.affiche();
		boatValid = false;
		cout << endl;


		while (boatValid == false) {
			cout << "Position du bateau en x : " << a.getBoats()[i]->getName() << " ( " << a.getBoats()[i]->getLength() << " cases )" << endl;
			cin >> placementX;

			cout << "Position du bateau en y : " << a.getBoats()[i]->getName() << " ( " << a.getBoats()[i]->getLength() << " cases )" << endl;
			cin >> placementY;

			cout << "Direction du bateau (0 : Vertical / 1 = Horizontal) : " << a.getBoats()[i]->getName() << " ( " << a.getBoats()[i]->getLength() << " cases )" << endl;
			cin >> placementDirection;

			boatValid = true;

			// On vérifie si il est bien dans le plateau et que les bateaux ne se chevauchent pas



			for (int c = 0; c < a.getBoats()[i]->getLength(); c++) {
				if (placementDirection == 0) {
					tempX = placementX + c;
					tempY = placementY;
				}
				else {
					tempX = placementX;
					tempY = placementY + c;
				}

				if (tempX >= 0 && tempX < pa.getSize() && tempY >= 0 && tempY < pa.getSize() && (pa.getTab()[tempX][tempY].getStatus())==0) {
					boatValid = true;
				}
				else {
					boatValid = false;
					cout << " tu ne peux pas placer le bateau ici ! reessaye" << endl;
					break;
				}

			}

			// On place le bateau sur la grille et on remplir les positions du bateau

			if (boatValid == true)
			{

				for (int c = 0; c < a.getBoats()[i]->getLength(); c++) {
					if (placementDirection == 0) {
						tempX = placementX + c;
						tempY = placementY;
					}
					else {
						tempX = placementX;
						tempY = placementY + c;
					}
					pa.getTab()[tempX][tempY].setStatus(1);
					a.getBoats()[i]->setPosition(placementX, placementY, placementDirection);
					
				}
			cout << "ton bateau est en place !" << endl<<endl<<endl;
			}


		}

	}

}

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

	
	Fill_plateau(a, pa);

	pa.affiche();
	a.affiche();
	



}


