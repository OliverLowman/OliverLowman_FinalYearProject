#include "Population.h"
//Default constructor
Population::Population(){
	//Default max population size
	MaxPopSize = 200;
}

Population::Population(int GivenMaxSize){
	MaxPopSize = GivenMaxSize;
	Individuals = new Individual[MaxPopSize];
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


//TestOnly
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