#include "Population.h"


Population::Population(int GivenMaxSize){
	MaxPopSize = GivenMaxSize;
	Individuals = new Individual[MaxPopSize];
	TargetFormula = "x*x+(x-1)";
	TestRangeSize = 20;
	//TestRangeSize = 3;
	TestRange = vector<float>(TestRangeSize);
	TestRange = { -1, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1 };
	//TestRange = {1,2,3};
	TargetValues = vector<float>(TestRangeSize);
	//TargetValues = {1,5,11};
	TargetValues={-3,-2.71f,-2.44f,-2.19f, -1.96f,-1.75f,-1.56f,-1.39f,-1.24f,-1.11f, -0.89f,-0.76f, -0.61f, -0.44f, -0.25f, -0.04f, 0.19f, 0.44f,0.71f,1};
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
	//Set the TotalDifference value for each individual and record the maximum and minumum differences
	float MaxDiff = 0;
	float MinDiff = 0;
	bool first = true;
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
				CurrentDiffernce += (TargetValues[j] - CurrentResult);
			}			
		}
		if (CurrentDiffernce == INFINITY || CurrentDiffernce != CurrentDiffernce)
		{
			Individuals[i].SetIsInvalid(true);
		}

		else
		{
			Individuals[i].SetTotalDiff(CurrentDiffernce);
			if (first)
			{
				MaxDiff = CurrentDiffernce;
				MinDiff = CurrentDiffernce;
				first = false;
			}
			if (CurrentDiffernce > MaxDiff)
			{
				MaxDiff = CurrentDiffernce;
			}
			if (CurrentDiffernce < MinDiff)
			{
				MinDiff = CurrentDiffernce;
			}

		}
		
	}
	/*
	float testResult = 0;
	float div = 0;
	float mult = 0;
	mult = (2214000 - 92000)*(10 - 1);
	testResult = mult / (6425000-92000)+1;
	string temparino = "";
	
	//TAKE 100
	int testmeme = 55;
	testmeme = testmeme - 100;
	testmeme = testmeme / -1;
	string temparino = "";
	*/
	float NormalizedFitness = 0;
	for (int g = 0; g < MaxPopSize; g++)
	{
		NormalizedFitness = 0;
		if (Individuals[g].GetIsInvalid() == false)
		{		
			NormalizedFitness = (Individuals[g].GetTotalDiff()-MinDiff)*(100-10);
			NormalizedFitness = NormalizedFitness / (MaxDiff - MinDiff) + 1;
			NormalizedFitness -= 100;
			NormalizedFitness = NormalizedFitness / -1;
			Individuals[g].SetFitnessScore(NormalizedFitness);	
			float temp = 0;
			temp = Individuals[g].GetTotalDiff();
			string temparino = "";
		}
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
	result += " ";
	result += to_string(Individuals[Chosen].GetFitnessScore());
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