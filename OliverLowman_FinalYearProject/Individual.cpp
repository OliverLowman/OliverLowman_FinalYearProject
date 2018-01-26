#include "Individual.h"
//Default constructor
Individual::Individual(){
	//Default range
	rootNode = NULL;
	FunctionSetMax = 4;
	FunctionSet = new string[FunctionSetMax]{"-", "+", "*", "%"};
	TerminalRange = new int[2]{-5, 5};
	MaximumDepth = 2;
	CurrentDepth = 0;
	isInvalid = false;
	rootNode = CreateTree(rootNode);
	//ADD DESTRUCTOR STUFF ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###########============##
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
			nodePTR->value = 'X';
		}
		else{
			int randNum;
			while (true)
			{
				randNum = TerminalRange[0] + (rand() % (TerminalRange[1] - TerminalRange[0] + 1));
				if (randNum != 0)
				{
					break;
				}
			}
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

float Individual::GetTotalDiff() {
	return TotalDifference;
}

void Individual::SetTotalDiff(float Input) {
	TotalDifference = Input;
}

float Individual::GetFitnessScore() {
	return FitnessScore;
}

void Individual::SetFitnessScore(float Input) {
	FitnessScore = Input;
}

bool Individual::GetIsInvalid() {
	return isInvalid;
}

void Individual::SetIsInvalid(bool Input) {
	isInvalid = Input;
}