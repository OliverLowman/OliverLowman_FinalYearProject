#include "GUI.h"
#include "Individual.h"	
#include <string>
#include <vector>
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

	//Generates a new generation 
	void CreateNewGen();


	//~REMEMBER TO DISCLUDE INDIVIDUALS THAT HAVE TRUE ISINVALID VALUES/add appropriate comment
	
	//TestOnly
	string PrintOutTree(int);
	string PrintOutNewTree(int);
	string PrintOutResult(int);
	string PrintOutTotalDistance(int);
	string PrintOutTotalDistance2(int);
	//TestOnly
private:
	//Number of individuals in the population
	int MaxPopSize;

	//The current generation of individuals
	Individual* Individuals;

	//
	float CrossoverRate;

	float MutationRate;

	//The percent of the next generation that will be generated via reproduction
	float ReproductionRate;
	//Stores the next generation of individuals while it is being generated
	Individual* NextGeneration;

	//Number of values in the test range
	int TestRangeSize;
	//The range of values used to test the indiividuals in the population
	vector<float> TestRange;

	//Formula that the individuals should be trying to emulate
	string TargetFormula;

	//The values produced by the formula when given the values from the test range
	vector<float> TargetValues;
	//Gets the results of an individual when ran with the test values
	float RunProgram(Node*, float);

	//Returns the array index of a random individual but individuals with higher FitnessScores are more likely to be selected
	int ProportionateSelection();

	//Creates a set of new individuals for the next generation via crossover
	int Crossover();

	//TestOnly
	string TempReturn;
	string TempReturn2;
	void PrintPrivate(Node*);
	void PrintPrivate2(Node*);
	//TestOnly


	
	
};

#endif