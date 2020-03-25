#include "entitate.h"
#include "Repo.h"
#include "teste.h"
#include "Controller.h"
#include "UI.h"

using namespace std;


int main() {
	test3();
	int n;
	string c;
	UI u;
	Controller ctrl;
	u.incarcaElemente(ctrl);
	u.afisareAll(ctrl);
	bool stop = false;
	while (stop == false) {
		u.afisaremeniu();
		c = u.getinput();
		if (c == "adauga") {
			u.adauga(ctrl);
			u.afisareAll(ctrl);

		}
		else
			if (c == "undo")
			{
				u.afisareAll1(ctrl);
			}
		if (c == "insereaza") {
			u.insereaza(ctrl);
			u.afisareAll(ctrl);
		}

		if (c == "inlocuieste") {
			ctrl.replace();
			u.afisareAll(ctrl);
		}
		if (c == "afisare") {
			u.afisareChelt (ctrl);

		}
		if (c == "sterge") {
			ctrl.delete1();
			u.afisareAll(ctrl);
			//ctrl.undo();
		}
		
		if (c == "filtru") {
			//ctrl.filtrare();
			ctrl.filtrare3();
			ctrl.filtrare2();
			ctrl.filtrareint();
		}
		if (c == "undo") {
			ctrl.undo();
			u.afisareAll(ctrl);
		}
		if (c == "exit") {
			stop = true;
		}

	}
	return 0;
}
