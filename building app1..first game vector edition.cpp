#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void vectors(vector<int>guesses2)
{
	if(guesses2.size() != 1)
	{
			cout<<"you guessed "<<guesses2.size()<<" amount of times\n";
			cout<<"your guesses: ";
	}
    	
		for(int i =0;i < guesses2.size();i++)
	{
		if(guesses2.size() != 1)
		
		
			cout<<guesses2[i]<<"\t";
	}
	cout<<endl<<endl;
}


void play()
{
	int random = rand() % 21;
	vector<int> guesses;
	cout<<"guess the num from 0-20: \n";
	
	while(true)
	{
		int guess;
		cin>>guess;
		
		guesses.push_back(guess);
		
		if(guess == random)
		{
			cout<<"you win\n\n";
			break;
		}
		else if (guess < random)
		{
			cout<<"too low\n";
		}
		else
		{
			cout<<"too high\n";
		}
	}
	vectors(guesses);
}

int main()
{
	cout<<"WELCOME TO THE GUESSING GAME\n\n";
	srand(time(NULL));
	int choice;
	do
	{
		cout<<"menu:\n"<<"0. quit"<<endl<<"1. play"<<endl;
		cin>>choice;
		switch(choice)
		{
		
			case 0:
				cout<<"bye felicia\n";
				return 0;
			case 1:
				play();
				break;
		}
	}
	while(choice != 0);
	
	return 0;
}

