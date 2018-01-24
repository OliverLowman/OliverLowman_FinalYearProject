#include "Individual.h"
//Default constructor
Individual::Individual(){
	//Default range
	rootNode = NULL;
	FunctionSetMax = 4;
	FunctionSet = new string[FunctionSetMax]{"-", "+", "*", "%"};
	TerminalRange = new int[2]{-5, 5};
	MaximumDepth = 3;
	CurrentDepth = 0;
	rootNode = CreateTree(rootNode);
	//ADD DESTRUCTOR STUFF ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###########============##


	/*
	NodesRequired = pow(2, MaximumDepth) + (pow(2, MaximumDepth) - 1);
	TreeNodes = new string[NodesRequired]{};
	int testcount = 0;
	for (int i = 0; i < NodesRequired; i++)
	{
		if (i <(pow(2, MaximumDepth) - 1))
		{
			int randNum = rand() % FunctionSetMax;
			TreeNodes[i] = FunctionSet[randNum];
		}
		else
		{
			if (rand() % 100 < 50) {
				TreeNodes[i] = "X";
			}
			else{			
				int randNum = TerminalRange[0] + (rand() % (TerminalRange[1] - TerminalRange[0] + 1));
				TreeNodes[i] = to_string(randNum);
			}		
		}
	}
	*/
}


Individual::~Individual(){
	
}

Node* Individual::CreateTree(Node* CurrentNode){	
	Node* NewNode = CurrentNode;
	CurrentDepth += 1;
	NewNode = CreateNode();
	Node* LeftChild = NULL;
	Node* RighChild = NULL;
	if (CurrentDepth < MaximumDepth+1)
	{		
		NewNode->leftChild = CreateTree(LeftChild);
		NewNode->rightChild = CreateTree(RighChild);		
	}
	CurrentDepth -= 1;
	return NewNode;
}

Node* Individual::CreateNode(){
	Node* nodePTR = new Node;
	if (CurrentDepth < MaximumDepth+1)
	{
		int randNum = rand() % FunctionSetMax;
		nodePTR->value = FunctionSet[randNum];
	}
	else
	{
		if (rand() % 100 < 50) {
			nodePTR->value = "X";
		}
		else{
			int randNum = TerminalRange[0] + (rand() % (TerminalRange[1] - TerminalRange[0] + 1));
			nodePTR->value = to_string(randNum);
		}
	}
	nodePTR->leftChild = NULL;
	nodePTR->rightChild = NULL;
	return nodePTR;
}

Node* Individual::GetRootNode(){
	return rootNode;
}