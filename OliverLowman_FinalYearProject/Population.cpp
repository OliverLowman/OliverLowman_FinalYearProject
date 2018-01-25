#include "Population.h"

//Default constructor
Population::Population(){
	//Default max population size
	MaxPopSize = 200;
	TestRange = new float[-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1];
	TargetFormula = "3+2";

}

Population::Population(int GivenMaxSize){
	MaxPopSize = GivenMaxSize;
	Individuals = new Individual[MaxPopSize];
	TestRange = new float[-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1];
	TargetFormula = "x*x+(x-1)";

	

	//TestOnly
	TempReturn = "";
	//TestOnly
}

Population::~Population(){

}

void Population::Generate(){
	for (int i = 0; i < MaxPopSize; i++)
	{
		Individuals[i] = Individual();
	}
}

/*
string Population::GetArray(int GivenNum){
	string* input = Individuals[GivenNum].GetTreeArray();
	string result;
	for (int g = 0; g < 31; g++)
	{
		result += input[g];
	}
	return result;
}
*/

float Population::RunProgram(Node* CurrentNode, float CurrentValue)
{
	Node* NewNode = CurrentNode;
	float xValue = CurrentValue;
	if (NewNode->leftChild == NULL && NewNode->rightChild == NULL)
	{
		if (NewNode->value == "X")
		{
			return xValue;
		}
		else
		{
			float NodeValue = ::atof(NewNode->value.c_str());
			return NodeValue;
		}
	}
	else
	{
		float result = 0.0;
		float leftValue = RunProgram(NewNode->leftChild, xValue);
		float rightValue = RunProgram(NewNode->rightChild, xValue);
		string Operator = NewNode->value;
		char OperatorChar = Operator[0];
		switch (OperatorChar)
		{
		case '+':
			result = leftValue + rightValue;
			break;
		case '-':
			result = leftValue - rightValue;
			break;
		case '%':
			result = leftValue / rightValue;
			break;
		case '*':
			result = leftValue * rightValue;
			break;
		}
		return result;
	}
	
	
}


//TestOnly
string Population::PrintOutResult(int GivenNum) {
	int Chosen = GivenNum;
	Node* GivenNode = Individuals[Chosen].GetRootNode();
	string result = "";
	result = to_string(RunProgram(GivenNode, 2));
	return result;
}

string Population::PrintOutTree(int GivenNum){
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
//TestOnly