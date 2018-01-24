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
	//Nodes to be inserted into the tree
	string* TreeNodes;
	//Number of nodes in the tree
	int NodesRequired;
	//Used to track the depth when generating the tree
	int CurrentDepth;
	
	//The node at the top of the tree
	Node* rootNode;
	//Generate the program tree
	Node* CreateTree(Node*);
	Node* CreateNode();

public:
	//Default constructor
	Individual();

	//Overload constructor 
	Individual(int);

	//Destructor
	~Individual();
	//Returns the root node of the tree
	Node* GetRootNode();
};

#endif