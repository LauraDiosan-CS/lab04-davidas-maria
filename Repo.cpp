#include "repo.h"
#include <iostream>
#include <algorithm>

using namespace std;

//constructor fara param
Repo::Repo() {
	this->chelt;
}

//constuctor de copiere
Repo::Repo(const Repo&r) {
	this->chelt = r.chelt;
}

//destructor
Repo::~Repo() {

}

//getter pentru marime
int Repo::getSize() {
	return chelt.size();
}


//adauga element in vector la sfarsit
void Repo::addElem(Entitate &e) {
	chelt.push_back(e);

}

//insereaza element pe o pozitie data
void Repo::insertElem(Entitate &e) {
	int pos;
	cout << "Dati pozitia pe care se va insera elementul ";
	cin >> pos;
	chelt.insert(chelt.begin() + pos, e);

}

//getelement
Entitate& Repo::getElem(int pos) {
	return chelt.operator[](pos);
}

//getAll
vector<Entitate> Repo::getAll() {
	return chelt;
}

void Repo::incarcaElemente() {
	Entitate s1 = Entitate(5, 120, "phs");
	Entitate s2 = Entitate(10, 80, "app");
	Entitate s3 = Entitate(8, 140, "tdv");
	Entitate s4 = Entitate(13, 100, "fpoa");
	Entitate s5 = Entitate(8, 100, "sdd");
	Entitate s6 = Entitate(20, 40, "aaa");
	Entitate s7 = Entitate(5, 100, "fel");

	chelt.push_back(s1);
	chelt.push_back(s2);
	chelt.push_back(s3);
	chelt.push_back(s4);
	chelt.push_back(s5);
	chelt.push_back(s6);
	chelt.push_back(s7);
}

/*filtru pentru tip
vector<Entitate> Repo::filtruCheltuieli(string gitPath) {
	vector<Entitate> newChelt;
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_gitPath() == gitPath) {
			newChelt.push_back(chelt[i]);
		}
	}
	for (int i = 0; i < newChelt.size(); i++) {
		newChelt[i].afisare();
	}

	return newChelt;
}
*/
//filtru pentru L commit-uri
vector<Entitate> Repo::filtruCommit(int k) {
	vector<Entitate> newChelt;
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_totalNoOfCommits() <= k) {
			newChelt.push_back(chelt[i]);
		}
	}
	for (int i = 0; i < newChelt.size(); i++) {
		newChelt[i].afisare();
	}
	return newChelt;
}

//filtru pentru  K branch-uri
vector<Entitate> Repo::filtruBranch(int l) {
	vector<Entitate> newChelt;
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_noOfBranches() <= l) {
			newChelt.push_back(chelt[i]);
		}
	}
	for (int i = 0; i < newChelt.size(); i++) {
		newChelt[i].afisare();
	}
	return newChelt;
}


vector<Entitate> Repo::filtru(int noOfBranches, int totalNoOfCommits) {
	vector<Entitate> newChelt;
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_noOfBranches() <= noOfBranches && chelt[i].get_totalNoOfCommits() <= totalNoOfCommits) {
			newChelt.push_back(chelt[i]);
		}
	}	
	for (int i = 0; i < newChelt.size(); i++) {
		newChelt[i].afisare();
	}
	return newChelt;
}
	
/*suma cheltuieli
int Repo::sumaCheltuieli(string gitPath) {
	int suma = 0;
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_gitPath() == gitPath) {
			suma += suma + chelt[i].get_totalNoOfCommits();
		}
	}
	cout << suma;
	return suma;
}


//maxim dupa tip
Entitate& Repo::maxCheltuieli(string gitPath) {
	Entitate max = Entitate();
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_gitPath() == gitPath) {
			if (chelt[i].get_totalNoOfCommits() > max.get_totalNoOfCommits()) {
				max = chelt[i];
			}
		}
	}
	max.afisare();
	return max;
} 
*/
//eliminare dupa Branch
vector<Entitate> Repo::deleteNrAp(int noOfBranches) {
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_noOfBranches() == noOfBranches) {
			int pos = i;
			chelt.erase(chelt.begin() + pos);
		}
	}
	return chelt;
}


//replace
vector<Entitate> Repo::replace(int noOfBranches) {
	int n;
	for (int i = 0; i < chelt.size(); i++) {
		if (chelt[i].get_noOfBranches() == noOfBranches) {
			cout << "Modificarea dorita este: ";
			cin >> n;
			chelt[i].set_totalNoOfCommits(n);
		}
	}
	return chelt;
}