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

	//Evaluates the current population and assigns fitness values
	void Evaluate();

	
	//TestOnly
	string PrintOutTree(int);
	string PrintOutResult(int);
	//TestOnly
private:
	//Number of individuals in the population
	int MaxPopSize;

	//The current generation of individuals
	Individual* Individuals;

	//The range of values used to test the indiividuals in the population
	float* TestRange;

	//Formula that the individuals should be trying to emulate
	string TargetFormula;

	//Gets the results of an individual when ran with the test values
	float RunProgram(Node*, float);

	//TestOnly
	string TempReturn;
	void PrintPrivate(Node*);
	//TestOnly

	
	
};

#endif