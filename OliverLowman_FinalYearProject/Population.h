#include "GUI.h"
#include "Individual.h"
#include <string>
using namespace System;
using namespace std;
using namespace System::Windows::Forms;

#ifndef Population_h
#define Population_h

class Population {
public:
	//Default constructor
	Population();

	//Overload constructor 
	Population(int);

	//Destructor
	~Population();

	//Generates the initial population
	void Generate();

	//TestOnly
	string PrintOutTree(int);
	//TestOnly
private:
	//Number of individuals in the population
	int MaxPopSize;
	Individual* Individuals;
	//TestOnly
	string TempReturn;
	void PrintPrivate(Node*);
	//TestOnly
};

#endif