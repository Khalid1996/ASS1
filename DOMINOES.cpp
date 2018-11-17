#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Domino
{

	Domino(int, int);
	int Player(int);
	int AddDom2Head(int);
	int AddDom2Tail(int);
	int Boneyard(int);
	int pass(int Boneyard);
	char printDom;
	int CompChoice();

};
int Player(int playerchoice)
{


	cout << "Please enter your choice: ";
	cin >> playerchoice;


	return playerchoice;

}

int CompChoice()
{

	int Comp;

	do
	{
		for (int i = 0; i < 6; i++)
		{
			Comp = rand() % 16 - 1;
		}


	} while (Comp != 6);

		return Comp;

}


int Domino(int, int)
{

	const int MAX = 28;
	int array[MAX] = { };



}

char printDom()
{




}

int AddDom2Head()
{





}

int AddDom2Tail()
{





}


int Boneyard()
{

	int Bone;

	Bone = rand() % 16 - 1;

	return Bone;

}

int pass()
{





}

int PrintMenu()
{





}







int main()
{

	int playerchoice; //Hold the player choice
	int compchoice;





	do
	{

		cout << "Domino Menu: " << endl;
		cout << "\n1. Print your dominoes" << endl;
		cout << "2. Add a domino to the head of the train" << endl;
		cout << "3. Add a domino to the tail of the train" << endl;
		cout << "4. Pick a domino from the boneyard" << endl;
		cout << "5. Pass your turn (only if the boneyard is empty)" << endl;
		cout << "6. Print this menu" << endl;
		cout << "7.Quit" << endl;


		switch (playerchoice)
		{

		case 1: 
			printDom();

		case 2:
			AddDom2Head();

		case 3:
			AddDom2Tail();

		case 4:
			Boneyard();

		case 5:
			pass();

		case 6:
			PrintMenu();

		Default:
			return 0;

		}




	} 
	while (playerchoice != 7);



	cin.get();
	return 0;

}


