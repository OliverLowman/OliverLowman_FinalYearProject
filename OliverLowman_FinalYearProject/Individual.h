#include "GUI.h"
#include <string>
using namespace System;
using namespace std;
using namespace System::Windows::Forms;

#ifndef Individual_h
#define Individual_h
//struct for the nodes of the tree
struct Node
{
	Node* leftChild;
	Node* rightChild;
	string value;
};
class Individual {

private:
	//Number of nodes in the function set
	int FunctionSetMax;
	//Set of functions such as +,-,* ect
	string* FunctionSet;
	//Range of terminals such as constant numbers and variables
	int* TerminalRange;
	//Max depth of the tree
	int MaximumDepth;
	//Given tree generation method, 0 = full, 1 = grow and 2 = ramped half and half
	int TreeGenMethod;
	//Nodes to be inserted into the tree
	string* TreeNodes;
	//Number of nodes in the tree
	int NodesRequired;
	//Used to track the depth when generating the tree
	int CurrentDepth;
	//The current total difference between the results of this individual and the results of the target formula
	float TotalDifference;
	//The TotalDifference normalized from 1-100 and inverted, the value represents the individual's probablity of being selected for reproduction
	float FitnessScore;
	//Records whether or not a proram is invalid, an invalid program is one that contains division by 0 and cannot be ran
	bool isInvalid;
	//The node at the top of the tree
	Node* rootNode;
	//Generate the program tree
	Node* CreateTree(Node*);
	Node* CreateTreeViaCrossover(Node*);
	Node* CreateNode();
	Node* ChosenNode;
	string GivenNodes;
	int CurrentNode;
	string PrintOutput;
	void PrivateFullPrint(Node*);
	void PrivateCrossoverPrint(Node*, int);
	void PrivateFindNode(Node*, int);
	void PrivateDeleteTree(Node*);
	void PrivateCoutNodes(Node*);
	int NumOfNodes;


public:
	//Default constructor
	Individual();

	Individual(int, int);

	//Overload constructor 
	Individual(int,int,string);

	//Destructor
	~Individual();
	//Returns the root node of the tree
	Node* GetRootNode();

	//Sets the TotalDiffernce value
	void SetTotalDiff(float);

	//Returns the TotalDifference value
	float GetTotalDiff();

	//Sets the FitnessScore value
	void SetFitnessScore(float);

	//Returns the FitnessScore value
	float GetFitnessScore();

	//Sets whether or not the program is invalid
	void SetIsInvalid(bool);

	//Returns whether or not the program is invalid
	bool GetIsInvalid();

	//Returns a string containing each node of the tree in the order that they are generated
	string PrintTree(int);

	//Sets the NumOfNodes value to the current number of nodes in the tree
	void CountNodes();

	//Sets ChosenNode
	void FindNode(int);

	//Deletes all nodes below and including the root node
	void DeleteTree();
};

#endif