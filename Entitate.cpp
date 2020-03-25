#include <iostream>
#include <string>
#include "Entitate.h"

using namespace std;


//constructor default(fara param)
Entitate::Entitate() {
	this->noOfBranches = 0;
	this->totalNoOfCommits = 0;
	this->gitPath = "";
}

//constructor cu parametri
Entitate::Entitate(int noOfBranches, int totalNoOfCommits, string gitPath) {
	this->noOfBranches = noOfBranches;
	this->totalNoOfCommits = totalNoOfCommits;
	this->gitPath = gitPath;
}

//constructor de copiere
Entitate::Entitate(const Entitate &e) {
	this->noOfBranches = e.noOfBranches;
	this->totalNoOfCommits = e.totalNoOfCommits;
	this->gitPath = e.gitPath;
}

//destructor
Entitate::~Entitate() {

}

//setter pentru numarul apartamentului
void Entitate::set_noOfBranches(int noOfBranches) {
	this->noOfBranches = noOfBranches;
}

//getter pentru numarul apartamentui
int Entitate::get_noOfBranches() {
	return this->noOfBranches;
}

//setter pentru suma
void Entitate::set_totalNoOfCommits(int totalNoOfCommits) {
	this->totalNoOfCommits = totalNoOfCommits;
}

//getter pentru suma
int Entitate::get_totalNoOfCommits() {
	return this->totalNoOfCommits;
}

//setter pentru gitPath
void Entitate::set_gitPath(string gitPath) {
	this->gitPath = gitPath;
}

//getter pentru gitPath
string Entitate::get_gitPath() {
	return this->gitPath;
}

//afisare
void Entitate::afisare() {
	cout << this->noOfBranches << "-" << this->totalNoOfCommits << "-" << this->gitPath <<";";
}

//suprascrie operatorul = pentru elem de tip entitate
Entitate& Entitate::operator=(const Entitate& e) {
	if (this != &e) {
		this->set_noOfBranches(e.noOfBranches);
		this->set_totalNoOfCommits(e.totalNoOfCommits);
		this->set_gitPath(e.gitPath);
	}
	else
		cout << "self assignment ... " << endl;
	return *this;
}