#include <iostream>
#include <string>

#ifndef ENTITATE_H
#define ENTITATE_H

using namespace std;

class Entitate {
private:
	int noOfBranches;
	int totalNoOfCommits;
	string gitPath;
	//int nrAp;
	//int suma;
	//string tip;
	
public:
	Entitate();
	Entitate(int noOfBranches, int totalNoOfCommits,  string gitPath);
	Entitate(const Entitate &e);
	~Entitate();
	void set_noOfBranches(int noOfBranches);
	int get_noOfBranches();
	void set_totalNoOfCommits(int totalNoOfCommits);
	int get_totalNoOfCommits();
	void set_gitPath(string gitPath);
	string get_gitPath();
	void afisare();//to-string
	Entitate& operator=(const Entitate&e);
};

#endif //ENTITATE_H
