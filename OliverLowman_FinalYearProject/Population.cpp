#include "Population.h"


Population::Population(int GivenMaxSize){
	MaxPopSize = GivenMaxSize;
	Individuals = new Individual[MaxPopSize];
	TargetFormula = "x*x+(x-1)";
	//TestRangeSize = 21;
	TestRangeSize = 3;
	TestRange = vector<float>(TestRangeSize);
	//TestRange = { -1, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f, 0, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1 };
	TestRange = {1,2,3};
	TargetValues = vector<float>(TestRangeSize);
	TargetValues = {1,5,11};
	//TargetValues={-3,-2.71f,-2.44f,-2.19f, -1.96f,-1.75f,-1.56f,-1.39f,-1.24f,-1.11f,-1, -0.89f,-0.76f, -0.61f, -0.44f, -0.25f, -0.04f, 0.19f, 0.44f,0.71f,1};
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

void Population::Evaluate() {

	for (int i = 0; i < MaxPopSize; i++)
	{
		float CurrentDiffernce = 0;
		for (int j = 0; j < TestRangeSize; j++)
		{
			float CurrentResult = 0;
			CurrentResult = RunProgram(Individuals[i].GetRootNode(), TestRange[j]);
			if (CurrentResult > TargetValues[j])
			{
				CurrentDiffernce += (CurrentResult - TargetValues[j]);
			}
			else
			{
				CurrentDiffernce += (TargetValues[j]- CurrentResult);
			}
		}
		Individuals[i].SetTotalDiff(CurrentDiffernce);
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
string Population::PrintOutTotalDistance(int GivenNum) {
	int Chosen = GivenNum;
	string result = "";
	result = to_string(Individuals[Chosen].GetTotalDiff());
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