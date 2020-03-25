#include <iostream>
#include <string>
#include "ui.h"

using namespace std;

UI::UI() {
	this->ctrl;
}

UI::~UI() {

}

//ui pentru adaugare
void UI::adauga(Controller &ctrl) {
	int nr, s;
	string t;
	cout << "Dati noOfBranches:\n";
	cin >> nr;
	cout << "Dati totalNoOfCommits:\n";
	cin >> s;
	cout << "Dati gitPath:\n";
	cin >> t;
	
	Entitate e(nr, s, t);
	ctrl.adauga(e);
}

//ui pt inserare
void UI::insereaza(Controller &ctrl) {
	int nr, s;
	string t;
	cout << "Dati noOfBranches:\n";
	cin >> nr;
	cout << "Dati totalNoOfCommits:\n";
	cin >> s;
	cout << "Dati gitPath:\n";
	cin >> t;

	Entitate e(nr, s, t);
	ctrl.insert(e);

}

//afiseaza toate elem din vector
void UI::afisareAll(Controller &ctrl) {
	vector<Entitate> chelt = ctrl.getAll();
	for (int i = 0; i < chelt.size(); i++) {
		chelt[i].afisare();
		cout << endl;
	}
}
void UI::afisareAll1(Controller &ctrl) {
	vector<Entitate> chelt = ctrl.getAll();
	for (int i = 0; i < chelt.size() - 1; i++) {
		chelt[i].afisare();
		cout << endl;
	}
}

//incarca elemente
void UI::incarcaElemente(Controller &ctrl) {
	ctrl.incarcaElemente();
}

//afisare pentru toate cheltuielile
void UI::afisareChelt(Controller &ctrl) {
	vector<Entitate> chelt = ctrl.getAll();
	for (int i = 0; i < chelt.size(); i++) {
		chelt[i].afisare();
		cout << endl;
	}
}

//ia input de la tastatura pt o optiune din meniu
string UI::getinput() {
	string choice;
	cin >> choice;
	return choice;
}

//afisarea meniului
void UI::afisaremeniu()
{
	cout << "Meniul:\n";
	cout << "Alegeti o optiune\n";
	cout << "1 - Pentru a adauga scrie: adauga \n";
	cout << "2 - Pentru a adauga insera scrie: insereaza \n";
	cout << "3 - Pentru a inlocui scrie: inlocuieste \n";
	cout << "4 - Pentru a afisa scrie: afisare \n";
	cout << "5 - Pentru a sterge scrie: sterge \n";
	cout << "6 - Pentru a filtra scrie: filtru \n";
	cout << "7 - Pentru a face undo scrie: undo \n";
	cout << "8 - Pentru a iesi din aplicatie: exit \n";
}