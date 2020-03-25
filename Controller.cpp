#include <iostream>
#include <string>
#include "Controller.h"
#include <algorithm>

using namespace std;

//constructor
Controller::Controller() {
	this->rep;
	this->undoList.push_back(this->rep);
}

//destructor
Controller::~Controller() {

}

//adauga un element de tip entitate in Repo
void Controller::adauga(Entitate &e) {
	rep.addElem(e);
}

//insereaza un element de tip entitate pe o anumita pozitie
void Controller::insert(Entitate &e) {
	rep.insertElem(e);
}

//afisare all
vector<Entitate> Controller::getAll() {
	return rep.getAll();
}

//incarca elemente de tip entitate in repo
void Controller::incarcaElemente() {
	rep.incarcaElemente();
}


/*filtrarea dupa tipul cheltuielii
void Controller::filtrare() {
	string gitPath;
	cout << "Filtrare dupa tipul cheltuielii\n";
	cin >> gitPath;
	rep.filtruCheltuieli(gitPath);
}
*/
//filtrarea dupa suma
void Controller::filtrare2() {
	int totalNoOfCommits;
	cout << "Filtrare dupa l commit-uri :\n";
	cin >> totalNoOfCommits;
	rep.filtruCommit(totalNoOfCommits);
}

//filtrarea dupa nr apartament
void Controller::filtrare3() {
	int noOfBranches;
	cout << "Filtrare dupa  K branch-uri:\n ";
	cin >> noOfBranches;
	rep.filtruBranch(noOfBranches);
}

//filtrare intr un interval
void Controller::filtrareint() {
	int noOfBranches, totalNoOfCommits;
	cout << "Filtrare dupa cel putin K branch-uri si L commit-uri\n";
	cout << "k este:\n";
	cin >> noOfBranches;
	cout << "l este:\n";
	cin >> totalNoOfCommits;
	rep.filtru(noOfBranches, totalNoOfCommits);
}

/*suma dupa tip de tranzactii
void Controller::suma1() {
	string gitPath;
	cout << "Dati gitPath:\n";
	cin >> gitPath;
	rep.sumaCheltuieli(gitPath);
}

//maxim dupa tip
void Controller::max() {
	string gitPath;
	cout << "Dati gitPath:\n";
	cin >> gitPath;
	rep.maxCheltuieli(gitPath);
}
*/
//sterge un element dupa nr ap
void Controller::delete1() {
	int noOfBranches;
	cout << "Dati noOfBranches:\n";
	cin >> noOfBranches;
	rep.deleteNrAp(noOfBranches);
}

//inlocuieste un element dupa nr ap
void Controller::replace() {
	int noOfBranches;
	cout << "Dati noOfBranches:\n";
	cin >> noOfBranches;
	rep.replace(noOfBranches);
}

//reface ultima operatie
void Controller::undo()
{
	auto actual_state = undoList.back();
	undoList.pop_back();
	this->rep = actual_state;

}