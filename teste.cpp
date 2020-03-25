#include <iostream>
#include "Entitate.h"
#include "Repo.h"
#include <cassert>

void testget_noOfBranches()
{
	Entitate c1(2, 50, "aaa");
	int p = c1.get_noOfBranches();
	assert(p == 2);
}

void testget_totalNoOfCommits()
{
	Entitate c1(2, 50, "few");
	int p = c1.get_totalNoOfCommits();
	assert(p == 50);
}

void testget_gitPath()
{
	Entitate c1(2, 50, "gre");
	string p = c1.get_gitPath();
	assert(p == "apa");
}

void testset_noOfBranches()
{
	Entitate c1(4, 50, "ian");
	c1.set_noOfBranches(25);
	assert(c1.get_noOfBranches() == 25);
}

void testset_totalNoOfCommits()
{
	Entitate c1(4, 50, "gaz");
	c1.set_totalNoOfCommits(20);
	assert(c1.get_totalNoOfCommits() == 20);
}

void testset_gitPath()
{
	Entitate c1(4, 50, "eee");
	c1.set_gitPath("gdd");
	assert(c1.get_gitPath() == "gdd");
}


//test pentru constructor gol(default)
void test1() {
	Entitate t1 = Entitate();
	assert(t1.get_noOfBranches() == 0);
	assert(t1.get_totalNoOfCommits() == 0);
	assert(t1.get_gitPath() == "");
	t1.~Entitate();
}

//test pentru constructor cu param
void test2() {
	Entitate t2 = Entitate(26, 400, "fff");
	assert(t2.get_noOfBranches() == 26);
	assert(t2.get_totalNoOfCommits() == 400);
	assert(t2.get_gitPath() == "fff");
	
}

//test pentru Repo

void test3()
{
	Entitate t(6, 400, "ddd" );
	Entitate t1(24, 50, "gr" );
	Entitate t2(23, 100, "aefg");
	Repo chelt;
	Repo chelt1;
	chelt.addElem(t);
    chelt.addElem(t1);
	chelt.addElem(t2);
	assert(chelt.getSize() == 3);
	int nr = 6;
	chelt.deleteNrAp(nr);
	assert(chelt.getSize() == 2);
	cout << "Testele au trecut!" << endl;
}

void test4()
{
	Entitate t(16, 400,  "grf");
	Entitate t1(4, 200,  "esd");
	Entitate t2(5, 100,  "mar");
	Repo chelt;
	Repo chelt1;
	chelt.addElem(t);
	chelt.addElem(t1);
	chelt.addElem(t2);
	assert(chelt.getSize() == 3);
	int nr = 5;
	chelt.replace(nr);
	assert(chelt.getSize() == 3);

}
