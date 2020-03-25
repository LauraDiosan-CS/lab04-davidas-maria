#ifndef REPO_H
#define REPO_H


#include "Entitate.h"
#include <iostream>
#include <string>
#include <vector>


class Repo {
private:
	vector<Entitate> chelt;
public:
	Repo();
	Repo(const Repo&r);
	~Repo();
	int getSize();
	void addElem(Entitate &e);
	void insertElem(Entitate &e);
	Entitate& getElem(int pos);
	vector<Entitate> getAll();
	void incarcaElemente();
	//vector<Entitate> filtruCheltuieli(string gitPath);
	vector<Entitate> filtruCommit(int k);
	vector<Entitate> filtruBranch(int l);
	vector<Entitate> filtru(int noOfBranches, int totalNoOfCommits);
	//int sumaCheltuieli(string gitPath);
	//Entitate& maxCheltuieli(string gitPath);
	vector<Entitate>deleteNrAp(int noOfBranches);
	vector<Entitate>replace(int noOfBranches);

};

#endif

