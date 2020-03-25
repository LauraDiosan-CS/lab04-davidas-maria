#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <string>
#include "Repo.h"
using std::vector;

using namespace std;

class Controller
{
private:
	Repo rep;
	vector < Repo> undoList;
public:
	Controller();
	~Controller();
	void adauga(Entitate &e);
	void insert(Entitate &e);
	vector<Entitate> getAll();
	void incarcaElemente();
	//void filtrare();
	void filtrare2();
	void filtrare3();
	void filtrareint();
	//void suma1();
	//void max();
	void delete1();
	void replace();
	void undo();
};

#endif
