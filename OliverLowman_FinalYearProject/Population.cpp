#include "Population.h"


Population::Population(int GivenMaxSize){
	MaxPopSize = GivenMaxSize;
	Individuals = new Individual[MaxPopSize];
	NextGeneration = new Individual[MaxPopSize];
	TargetFormula = "x*x+(x-1)";
	TestRangeSize = 20;
	CrossoverRate = 95;
	MutationRate = 1;
	ReproductionRate = 100- (CrossoverRate + MutationRate);
	//TestRangeSize = 3;
	TestRange = vector<float>(TestRangeSize);
	TestRange = { -1, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1 };
	//TestRange = {1,2,3};
	TargetValues = vector<float>(TestRangeSize);
	//TargetValues = {1,5,11};
	TargetValues={-3,-2.71f,-2.44f,-2.19f, -1.96f,-1.75f,-1.56f,-1.39f,-1.24f,-1.11f, -0.89f,-0.76f, -0.61f, -0.44f, -0.25f, -0.04f, 0.19f, 0.44f,0.71f,1};
	//TestOnly
	TempReturn = "";
	TempReturn2 = "";
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

void Population::CreateNewGen() {
	
	int meme = Crossover();
}

int Population::Crossover() {
	int IndividualsGenerated = 0;
	float NumOfLoops = MaxPopSize * (CrossoverRate / 100);
	for (int i = 0; i < NumOfLoops; i++)
	{
		if (i == 56)
		{
			string gesg = "aw";
		}
		int Parent1Num = 0;
		int Parent2Num = 0;
		Parent1Num = ProportionateSelection();
		Parent2Num = ProportionateSelection();
		string NodeList1 = Individuals[Parent1Num].PrintTree(2);
		string NodeList2 = Individuals[Parent2Num].PrintTree(3);
		for (int j = 0; j < NodeList1.length(); j++)
		{
			if (NodeList1[j] == 'C')
			{
				NodeList1.erase(j,j-2);
				NodeList1.insert(j, NodeList2);
				break;
			}
		}
		Individual NewIndividual = Individual(NodeList1);;
		NextGeneration[i] = NewIndividual;
		IndividualsGenerated += 1;
	}
	return IndividualsGenerated;
}
int Population::ProportionateSelection() {
	int ChosenIndividual = 0;
	int RandIndividual = 0;
	float RandFloat = 0;
	while (true)
	{
		RandIndividual = 1 + (rand() % static_cast<int>(MaxPopSize - 1 + 1));
		RandFloat = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 100));
		if (Individuals[RandIndividual].GetFitnessScore() > RandFloat)
		{
			float test = Individuals[RandIndividual].GetFitnessScore();
			string haha = "faw";
			ChosenIndividual = RandIndividual;
			break;
		}
	}
	return ChosenIndividual;
}

//TestOnly
string Population::PrintOutResult(int GivenNum) {
	int Chosen = GivenNum;
	Node* GivenNode = Individuals[Chosen].GetRootNode();
	string result = "";
	result = to_string(RunProgram(GivenNode, 1));
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

string Population::PrintOutTotalDistance2(int GivenNum) {
	int Chosen = GivenNum;
	string result = "";
	NextGeneration[Chosen].SetTotalDiff(999);
	result = to_string(NextGeneration[Chosen].GetTotalDiff());
	result += " ";
	result += to_string(Individuals[128].GetTotalDiff());
	return result;
}
string Population::PrintOutTree(int GivenNum){
	int Chosen = GivenNum;
	Node* GivenNode = Individuals[Chosen].GetRootNode();
	PrintPrivate(GivenNode);

	return TempReturn;
}

string Population::PrintOutNewTree(int GivenNum) {
	int Chosen = GivenNum;
	Node* GivenNode = NextGeneration[Chosen].GetRootNode();
	PrintPrivate2(GivenNode);
	return TempReturn2;
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

void Population::PrintPrivate2(Node* Current)
{
	Node* NewNode = Current;
	if (NewNode->leftChild != NULL)
	{
		PrintPrivate2(NewNode->leftChild);
		TempReturn2 += NewNode->value;
		TempReturn2 += " ";
		PrintPrivate2(NewNode->rightChild);
	}
	else
	{
		TempReturn2 += NewNode->value;
		TempReturn2 += " ";
	}
}



//TestOnly