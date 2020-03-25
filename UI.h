#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>
#include "Controller.h"

using namespace std;

class UI {
private:
	Controller ctrl;
public:
	UI();
	~UI();
	void adauga(Controller &ctrl);
	void insereaza(Controller &ctrl);
	void afisareAll(Controller &ctrl);
	void afisareAll1(Controller &ctrl);
	void incarcaElemente(Controller &ctrl);
	void afisareChelt(Controller &ctrl);
	string getinput();
	void afisaremeniu();

};

#endif
