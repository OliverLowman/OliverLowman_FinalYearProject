#include "Population.h"


Population::Population(int GivenMaxPopSize, int GivenMaxTreeDepth, float GivenCrossoverRate, float GivenMutationRate, int GivenTreeGenMethod){
	MaxPopSize = GivenMaxPopSize;
	MaxTreeDepth = GivenMaxTreeDepth;
	TreeGenMethod = GivenTreeGenMethod;
	//Individuals = new Individual[MaxPopSize];
	Individuals = vector<Individual>(MaxPopSize);
	//NextGeneration = new Individual[MaxPopSize];
	NextGeneration = vector<Individual>(MaxPopSize);
	TargetFormula = "x*x+(x-1)";
	TestRangeSize = 10;
	CrossoverRate = GivenCrossoverRate;
	MutationRate = GivenMutationRate;
	ReproductionRate = 100- (CrossoverRate + MutationRate);
	LowestDifference = -1;
	AverageDifference = 0;
	//TestRangeSize = 3;
	TestRange = vector<float>(TestRangeSize);
	//TestRange = { -1, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1 };
	TestRange = { -1, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f};
	//TestRange = {1,2,3};
	TargetValues = vector<float>(TestRangeSize);
	//TargetValues = {1,5,11};
	//TargetValues={-3,-2.71f,-2.44f,-2.19f, -1.96f,-1.75f,-1.56f,-1.39f,-1.24f,-1.11f, -0.89f,-0.76f, -0.61f, -0.44f, -0.25f, -0.04f, 0.19f, 0.44f,0.71f,1};
	TargetValues = { -3,-2.71f,-2.44f,-2.19f, -1.96f,-1.75f,-1.56f,-1.39f,-1.24f,-1.11f};
	CriteriaMet = false;
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
		Individuals[i] = Individual(MaxTreeDepth, TreeGenMethod);
	}
}


float Population::RunProgram(Node* CurrentNode, float CurrentValue)
{
	Node* NewNode = CurrentNode;
	float xValue = CurrentValue;
	//if (NewNode !=NULL)
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
				CurrentBestIndividual = i;
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
		}
	}
	if (LowestDifference == -1)
	{
		LowestDifference = MinDiff;
	}
	else if (LowestDifference > MinDiff)
	{
		LowestDifference = MinDiff;
	}
	AverageDifference = 0;
	float sum = 0;
	for (int x = x; x < MaxPopSize; x++)
	{
		sum += Individuals[x].GetTotalDiff();
		if (Individuals[x].GetTotalDiff() == 0 && Individuals[x].GetIsInvalid() == false)
		{
			CriteriaMet = true;
			CurrentBestIndividual = x;
		}
	}
	AverageDifference = sum / MaxPopSize;

}

float Population::GetLowestDiff() {
	return LowestDifference;
}

void Population::setLowestDiff(float GivenValue) {
	float NewDiff = GivenValue;
	LowestDifference = NewDiff;
}

float Population::GetAvergeDiff() {
	return AverageDifference;
}

int Population::GetBestCurrentIndividual() {
	return CurrentBestIndividual;
}

bool Population::GetCriteriaMet() {
	return CriteriaMet;
}

void Population::CreateNewGen() {
	Crossover();
	Mutate();
	Reproduce();
	Individuals = NextGeneration;
}

void Population::Crossover() {
	float NumOfLoops = MaxPopSize * (CrossoverRate / 100);
	for (int i = 0; i < NumOfLoops; i++)
	{		
		int Parent1Num = 0;
		int Parent2Num = 0;
		Parent1Num = ProportionateSelection();
		Parent2Num = ProportionateSelection();
		string NodeList1 = Individuals[Parent1Num].PrintTree(2);
		string NodeList2 = Individuals[Parent2Num].PrintTree(3);
		NodeList2 = NodeList2.substr(0, NodeList2.size() - 1);
		for (int j = 0; j < NodeList1.length(); j++)
		{
			if (NodeList1[j] == 'C')
			{
				NodeList1.replace(j, 1, NodeList2);
				break;
			}
		}

		NextGeneration[i] = Individual(MaxTreeDepth,TreeGenMethod, NodeList1);
	}
}

void Population::Mutate() {
	float CurrentIncrement = MaxPopSize * (CrossoverRate / 100);
	int CurrentIncrementInt = CurrentIncrement;
	float NumOfLoops = MaxPopSize * (MutationRate / 100);
	for (int i = 0; i < NumOfLoops; i++)
	{
		int ParentNum = 0;
		ParentNum = ProportionateSelection();
		string NodeList1 = Individuals[ParentNum].PrintTree(2);
		Individual RandomIndividual = Individual(MaxTreeDepth,TreeGenMethod);
		string NodeList2 = RandomIndividual.PrintTree(1);
		for (int j = 0; j < NodeList1.length(); j++)
		{
			if (NodeList1[j] == 'C')
			{
				NodeList1.replace(j, 1, NodeList2);
				break;
			}
		}
		
		NextGeneration[CurrentIncrementInt+i] = Individual(MaxTreeDepth,TreeGenMethod, NodeList1);
	}
}

void Population::Reproduce()
{
	float CurrentIncrement = MaxPopSize * (CrossoverRate / 100);
	CurrentIncrement += MaxPopSize * (MutationRate / 100);
	int CurrentIncrementInt = CurrentIncrement;
	float NumOfLoops = MaxPopSize * (ReproductionRate / 100);
	for (int i = 0; i < NumOfLoops; i++)
	{
		int ParentNum = 0;
		ParentNum = ProportionateSelection();
		string NodeList = Individuals[ParentNum].PrintTree(1);
		
		NextGeneration[CurrentIncrementInt + i] = Individual(MaxTreeDepth,TreeGenMethod, NodeList);;
	}
}


/*
void Population::PointMutate() {
	float CurrentIncrement = MaxPopSize * (CrossoverRate / 100);
	CurrentIncrement -= 1;
	float NumOfLoops = MaxPopSize * (MutationRate / 100);
	for (int i = 0; i < NumOfLoops; i++)
	{
		int ParentNum = 0;
		ParentNum = ProportionateSelection();
		string NodeList1 = Individuals[ParentNum].PrintTree(1);
		int HalfListSize = NodeList1.length() / 4;
		int ReplaceNum = 2 + (std::rand() % (1 - HalfListSize + 1));
		string NodesReplaced = "";
		for (int j = 0; j < ReplaceNum; j++)
		{
			int ChosenNode = 0;
			while (true)
			{
				bool valid = true;
				ChosenNode = 2 + (std::rand() % (1 - NodeList1.length() + 1));
				if (ChosenNode == ' ')
				{
					valid = false;
				}
				for (int g = 0; g < NodesReplaced.length(); g++)
				{
					if (NodesReplaced[g] == ChosenNode)
					{
						valid = false;
					}
				}
				if (valid == true)
				{
					NodeList1.erase(ChosenNode, ChosenNode - 2);
					
					//NodeList1.insert(j, NodeList2);
				}
			}
		}
		
	}
}
*/
int Population::ProportionateSelection() {
	int ChosenIndividual = 0;
	int RandIndividual = 0;
	float RandFloat = 0;
	while (true)
	{
		RandIndividual = 1 + (rand() % static_cast<int>(MaxPopSize - 2 + 1));
		RandFloat = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 100));
		if (Individuals[RandIndividual].GetFitnessScore() > RandFloat)
		{
			float test = Individuals[RandIndividual].GetFitnessScore();
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
	return Individuals[Chosen].PrintTree(1);
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