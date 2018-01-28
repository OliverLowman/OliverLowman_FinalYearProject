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
	GivenNodes = "";
	PrintOutput = "";
	isInvalid = false;
	rootNode = CreateTree(rootNode);
	//ADD DESTRUCTOR STUFF ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###########============##
}

//Crossover constructor
Individual::Individual(string CrossoverInput) {
	//Default range
	rootNode = NULL;
	FunctionSetMax = 4;
	FunctionSet = new string[FunctionSetMax]{ "-", "+", "*", "%" };
	TerminalRange = new int[2]{ -5, 5 };
	MaximumDepth = 2;
	CurrentDepth = 0;
	GivenNodes = CrossoverInput;
	PrintOutput = "";
	isInvalid = false;
	rootNode = CreateTreeViaCrossover(rootNode);
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

Node* Individual::CreateTreeViaCrossover(Node* CurrentNode) {
	Node* NewNode = new Node;
	bool Cont;

	string NewValue = "";
	int CharCount = 0;
	for (int i = 0; i < GivenNodes.length(); i++)
	{
		if (GivenNodes[i] != ' ')
		{
			NewValue += GivenNodes[i];
			CharCount += 1;
		}
		else
		{
			CharCount += 1;
			break;
		}
	}
	if (NewValue != "+" && NewValue != "-" && NewValue != "%" && NewValue != "*")
	{
		Cont = false;
	}
	else
	{
		Cont = true;
	}
	NewNode->value = NewValue;
	NewNode->leftChild = NULL;
	NewNode->rightChild = NULL;
	Node* LeftChild = NULL;
	Node* RightChild = NULL;
	GivenNodes.erase(0, CharCount);
	if (GivenNodes.length() > 0 && Cont == true)
	{
		NewNode->leftChild = CreateTreeViaCrossover(LeftChild);
		if (GivenNodes.length() > 0)
		{
			NewNode->rightChild = CreateTreeViaCrossover(RightChild);
		}
	}
	return NewNode;
}

string Individual::PrintTree() {
	PrintOutput = "";
	PrivatePrint(rootNode);
	return PrintOutput;
}

void Individual::PrivatePrint(Node* Current) {
	Node* NewNode = Current;
	
	if (NewNode->leftChild != NULL)
	{
		PrintOutput += NewNode->value;
		PrintOutput += " ";
		PrivatePrint(NewNode->leftChild);		
		PrivatePrint(NewNode->rightChild);
		
	}
	else
	{
		PrintOutput += NewNode->value;
		PrintOutput += " ";
	}
}
/*
string Population::PrintOutTree(int GivenNum) {
	int Chosen = GivenNum;
	Node* GivenNode = Individuals[Chosen].GetRootNode();
	PrintPrivate(GivenNode);

	return TempReturn;
}


void Population::PrintPrivate(Node* Current)
{
	Node* NewNode = Current;
	if (NewNode->leftChild != NULL)
	{
		PrintPrivate(NewNode->leftChild);
		TempReturn += NewNode->value;
		TempReturn += " ";
		PrintPrivate(NewNode->rightChild);
	}
	else
	{
		TempReturn += NewNode->value;
		TempReturn += " ";
	}
}
*/
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
