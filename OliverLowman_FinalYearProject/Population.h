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
	//Constructor 
	Population(int, int,float, float,int, int);
	
	//Destructor
	~Population();

	//Generates the initial population
	void Generate();

	//Evaluates the current population and assigns fitness values
	void Evaluate();

	//Generates a new generation 
	void CreateNewGen();

	//Returns the lowest difference achived by any individual in the run
	double GetLowestDiff();

	void setLowestDiff(float);

	//Returns the average differnce across all individuals in the run
	float GetAvergeDiff();

	bool GetCriteriaMet();

	int GetBestCurrentIndividual();

	Individual GetBestCurrentIndividualObj();


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
	//Maximum depth of the binary expression trees
	int MaxTreeDepth;
	//The current generation of individuals
	vector<Individual> Individuals;
	//The given tree generation method, 0 = Full, 1 = Grow & 2 = Ramped Half and Half
	int TreeGenMethod;

	//The given selection method, 0 = proportinate, 1 = tournament 
	int SelectionMethod;

	//The percent of the next generation that will be generated via crossover
	float CrossoverRate;
	//The percent of the next generation that will be generated via mutation
	float MutationRate;

	//The percent of the next generation that will be generated via reproduction
	float ReproductionRate;
	
	float LowestDifference;
	float AverageDifference;
	int CurrentBestIndividual;
	Individual CurrentBestObj;
	//Stores the next generation of individuals while it is being generated
	vector<Individual> NextGeneration;

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
	
	//Selects two random individuals, compares their FitnessScores and returns the array index of the individual with the highest score
	int TournamentSelection();

	//Creates a set of new individuals for the next generation via crossover
	void Crossover();

	//Creates a set of new individuals for the next generation via mutation
	void Mutate();

	//Creates a set of new individuals for the next generation via reproduction
	void Reproduce();


	bool CriteriaMet;

	//TestOnly
	string TempReturn;
	string TempReturn2;
	void PrintPrivate(Node*);
	void PrintPrivate2(Node*);
	//TestOnly


	
	
};

#endif